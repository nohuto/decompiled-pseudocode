/*
 * XREFs of sub_1800DF71C @ 0x1800DF71C
 * Callers:
 *     sub_1800DF820 @ 0x1800DF820 (sub_1800DF820.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 */

__int64 __fastcall sub_1800DF71C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx

  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 88));
  result = sub_18001DE1C(a1 + 24, v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_180010530(v4);
  return result;
}
