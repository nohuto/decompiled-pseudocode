/*
 * XREFs of sub_180065A50 @ 0x180065A50
 * Callers:
 *     sub_18009E6F0 @ 0x18009E6F0 (sub_18009E6F0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 */

__int64 __fastcall sub_180065A50(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r14
  _QWORD *v4; // rdi
  char *v5; // rsi
  char *v6; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v7 = 0LL;
  sub_18006558C(a1, v7);
  *(_OWORD *)v7 = 0LL;
  result = sub_180065394(a1, v7);
  v3 = a1 + 448;
  v4 = *(_QWORD **)(a1 + 448);
  v5 = (char *)v4[1];
  while ( !v5[25] )
  {
    sub_180029948(v3, v3, *((char **)v5 + 2));
    v6 = v5;
    v5 = *(char **)v5;
    sub_180010910((__int64)(v6 + 40));
    result = sub_180010884(v6, 0x38uLL);
  }
  v4[1] = v4;
  *v4 = v4;
  v4[2] = v4;
  *(_QWORD *)(v3 + 8) = 0LL;
  return result;
}
