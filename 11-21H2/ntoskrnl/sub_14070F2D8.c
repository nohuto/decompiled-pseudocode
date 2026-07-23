/*
 * XREFs of sub_14070F2D8 @ 0x14070F2D8
 * Callers:
 *     sub_14070F0D8 @ 0x14070F0D8 (sub_14070F0D8.c)
 *     sub_14084565C @ 0x14084565C (sub_14084565C.c)
 *     sub_1408471EC @ 0x1408471EC (sub_1408471EC.c)
 *     sub_140B1E170 @ 0x140B1E170 (sub_140B1E170.c)
 * Callees:
 *     sub_1402F3424 @ 0x1402F3424 (sub_1402F3424.c)
 */

__int64 __fastcall sub_14070F2D8(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    sub_1402F3424((volatile signed __int64 *)(a2 - 48), 15);
  result = (a2 + 15) & -(__int64)(a2 != 0);
  *a1 = result;
  return result;
}
