/*
 * XREFs of sub_1406E7220 @ 0x1406E7220
 * Callers:
 *     sub_1403DBB20 @ 0x1403DBB20 (sub_1403DBB20.c)
 *     sub_1409A14A0 @ 0x1409A14A0 (sub_1409A14A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E7220(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    if ( a2 )
    {
      result = 0LL;
      *a2 = *(_OWORD *)(*(_QWORD *)(a1 + 296) + 64LL);
    }
  }
  return result;
}
