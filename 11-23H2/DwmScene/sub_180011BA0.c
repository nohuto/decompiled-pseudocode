/*
 * XREFs of sub_180011BA0 @ 0x180011BA0
 * Callers:
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_18001E83C @ 0x18001E83C (sub_18001E83C.c)
 *     sub_180020FA4 @ 0x180020FA4 (sub_180020FA4.c)
 *     sub_180021A28 @ 0x180021A28 (sub_180021A28.c)
 *     sub_180027B38 @ 0x180027B38 (sub_180027B38.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_18003678C @ 0x18003678C (sub_18003678C.c)
 *     sub_18004E738 @ 0x18004E738 (sub_18004E738.c)
 *     sub_180050DC4 @ 0x180050DC4 (sub_180050DC4.c)
 *     sub_180060E4C @ 0x180060E4C (sub_180060E4C.c)
 *     sub_1800707C4 @ 0x1800707C4 (sub_1800707C4.c)
 *     sub_18009CB54 @ 0x18009CB54 (sub_18009CB54.c)
 *     sub_1800CBFA8 @ 0x1800CBFA8 (sub_1800CBFA8.c)
 *     sub_1800E6059 @ 0x1800E6059 (sub_1800E6059.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 */

void **__fastcall sub_180011BA0(void **a1, const void *a2, size_t a3)
{
  void *v5; // rsi
  void **result; // rax

  if ( a3 > (unsigned __int64)a1[3] )
    return (void **)sub_180010B74((__int64)a1, a3, a3, a2);
  v5 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v5 = *a1;
  a1[2] = (void *)a3;
  memmove(v5, a2, a3);
  result = a1;
  *((_BYTE *)v5 + a3) = 0;
  return result;
}
