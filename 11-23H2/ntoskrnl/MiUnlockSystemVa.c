/*
 * XREFs of MiUnlockSystemVa @ 0x1402EEFF0
 * Callers:
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MmCopyMemory @ 0x1402EDDE0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1403BDC60 (MiUnlockStealVm.c)
 * Callees:
 *     MiReleaseFaultState @ 0x1402EF530 (MiReleaseFaultState.c)
 */

__int64 __fastcall MiUnlockSystemVa(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(a2) = 17;
    result = MiReleaseFaultState(a1 + 24, a2, 0LL);
    *v2 = 0LL;
  }
  return result;
}
