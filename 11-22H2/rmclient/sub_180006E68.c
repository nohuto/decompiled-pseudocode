/*
 * XREFs of sub_180006E68 @ 0x180006E68
 * Callers:
 *     HamCompleteExtendedExecution @ 0x18001D330 (HamCompleteExtendedExecution.c)
 * Callees:
 *     sub_180006EE0 @ 0x180006EE0 (sub_180006EE0.c)
 *     sub_180006F94 @ 0x180006F94 (sub_180006F94.c)
 */

__int64 __fastcall sub_180006E68(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  v4 = sub_180006EE0(a1, a2);
  if ( v4 )
    sub_180006F94(v4, a1);
  *(_DWORD *)(a1 + 16) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 8);
}
