/*
 * XREFs of sub_18001F1F8 @ 0x18001F1F8
 * Callers:
 *     sub_18008F8C0 @ 0x18008F8C0 (sub_18008F8C0.c)
 * Callees:
 *     sub_18001E924 @ 0x18001E924 (sub_18001E924.c)
 */

_QWORD *__fastcall sub_18001F1F8(_QWORD *a1, __int64 a2)
{
  if ( a1 != (_QWORD *)a2 )
    sub_18001E924(a1, *(void **)a2, *(_QWORD *)(a2 + 8));
  return a1;
}
