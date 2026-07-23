/*
 * XREFs of sub_1405FD8C0 @ 0x1405FD8C0
 * Callers:
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 * Callees:
 *     sub_1405F3D28 @ 0x1405F3D28 (sub_1405F3D28.c)
 */

__int64 __fastcall sub_1405FD8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, __int64 a7)
{
  *(_DWORD *)(a1 + 72) = 12;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 96) = a7;
  *(_DWORD *)(a1 + 104) = 16;
  return sub_1405F3D28(*(_QWORD *)(a1 + 32), a2);
}
