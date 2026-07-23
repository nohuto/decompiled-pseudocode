/*
 * XREFs of sub_1406821D4 @ 0x1406821D4
 * Callers:
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     sub_140682240 @ 0x140682240 (sub_140682240.c)
 */

__int64 __fastcall sub_1406821D4(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rbx
  BOOL v7; // edi
  __int64 result; // rax

  v6 = a1;
  v7 = (a4 & 0x8000) == 0;
  if ( a1 == a2 )
    return 0LL;
  while ( 1 )
  {
    result = sub_140682240(v6, a3, v7);
    if ( (int)result < 0 )
      break;
    v6 = *(_QWORD *)(v6 + 1264);
    if ( v6 == a2 )
      return 0LL;
  }
  return result;
}
