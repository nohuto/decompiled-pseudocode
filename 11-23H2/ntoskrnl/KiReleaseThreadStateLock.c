/*
 * XREFs of KiReleaseThreadStateLock @ 0x140577688
 * Callers:
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1403078C0 (KiReleasePrcbLocksForIsolationUnit.c)
 */

__int64 __fastcall KiReleaseThreadStateLock(__int64 a1, __int64 a2, __int64 *a3, volatile signed __int64 *a4)
{
  volatile signed __int64 *v4; // r11
  __int64 result; // rax

  v4 = a4;
  if ( a2 )
    result = KiReleasePrcbLocksForIsolationUnit(a3);
  if ( v4 )
    _InterlockedAnd64(v4, 0LL);
  return result;
}
