/*
 * XREFs of sub_1800539F0 @ 0x1800539F0
 * Callers:
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800539F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 i; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  v7 = sub_180011088(0x68uLL);
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_OWORD *)(v7 + 32) = *(_OWORD *)a4;
  *(_OWORD *)(v7 + 48) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 15LL;
  *(_BYTE *)a4 = 0;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  v8 = a5;
  *(_QWORD *)(v7 + 64) = *a5;
  *(_QWORD *)(v7 + 72) = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  *(_DWORD *)(v7 + 80) = *((_DWORD *)v8 + 4);
  *(_QWORD *)(v7 + 88) = 0LL;
  *(_QWORD *)(v7 + 96) = 0LL;
  *(_QWORD *)(v7 + 88) = v8[3];
  *(_QWORD *)(v7 + 96) = v8[4];
  v8[3] = 0LL;
  v8[4] = 0LL;
  sub_18001DE7C(*(__int64 **)(a1 + 8), &v11);
  sub_18001DE7C((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), &v11);
  sub_18001DE7C((__int64 *)(*(_QWORD *)(a1 + 8) + 16LL), &v11);
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + i + 24) = 0;
  return a1;
}
