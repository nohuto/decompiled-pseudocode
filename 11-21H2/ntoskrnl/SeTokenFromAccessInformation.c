/*
 * XREFs of SeTokenFromAccessInformation @ 0x1402583A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E1484 @ 0x1402E1484 (sub_1402E1484.c)
 */

__int64 __fastcall SeTokenFromAccessInformation(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  if ( a3 < 0x498 )
  {
    *a4 = 1176;
    return 3221225507LL;
  }
  else
  {
    sub_1402E1484(a1, a2);
    return 0LL;
  }
}
