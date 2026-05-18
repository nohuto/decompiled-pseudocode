/*
 * XREFs of sub_18001C3BC @ 0x18001C3BC
 * Callers:
 *     sub_18001AF40 @ 0x18001AF40 (sub_18001AF40.c)
 *     sub_180034AB0 @ 0x180034AB0 (sub_180034AB0.c)
 *     sub_1800533D0 @ 0x1800533D0 (sub_1800533D0.c)
 *     sub_180053A00 @ 0x180053A00 (sub_180053A00.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 *     sub_1800C6920 @ 0x1800C6920 (sub_1800C6920.c)
 *     sub_1800DED30 @ 0x1800DED30 (sub_1800DED30.c)
 *     sub_1800DEE20 @ 0x1800DEE20 (sub_1800DEE20.c)
 *     sub_1800DEEB0 @ 0x1800DEEB0 (sub_1800DEEB0.c)
 *     sub_1800DFE88 @ 0x1800DFE88 (sub_1800DFE88.c)
 *     sub_1800E1AFC @ 0x1800E1AFC (sub_1800E1AFC.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001C3BC(__int64 a1, const char *a2, char a3)
{
  const char *v4; // rbx
  const char *v6; // rax
  __int64 v7; // rdx

  v4 = a2;
  v6 = a2;
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v6 = *(const char **)a2;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_180017648((_QWORD *)(a1 + 16), (__int64)a2);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  if ( a3 )
  {
    if ( *((_QWORD *)v4 + 3) >= 0x10uLL )
      v4 = *(const char **)v4;
    v7 = 4LL;
  }
  else
  {
    if ( *((_QWORD *)v4 + 3) >= 0x10uLL )
      v4 = *(const char **)v4;
    v7 = 3LL;
  }
  sub_18001DB68(&unk_1801C8000, v7, "Throwing SpectreException with message '%s'", v4);
  return a1;
}
