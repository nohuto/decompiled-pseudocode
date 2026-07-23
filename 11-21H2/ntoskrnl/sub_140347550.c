/*
 * XREFs of sub_140347550 @ 0x140347550
 * Callers:
 *     sub_14024AE10 @ 0x14024AE10 (sub_14024AE10.c)
 *     sub_1402D0BA0 @ 0x1402D0BA0 (sub_1402D0BA0.c)
 *     sub_1402F25C0 @ 0x1402F25C0 (sub_1402F25C0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140346E50 @ 0x140346E50 (sub_140346E50.c)
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 *     sub_140A59FA4 @ 0x140A59FA4 (sub_140A59FA4.c)
 * Callees:
 *     sub_140420AE0 @ 0x140420AE0 (sub_140420AE0.c)
 */

__int64 sub_140347550()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+20h] [rbp-8h]

  _disable();
  sub_140420AE0();
  result = v1 >> 9;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
