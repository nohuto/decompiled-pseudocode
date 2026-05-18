/*
 * XREFs of sub_180027A84 @ 0x180027A84
 * Callers:
 *     sub_180027780 @ 0x180027780 (sub_180027780.c)
 * Callees:
 *     sub_180027A34 @ 0x180027A34 (sub_180027A34.c)
 */

__int64 __fastcall sub_180027A84(_DWORD *a1, int a2)
{
  __int64 (__fastcall ***v2)(); // rax
  __int64 v3; // rcx

  *a1 = a2;
  v2 = sub_180027A34();
  *(_QWORD *)(v3 + 8) = v2;
  return v3;
}
