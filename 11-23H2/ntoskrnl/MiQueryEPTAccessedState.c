/*
 * XREFs of MiQueryEPTAccessedState @ 0x14046C48C
 * Callers:
 *     MiAgeWorkingSetTail @ 0x140334640 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x1403488E0 (MiResetAccessBitsTail.c)
 *     MiTrimWorkingSetTail @ 0x14034FEB0 (MiTrimWorkingSetTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14046C610 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14046C840 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x14033D52C (MiReleaseWalkLocks.c)
 *     VmpQueryAccessedState @ 0x14046720A (VmpQueryAccessedState.c)
 *     MiReacquireWalkLocks @ 0x14046BDC8 (MiReacquireWalkLocks.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v8; // r9
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 48);
  v5 = a3;
  MiReleaseWalkLocks(a1, a2, a3, a4);
  VmpQueryAccessedState(
    (PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5],
    (_QWORD *)(a2 + 8),
    *(_DWORD *)a2,
    v5);
  result = MiReacquireWalkLocks(a1, v4, 0, v8);
  if ( !(_DWORD)result )
    *(_DWORD *)a2 = 0;
  return result;
}
