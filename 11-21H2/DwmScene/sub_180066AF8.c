/*
 * XREFs of sub_180066AF8 @ 0x180066AF8
 * Callers:
 *     sub_180067D9C @ 0x180067D9C (sub_180067D9C.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 */

// Hidden C++ exception states: #wind=3
__int64 sub_180066AF8(__int64 a1, __int64 a2, ...)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 i; // rcx
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  va_list va; // [rsp+50h] [rbp+30h]
  __int64 *v14; // [rsp+58h] [rbp+38h] BYREF
  va_list va1; // [rsp+58h] [rbp+38h]
  _DWORD **v16; // [rsp+60h] [rbp+40h]
  va_list va2; // [rsp+68h] [rbp+48h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, __int64 *);
  v16 = va_arg(va2, _DWORD **);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = sub_180011088(0x48uLL);
  *(_QWORD *)(a1 + 8) = v3;
  *(_DWORD *)(v3 + 32) = **v16;
  v4 = (__int64 *)(v3 + 40);
  *(_OWORD *)(v3 + 40) = 0LL;
  *(_OWORD *)(v3 + 56) = 0LL;
  v16 = (_DWORD **)(v3 + 40);
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  v14 = (__int64 *)sub_180011088(0x20uLL);
  sub_180030730(v14, (__int64 *)va1);
  sub_180030730((__int64 *)(v5 + 8), (__int64 *)va1);
  *v4 = v6;
  v4 += 2;
  v14 = v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  v14 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v14, (__int64 *)va1);
  sub_18001DE8C((__int64 *)(v7 + 8), (__int64 *)va1);
  sub_18001DE8C((__int64 *)(v8 + 16), (__int64 *)va1);
  *(_WORD *)(v9 + 24) = 257;
  *v4 = v9;
  sub_18001DE7C(*(__int64 **)(a1 + 8), (__int64 *)va);
  sub_18001DE7C((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), (__int64 *)va);
  sub_18001DE7C((__int64 *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64 *)va);
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + i + 24) = 0;
  return a1;
}
