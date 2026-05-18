/*
 * XREFs of sub_18006E3F4 @ 0x18006E3F4
 * Callers:
 *     sub_180063C6C @ 0x180063C6C (sub_180063C6C.c)
 *     sub_18006E820 @ 0x18006E820 (sub_18006E820.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 *     sub_1800634FC @ 0x1800634FC (sub_1800634FC.c)
 *     sub_180063C50 @ 0x180063C50 (sub_180063C50.c)
 */

unsigned __int64 __fastcall sub_18006E3F4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rdx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v5 >= a2 )
    return sub_1800634FC(*(unsigned __int64 **)a1, *(unsigned __int64 **)(a1 + 8), (unsigned __int64 *)&v10);
  v6 = sub_180017058(a2);
  v7 = (__int64 *)sub_18001090C(v6);
  if ( v5 )
    sub_1800100E8(*(void **)a1, 8 * v5);
  v8 = &v7[a2];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = v8;
  return sub_180063C50(v7, v8, &v10);
}
