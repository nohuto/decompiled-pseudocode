/*
 * XREFs of CiDispatchCreateTaskIndexClient @ 0x1C000A240
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexReference @ 0x1C00011A0 (CiTaskIndexReference.c)
 *     CiTaskIndexDereference @ 0x1C00021B0 (CiTaskIndexDereference.c)
 *     WPP_SF_ @ 0x1C0004634 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C00048CC (WPP_SF_dd.c)
 *     CiLookupTask @ 0x1C000AC70 (CiLookupTask.c)
 *     CiTaskIndexCreate @ 0x1C000B370 (CiTaskIndexCreate.c)
 */

__int64 __fastcall CiDispatchCreateTaskIndexClient(PIRP Irp, __int64 a2, __int64 a3)
{
  int v3; // r9d
  char v4; // r15
  struct _IRP *MasterIrp; // rax
  unsigned int v6; // ebp
  NTSTATUS v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rbx
  signed __int64 v12; // rcx
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 32);
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0;
  v9 = -1073741811;
  if ( v3 != 280 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xFu, a3, v3, 280);
    goto LABEL_10;
  }
  v10 = *(_QWORD *)&MasterIrp->Flags;
  if ( v10 && Irp->RequestorMode )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_69ae99e199ca39a7c7a05b58b80334a5_Traceguids);
    goto LABEL_10;
  }
  v16 = *(_QWORD *)&MasterIrp->Flags;
  v11 = 0LL;
  v17 = 0LL;
  if ( !v10 )
  {
    v9 = CiLookupTask(
           &MasterIrp->AssociatedIrp,
           &MasterIrp->Tail.CompletionKey + 4,
           &v17,
           BYTE3(MasterIrp->MdlAddress),
           &v17);
    if ( v9 < 0 )
      goto LABEL_22;
    v11 = v17;
  }
  v4 = 1;
  KeEnterCriticalRegion();
  if ( v10 )
  {
    CiTaskIndexReference(v10);
LABEL_7:
    v12 = *(_QWORD *)(a2 + 48);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 8), v12, 0LL) )
    {
      v13 = v16;
      v9 = 0;
      *(_QWORD *)(v12 + 24) = v16;
      v6 = *(_DWORD *)(v13 + 144);
LABEL_9:
      KeLeaveCriticalRegion();
      goto LABEL_10;
    }
    v10 = v16;
    v9 = -1073740008;
    goto LABEL_22;
  }
  v15 = CiTaskIndexCreate(v11, &v16);
  v10 = v16;
  v9 = v15;
  if ( v15 >= 0 )
    goto LABEL_7;
LABEL_22:
  if ( v10 )
    CiTaskIndexDereference((_QWORD *)v10);
  if ( v4 )
    goto LABEL_9;
LABEL_10:
  Irp->IoStatus.Information = v6;
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
