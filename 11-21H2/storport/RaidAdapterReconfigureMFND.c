/*
 * XREFs of RaidAdapterReconfigureMFND @ 0x1C0036034
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     StorLogMFNDReconfigure @ 0x1C003C15C (StorLogMFNDReconfigure.c)
 *     StorResetMFND @ 0x1C00919E0 (StorResetMFND.c)
 */

__int64 __fastcall RaidAdapterReconfigureMFND(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rdi
  int MdlAddress_high; // r14d
  __int64 v6; // rcx
  unsigned int Options; // edx
  unsigned int v8; // eax
  signed int v9; // ebx
  unsigned int *p_Flags; // rdi
  __int64 v11; // rdx
  int v12; // r8d
  int v14; // [rsp+50h] [rbp+8h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  MdlAddress_high = 0;
  v14 = 0;
  a2->IoStatus.Information = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 || (v6 = *(_QWORD *)(a1 + 5904)) == 0 )
  {
    v9 = -1073741637;
    goto LABEL_22;
  }
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14
    || !MasterIrp
    || *(_DWORD *)&MasterIrp->Type != 20
    || (v8 = *(_DWORD *)(&MasterIrp->Size + 1), v8 < 0x14)
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress), MdlAddress_high != 1) )
  {
    v9 = -1073741811;
LABEL_22:
    v12 = -1;
    goto LABEL_23;
  }
  if ( Options < 0x20 || v8 < 0x20 )
  {
    v9 = -1073741789;
    goto LABEL_22;
  }
  p_Flags = &MasterIrp->Flags;
  if ( *p_Flags == 16
    && p_Flags[1] >= 0x10
    && (v11 = p_Flags[2], (_DWORD)v11)
    && (unsigned int)v11 <= *(unsigned __int16 *)(v6 + 8) )
  {
    v9 = StorResetMFND(a1, v11, &v14);
    if ( v9 >= 0 )
      v9 = -2147483210;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( !p_Flags )
    goto LABEL_22;
  v12 = p_Flags[2];
LABEL_23:
  StorLogMFNDReconfigure(a1, MdlAddress_high, v12, v14, v9);
  return RaidCompleteRequestEx(a2, 0, v9);
}
