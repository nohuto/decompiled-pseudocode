/*
 * XREFs of sub_18001D8E4 @ 0x18001D8E4
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 *     sub_18005A640 @ 0x18005A640 (sub_18005A640.c)
 *     sub_18005AF90 @ 0x18005AF90 (sub_18005AF90.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_1800A12C4 @ 0x1800A12C4 (sub_1800A12C4.c)
 *     sub_1800DC000 @ 0x1800DC000 (sub_1800DC000.c)
 *     sub_1800F9780 @ 0x1800F9780 (sub_1800F9780.c)
 *     sub_1800F9880 @ 0x1800F9880 (sub_1800F9880.c)
 *     sub_1800F9910 @ 0x1800F9910 (sub_1800F9910.c)
 *     sub_1800FAD50 @ 0x1800FAD50 (sub_1800FAD50.c)
 *     sub_1800FD04C @ 0x1800FD04C (sub_1800FD04C.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001D8E4(__int64 a1, const char *a2, char a3)
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
  sub_18001875C((__int64 *)(a1 + 16), (__int64)a2);
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
  sub_18001F2B4(&unk_1801EA000, v7, "Throwing SpectreException with message '%s'", v4);
  return a1;
}
