/*
 * XREFs of sub_180063C6C @ 0x180063C6C
 * Callers:
 *     sub_180063D98 @ 0x180063D98 (sub_180063D98.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 *     sub_18006E3F4 @ 0x18006E3F4 (sub_18006E3F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180063C6C(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = sub_18002F250(1uLL);
  v4 = (_QWORD *)sub_18001090C(v3);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18006E3F4(a1 + 24, 16LL, *(_QWORD *)(a1 + 8));
  return a1;
}
