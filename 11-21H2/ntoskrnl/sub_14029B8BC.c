/*
 * XREFs of sub_14029B8BC @ 0x14029B8BC
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 * Callees:
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 */

__int64 __fastcall sub_14029B8BC(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !byte_140C22260 )
    return sub_140345AA0(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
