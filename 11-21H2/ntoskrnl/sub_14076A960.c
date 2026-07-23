/*
 * XREFs of sub_14076A960 @ 0x14076A960
 * Callers:
 *     sub_14076A8FC @ 0x14076A8FC (sub_14076A8FC.c)
 *     sub_140A26D58 @ 0x140A26D58 (sub_140A26D58.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14076A960(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 496);
  if ( result )
    return sub_14042A5E0(a1, a2);
  return result;
}
