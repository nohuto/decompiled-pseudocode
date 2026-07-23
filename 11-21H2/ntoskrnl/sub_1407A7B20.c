/*
 * XREFs of sub_1407A7B20 @ 0x1407A7B20
 * Callers:
 *     sub_1406640F0 @ 0x1406640F0 (sub_1406640F0.c)
 *     sub_140667A4C @ 0x140667A4C (sub_140667A4C.c)
 *     sub_1407A7850 @ 0x1407A7850 (sub_1407A7850.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407A7C84 @ 0x1407A7C84 (sub_1407A7C84.c)
 */

void *__fastcall sub_1407A7B20(__int64 a1, char *a2)
{
  size_t v4; // rax
  __int64 v5; // rcx
  size_t v6; // rbx
  const void *v7; // rdx
  size_t v8; // r14
  char *v9; // rcx

  v4 = sub_1407A7C84(a1, a2);
  v6 = *(unsigned __int16 *)(v5 + 240);
  v7 = (const void *)(v5 + 280);
  v8 = v4;
  v9 = a2;
  if ( v6 > v4 )
  {
    memmove(a2, v7, v4);
    v7 = *(const void **)(a1 + 224);
    v9 = &a2[v8];
    v6 -= v8;
  }
  return memmove(v9, v7, v6);
}
