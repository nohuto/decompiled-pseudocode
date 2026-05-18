/*
 * XREFs of sub_180049B94 @ 0x180049B94
 * Callers:
 *     sub_180049B78 @ 0x180049B78 (sub_180049B78.c)
 *     sub_1800A6170 @ 0x1800A6170 (sub_1800A6170.c)
 *     sub_1800ABC50 @ 0x1800ABC50 (sub_1800ABC50.c)
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 *     sub_1800AD2F0 @ 0x1800AD2F0 (sub_1800AD2F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180049B94(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 152);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_QWORD *)(a1 + 152) = result;
  return result;
}
