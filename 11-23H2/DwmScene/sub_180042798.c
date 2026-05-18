/*
 * XREFs of sub_180042798 @ 0x180042798
 * Callers:
 *     sub_18003FA7C @ 0x18003FA7C (sub_18003FA7C.c)
 *     sub_1800429B0 @ 0x1800429B0 (sub_1800429B0.c)
 *     sub_180098860 @ 0x180098860 (sub_180098860.c)
 *     sub_18009B824 @ 0x18009B824 (sub_18009B824.c)
 *     sub_1800DC03C @ 0x1800DC03C (sub_1800DC03C.c)
 *     sub_1800DF228 @ 0x1800DF228 (sub_1800DF228.c)
 *     sub_1800DF954 @ 0x1800DF954 (sub_1800DF954.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 *     sub_18003F8F8 @ 0x18003F8F8 (sub_18003F8F8.c)
 *     sub_18003FA60 @ 0x18003FA60 (sub_18003FA60.c)
 */

unsigned __int64 __fastcall sub_180042798(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rdx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v5 >= a2 )
    return sub_18003F8F8(*(unsigned __int64 **)a1, *(unsigned __int64 **)(a1 + 8), (unsigned __int64 *)&v10);
  v6 = sub_180017058(a2);
  v7 = (__int64 *)sub_18001090C(v6);
  if ( v5 )
    sub_1800100E8(*(void **)a1, 8 * v5);
  v8 = &v7[a2];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = v8;
  return sub_18003FA60(v7, v8, &v10);
}
