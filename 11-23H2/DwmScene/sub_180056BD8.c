/*
 * XREFs of sub_180056BD8 @ 0x180056BD8
 * Callers:
 *     sub_180056FB8 @ 0x180056FB8 (sub_180056FB8.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180056BD8(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD **a5)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = (_QWORD *)sub_18001C190();
  a1[1] = v7;
  v8 = *a5;
  v7[4] = 0LL;
  v7[5] = 0LL;
  v7[4] = *v8;
  v7[5] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  *(_QWORD *)((char *)v7 + 52) = 0LL;
  *(_QWORD *)((char *)v7 + 60) = 0LL;
  v7[6] = 0LL;
  v7[7] = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
