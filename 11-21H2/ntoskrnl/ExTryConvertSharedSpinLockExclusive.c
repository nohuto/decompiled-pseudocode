/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x1402169E0
 * Callers:
 *     sub_140214C50 @ 0x140214C50 (sub_140214C50.c)
 *     sub_1406015A4 @ 0x1406015A4 (sub_1406015A4.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140461CD0 @ 0x140461CD0 (sub_140461CD0.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG i; // ecx
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    return sub_140461CD0(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  for ( i = *SpinLock; (i & 0xBFFFFFFF) != 0x80000001; i = *SpinLock )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(SpinLock, 0x40000000u);
    sub_1402F32E0(&v5);
  }
  return 1;
}
