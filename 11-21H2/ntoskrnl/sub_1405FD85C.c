/*
 * XREFs of sub_1405FD85C @ 0x1405FD85C
 * Callers:
 *     sub_140392180 @ 0x140392180 (sub_140392180.c)
 * Callees:
 *     sub_1405F3C10 @ 0x1405F3C10 (sub_1405F3C10.c)
 */

__int64 __fastcall sub_1405FD85C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 96) = a7;
  *(_DWORD *)(a1 + 72) = 12;
  *(_DWORD *)(a1 + 104) = 16;
  return sub_1405F3C10(*(_QWORD *)(a1 + 32), a2);
}
