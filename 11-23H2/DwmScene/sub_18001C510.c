/*
 * XREFs of sub_18001C510 @ 0x18001C510
 * Callers:
 *     sub_18001CD8C @ 0x18001CD8C (sub_18001CD8C.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001C510(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = (_QWORD *)sub_18001C190();
  a1[1] = v7;
  v8 = *a5;
  v7[4] = 0LL;
  v7[6] = 0LL;
  v7[7] = 0LL;
  *((_OWORD *)v7 + 2) = *(_OWORD *)v8;
  *((_OWORD *)v7 + 3) = *(_OWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 15LL;
  *(_BYTE *)v8 = 0;
  v7[8] = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
