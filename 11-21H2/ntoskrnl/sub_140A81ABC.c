/*
 * XREFs of sub_140A81ABC @ 0x140A81ABC
 * Callers:
 *     sub_140A81AE8 @ 0x140A81AE8 (sub_140A81AE8.c)
 *     sub_140A99C74 @ 0x140A99C74 (sub_140A99C74.c)
 *     sub_140A99E14 @ 0x140A99E14 (sub_140A99E14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A81ABC(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( a2 == *a1 )
    *a1 += a3;
  v3 = a1[1];
  result = a2 + a3;
  if ( a2 + a3 == v3 )
    a1[1] = v3 - a3;
  return result;
}
