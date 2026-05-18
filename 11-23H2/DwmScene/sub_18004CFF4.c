/*
 * XREFs of sub_18004CFF4 @ 0x18004CFF4
 * Callers:
 *     sub_18004D7D8 @ 0x18004D7D8 (sub_18004D7D8.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004CFF4(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v8 = sub_18001C190();
  a1[1] = v8;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_QWORD *)(v8 + 56) = 0LL;
  *(_OWORD *)(v8 + 32) = *(_OWORD *)a4;
  *(_OWORD *)(v8 + 48) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 15LL;
  *(_BYTE *)a4 = 0;
  *(_QWORD *)(v8 + 64) = 0LL;
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 64) = *(_QWORD *)a5;
  *(_QWORD *)(v8 + 72) = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_DWORD *)(v8 + 80) = *(_DWORD *)(a5 + 16);
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_QWORD *)(v8 + 96) = 0LL;
  *(_QWORD *)(v8 + 88) = *(_QWORD *)(a5 + 24);
  *(_QWORD *)(v8 + 96) = *(_QWORD *)(a5 + 32);
  *(_QWORD *)(a5 + 24) = 0LL;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
