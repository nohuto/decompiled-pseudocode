/*
 * XREFs of sub_1406EB880 @ 0x1406EB880
 * Callers:
 *     <none>
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall sub_1406EB880(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    if ( *a2 )
      return PsReleaseProcessWakeCounter(*a2);
  }
  return result;
}
