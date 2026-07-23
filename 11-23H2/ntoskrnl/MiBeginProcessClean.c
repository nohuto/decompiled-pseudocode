/*
 * XREFs of MiBeginProcessClean @ 0x140342A90
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140619458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     MiOutlawInswaps @ 0x140342B74 (MiOutlawInswaps.c)
 *     MiFreeWorkingSetSwapContext @ 0x14068196C (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  volatile LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  unsigned __int64 v10; // rax

  v2 = a2 + 1664;
  if ( (*(_DWORD *)(a2 + 1124) & 0x20) == 0 )
  {
    LOCK_ADDRESS_SPACE(a1, a2);
    SharedVm = (volatile LONG *)MiGetSharedVm(v2);
    v6 = ExAcquireSpinLockExclusive(SharedVm);
    v9 = 0;
    *((_DWORD *)SharedVm + 1) = 0;
    _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 0x20u);
    if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
      *(_BYTE *)(v2 + 187) &= 0x9Fu;
    MiUnlockWorkingSetExclusive(v2, v6, v7, v8);
    UNLOCK_ADDRESS_SPACE_UNORDERED(a1, a2);
    v10 = MiOutlawInswaps(a2);
    if ( v10 > 2 )
    {
      MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a2 + 1838)), v10);
    }
    else if ( !v10 )
    {
      return v9;
    }
    return 1;
  }
  return 1LL;
}
