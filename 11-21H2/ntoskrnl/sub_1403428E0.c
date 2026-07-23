/*
 * XREFs of sub_1403428E0 @ 0x1403428E0
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 *     sub_140B0EB5C @ 0x140B0EB5C (sub_140B0EB5C.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 *     sub_140B55478 @ 0x140B55478 (sub_140B55478.c)
 *     sub_140B55668 @ 0x140B55668 (sub_140B55668.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14029C568 @ 0x14029C568 (sub_14029C568.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     sub_140343770 @ 0x140343770 (sub_140343770.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

IRP *__fastcall sub_1403428E0(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9)
{
  size_t v9; // r14
  __int64 v13; // rax
  IRP *v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // rdx
  struct _IRP *v18; // rax
  struct _KTHREAD *CurrentThread; // r10
  struct _LIST_ENTRY *v20; // rdi
  LIST_ENTRY *p_ThreadListEntry; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v23; // r14
  struct _LIST_ENTRY *Flink; // rax
  int v25; // edx
  __int64 v26; // r8
  __int64 v28; // r9
  struct _IRP *Pool2; // rax
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // rdx
  PMDL Mdl; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v36; // r8
  int v37; // eax
  bool v38; // zf

  v9 = a4;
  v13 = sub_1402AACA0(a2, *(unsigned __int8 *)(a2 + 76), 0LL);
  v14 = (IRP *)v13;
  if ( !v13 )
    return 0LL;
  v15 = *(_QWORD *)(v13 + 184);
  *(_BYTE *)(v15 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = v9;
  *(_DWORD *)(v15 - 48) = a1;
  v16 = a1 & 3;
  if ( v16 )
  {
    if ( v16 > 2 )
    {
      *(_QWORD *)(v13 + 112) = VirtualAddress;
      *(_QWORD *)(v15 - 40) = a3;
      goto LABEL_12;
    }
    if ( a3 )
    {
      Pool2 = (struct _IRP *)ExAllocatePool2(72LL, v9, 1112764233LL);
      v14->AssociatedIrp.MasterIrp = Pool2;
      if ( !Pool2 )
        goto LABEL_38;
      memmove(Pool2, a3, v9);
      v30 = 48;
      v31 = 0;
    }
    else
    {
      v31 = 0;
      v30 = 0;
    }
    v14->Flags = v30;
    if ( !VirtualAddress )
      goto LABEL_12;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v14->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( v16 != 1 )
        v31 = 1;
      sub_14029C568((__int64)Mdl, v32, v31, a2, *(unsigned __int8 *)(v15 - 72));
      goto LABEL_12;
    }
    if ( a3 )
      ExFreePoolWithTag(v14->AssociatedIrp.MasterIrp, 0);
LABEL_38:
    IoFreeIrp(v14);
    return 0LL;
  }
  if ( (_DWORD)v9 || Length )
  {
    v17 = (unsigned int)v9;
    if ( (unsigned int)v9 <= Length )
      v17 = Length;
    v18 = (struct _IRP *)ExAllocatePool2(72LL, v17, 1112764233LL);
    v14->AssociatedIrp.MasterIrp = v18;
    if ( v18 )
    {
      if ( a3 )
        memmove(v18, a3, v9);
      v14->Flags = 48;
      v14->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v14->Flags = 112;
      goto LABEL_12;
    }
    goto LABEL_38;
  }
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 112) = 0LL;
LABEL_12:
  v14->UserIosb = a9;
  v14->UserEvent = a8;
  CurrentThread = KeGetCurrentThread();
  v14->Tail.Overlay.Thread = CurrentThread;
  v20 = (struct _LIST_ENTRY *)((char *)CurrentThread + 1280);
  p_ThreadListEntry = &v14->ThreadListEntry;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v28 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v23 = (KSPIN_LOCK *)((char *)CurrentThread + 1496);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)CurrentThread + 187);
  Flink = v20->Flink;
  if ( v20->Flink->Blink != v20 )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  v14->ThreadListEntry.Blink = v20;
  Flink->Blink = p_ThreadListEntry;
  v20->Flink = p_ThreadListEntry;
  KeReleaseSpinLockFromDpcLevel(v23);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v36 = *((_QWORD *)CurrentPrcb + 4375);
        v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v38 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
        *(_DWORD *)(v36 + 20) &= v37;
        if ( v38 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v25 = sub_140343770(v14->Tail.Overlay.Thread);
  if ( v25 < 2 && (struct _KTHREAD *)v26 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v26 + 1440) )
      v25 = 2;
  }
  v14->Flags = v14->Flags & 0xFFF1FFFF | ((v25 << 17) + 0x20000);
  return v14;
}
