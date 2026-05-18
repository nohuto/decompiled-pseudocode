/*
 * XREFs of sub_180029894 @ 0x180029894
 * Callers:
 *     sub_180029794 @ 0x180029794 (sub_180029794.c)
 * Callees:
 *     sub_180026CE8 @ 0x180026CE8 (sub_180026CE8.c)
 */

__int64 __fastcall sub_180029894(_DWORD *a1, int a2)
{
  __int64 (__fastcall ***v2)(); // rax
  __int64 v3; // rcx

  *a1 = a2;
  v2 = sub_180026CE8();
  *(_QWORD *)(v3 + 8) = v2;
  return v3;
}
