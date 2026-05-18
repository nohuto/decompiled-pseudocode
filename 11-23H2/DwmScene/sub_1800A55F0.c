/*
 * XREFs of sub_1800A55F0 @ 0x1800A55F0
 * Callers:
 *     sub_1800A5488 @ 0x1800A5488 (sub_1800A5488.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 *     sub_18003F8F8 @ 0x18003F8F8 (sub_18003F8F8.c)
 *     sub_18003FA60 @ 0x18003FA60 (sub_18003FA60.c)
 */

unsigned __int64 __fastcall sub_1800A55F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v4 >= 0x10 )
    return sub_18003F8F8(*(unsigned __int64 **)a1, *(unsigned __int64 **)(a1 + 8), (unsigned __int64 *)&v8);
  v5 = sub_180017058(0x10uLL);
  v6 = (__int64 *)sub_18001090C(v5);
  if ( v4 )
    sub_1800100E8(*(void **)a1, 8 * v4);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v6 + 16;
  *(_QWORD *)(a1 + 16) = v6 + 16;
  return sub_18003FA60(v6, v6 + 16, &v8);
}
