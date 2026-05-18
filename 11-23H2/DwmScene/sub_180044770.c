/*
 * XREFs of sub_180044770 @ 0x180044770
 * Callers:
 *     sub_180044754 @ 0x180044754 (sub_180044754.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 *     sub_18009AD20 @ 0x18009AD20 (sub_18009AD20.c)
 *     sub_18009C1D0 @ 0x18009C1D0 (sub_18009C1D0.c)
 *     sub_18009C480 @ 0x18009C480 (sub_18009C480.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180044770(__int64 a1, __int64 a2, char a3)
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
