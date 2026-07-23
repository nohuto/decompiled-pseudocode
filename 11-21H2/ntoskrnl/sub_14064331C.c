/*
 * XREFs of sub_14064331C @ 0x14064331C
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140643104 @ 0x140643104 (sub_140643104.c)
 * Callees:
 *     sub_1406528CC @ 0x1406528CC (sub_1406528CC.c)
 */

__int64 sub_14064331C()
{
  __int64 result; // rax

  result = sub_1406528CC(&xmmword_140C10CA0);
  if ( (_BYTE)result )
    dword_140C10CC0 |= 4u;
  return result;
}
