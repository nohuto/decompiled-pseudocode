/*
 * XREFs of sub_1C00630BC @ 0x1C00630BC
 * Callers:
 *     sub_1C005E814 @ 0x1C005E814 (sub_1C005E814.c)
 * Callees:
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 *     sub_1C001FE14 @ 0x1C001FE14 (sub_1C001FE14.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C006970C @ 0x1C006970C (sub_1C006970C.c)
 */

__int64 __fastcall sub_1C00630BC(__int64 a1, IRP *a2, char a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // rbp
  ULONG Options; // r12d
  ULONG Length; // eax
  __int64 v10; // r13
  ULONG_PTR v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  ULONG_PTR v15; // rbx
  int v16; // edi
  bool v17; // zf
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 LockArray_high; // rdx
  int Blink; // eax
  int v24; // eax
  IRP *v25; // rax
  IRP *v26; // r12
  ULONG_PTR v27; // rax
  struct _MDL *MdlAddress; // rcx
  struct _IO_STATUS_BLOCK v30; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v30 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 8);
  if ( Options <= Length )
    Options = Length;
  v13 = sub_1C0007BA4(v12, 9u, *(_BYTE *)(v10 + 442), 0);
  v14 = 0LL;
  v15 = v13;
  if ( !v13 )
    goto LABEL_4;
  v17 = byte_1C0093AE4 == 0;
  MasterIrp->Flags = 255;
  if ( !v17
    && LODWORD(MasterIrp->MdlAddress) == 3
    && (unsigned int)(unsigned __int8)LODWORD(MasterIrp->UserEvent) - 129 <= 1
    && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
  {
    v16 = -1073741637;
  }
  else
  {
    v18 = (LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0) | 0x40;
    if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
      v18 = LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0;
    if ( !a3 )
    {
      v18 |= 0x102u;
      if ( *(_BYTE *)(v13 + 2) == 40 )
        *(_WORD *)(v13 + 38) = 32;
      else
        *(_BYTE *)(v13 + 9) = 32;
    }
    if ( *(_BYTE *)(v10 + 442) == 1 )
    {
      v19 = *(unsigned int *)(v13 + 52);
      v11 = v13;
      *(_DWORD *)(v13 + 20) = 9;
      *(_DWORD *)(v13 + 24) = v18;
      if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(*(_QWORD *)(a1 + 24)) )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v21 + 6080) + 8 * LockArray_high));
        v20 = **(_QWORD **)(*(_QWORD *)(v21 + 6080) + 8 * LockArray_high);
        *(_DWORD *)(v15 + 44) = HIDWORD(v20);
      }
      else
      {
        LODWORD(v20) = -1;
      }
      *(_DWORD *)(v15 + 32) = v20;
      *(_QWORD *)(v15 + 64) = MasterIrp;
      *(_DWORD *)(v15 + 60) = Options;
      *(_WORD *)(v15 + 36) = IoGetIoPriorityHint(a2);
      *(_QWORD *)(v15 + 80) = a2;
      Blink = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !Blink )
        Blink = *(_DWORD *)(a1 + 1320);
      *(_DWORD *)(v15 + 40) = Blink;
      *(_BYTE *)(v19 + v15 + 8) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v19 + v15 + 9) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v19 + v15 + 10) = *(_BYTE *)(a1 + 98);
    }
    else
    {
      *(_BYTE *)(v13 + 2) = 9;
      *(_WORD *)v13 = 88;
      *(_DWORD *)(v13 + 12) = v18;
      *(_BYTE *)(v13 + 8) = -1;
      *(_QWORD *)(v13 + 24) = MasterIrp;
      *(_DWORD *)(v13 + 16) = Options;
      *(_QWORD *)(v13 + 48) = a2;
      v24 = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !v24 )
        v24 = *(_DWORD *)(a1 + 1320);
      *(_DWORD *)(v15 + 20) = v24;
      *(_BYTE *)(v15 + 5) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v15 + 6) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v15 + 7) = *(_BYTE *)(a1 + 98);
    }
    v25 = sub_1C001FCD0(*(_QWORD *)(a1 + 8), v15, v14, &v30);
    v14 = 0LL;
    v26 = v25;
    if ( !v25 )
    {
LABEL_4:
      v16 = -1073741801;
      goto LABEL_41;
    }
    if ( *(_BYTE *)(v10 + 442) == 1 )
    {
      v11 = v15;
      *(_QWORD *)(v15 + 80) = a2;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = a2;
    }
    v16 = sub_1C0018124(*(PDEVICE_OBJECT *)(a1 + 8), v25);
    if ( v16 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
      {
        v16 = -1073741637;
      }
      else
      {
        if ( *(_BYTE *)(v10 + 442) == 1 )
          v27 = *(unsigned int *)(v11 + 60);
        else
          v27 = *(unsigned int *)(v15 + 16);
        a2->IoStatus.Information = v27;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    sub_1C001FE14(v26);
    v14 = 0LL;
  }
LABEL_41:
  if ( byte_1C0093BE8 )
  {
    LOBYTE(v14) = a3;
    sub_1C006970C(*(_QWORD *)(a1 + 8), a2, v14);
  }
  if ( v15 )
  {
    if ( *(_BYTE *)(v10 + 442) == 1 )
    {
      if ( !v11 )
        v11 = v15;
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_QWORD *)(v11 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = 0LL;
      *(_QWORD *)(v15 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v15, 0x72536152u);
  }
  return (unsigned int)v16;
}
