/*
 * XREFs of MiDeleteCloneZombies @ 0x140367824
 * Callers:
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiInsertClone @ 0x14066565C (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x140A48F68 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14066445C (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, int a2)
{
  __int64 v3; // rbp
  KIRQL v4; // si
  volatile LONG *SharedVm; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1680) + 352LL) )
  {
    v3 = a1 + 1664;
    if ( a2 )
    {
      v4 = 17;
    }
    else
    {
      SharedVm = (volatile LONG *)MiGetSharedVm(a1 + 1664);
      v4 = ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
    }
    v6 = (_QWORD *)MiDeleteDeferredCloneDescriptors(a1);
    if ( v4 != 17 )
      MiUnlockWorkingSetExclusive(v3, v4, v7, v8);
    if ( v6 )
    {
      do
      {
        v9 = (_QWORD *)*v6;
        ExFreePoolWithTag(v6, 0);
        v6 = v9;
      }
      while ( v9 );
    }
  }
}
