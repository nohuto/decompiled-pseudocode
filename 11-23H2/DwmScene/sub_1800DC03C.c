/*
 * XREFs of sub_1800DC03C @ 0x1800DC03C
 * Callers:
 *     sub_1800DDDB8 @ 0x1800DDDB8 (sub_1800DDDB8.c)
 * Callees:
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 *     sub_1800DDE34 @ 0x1800DDE34 (sub_1800DDE34.c)
 *     sub_1800DDF88 @ 0x1800DDF88 (sub_1800DDF88.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DC03C(__int64 a1, __int64 a2)
{
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_1800DDF88(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  sub_180042798(a1 + 24, (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3, *(_QWORD *)(a1 + 8));
  v4 = *(_QWORD ***)(a2 + 8);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
    sub_1800DDE34(a1, v7, i + 2);
  return a1;
}
