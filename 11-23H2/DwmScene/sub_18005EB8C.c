/*
 * XREFs of sub_18005EB8C @ 0x18005EB8C
 * Callers:
 *     sub_18005EFFC @ 0x18005EFFC (sub_18005EFFC.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005EB8C(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = sub_18002F250(1uLL);
  v8 = sub_18001090C(v7);
  a1[1] = v8;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 32) = *a4;
  *(_QWORD *)(v8 + 40) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
