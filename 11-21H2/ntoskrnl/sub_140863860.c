/*
 * XREFs of sub_140863860 @ 0x140863860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140863860(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = 0x472692E54FAAB71ALL - *a1;
  if ( *a1 == 0x472692E54FAAB71ALL )
    v3 = 0x192D6759452231B5LL - a1[1];
  result = 0LL;
  if ( v3 || a3 != 4 || !a2 || (unsigned int)*a2 > 1 )
    return 3221225485LL;
  dword_140C232E8 = *a2;
  return result;
}
