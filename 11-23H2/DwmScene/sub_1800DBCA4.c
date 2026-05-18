/*
 * XREFs of sub_1800DBCA4 @ 0x1800DBCA4
 * Callers:
 *     sub_1800DDFC0 @ 0x1800DDFC0 (sub_1800DDFC0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DBCA4(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // r9
  _QWORD *v5; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  sub_18001246C((_QWORD *)(a1 + 32), a3);
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 56) = v4;
  v5 = (_QWORD *)sub_18001090C((unsigned int)(v4 + 32));
  *v5 = v5;
  v5[1] = v5;
  *(_QWORD *)(a1 + 48) = v5;
  return a1;
}
