/*
 * XREFs of sub_140363780 @ 0x140363780
 * Callers:
 *     sub_140363850 @ 0x140363850 (sub_140363850.c)
 * Callees:
 *     sub_14036381C @ 0x14036381C (sub_14036381C.c)
 *     sub_1405E0FA0 @ 0x1405E0FA0 (sub_1405E0FA0.c)
 */

__int64 __fastcall sub_140363780(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v10; // rax
  __int64 result; // rax

  v5 = a1 + 1592;
  v10 = sub_14036381C(a1 + 1592);
  *a3 = v10;
  if ( v10 )
    *a4 = *(_QWORD *)(a1 + 1544);
  else
    v5 = 0LL;
  *a5 = v5;
  a3[1] = 0LL;
  a5[1] = 0LL;
  result = *(_QWORD *)(a1 + 1656);
  if ( (*(_BYTE *)(a1 + 1664) & 1) != 0 )
  {
    if ( !result )
      return result;
    result ^= a1 + 1656;
  }
  if ( result && a2 )
  {
    result = sub_1405E0FA0(a1, a2);
    if ( result )
    {
      a3[1] = *(_QWORD *)(result + 40);
      a4[1] = *(_QWORD *)(result + 48);
      a5[1] = result;
    }
  }
  return result;
}
