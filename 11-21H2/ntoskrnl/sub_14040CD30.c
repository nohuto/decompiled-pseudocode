/*
 * XREFs of sub_14040CD30 @ 0x14040CD30
 * Callers:
 *     sub_14040CCE0 @ 0x14040CCE0 (sub_14040CCE0.c)
 *     sub_14040CD10 @ 0x14040CD10 (sub_14040CD10.c)
 *     sub_1404113E0 @ 0x1404113E0 (sub_1404113E0.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040B1B0 @ 0x14040B1B0 (sub_14040B1B0.c)
 *     sub_14040D558 @ 0x14040D558 (sub_14040D558.c)
 *     sub_14040D5A0 @ 0x14040D5A0 (sub_14040D5A0.c)
 */

__int64 __fastcall sub_14040CD30(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebp
  void *v7; // rsi
  __int64 v8; // r14
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 4);
  v7 = (void *)((unsigned int)sub_14040D558(v3) + a1 + 64);
  v8 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 40) = v7;
  sub_1403FDDE8((__int64)a3, (v3 << 7) + 64);
  a3[2 * a2] = 1;
  sub_14040B1B0(a3, 2 * v3 + 1, (_DWORD *)(a1 + 64), 0LL, v7, &a3[32 * v3 + 16]);
  result = -sub_14040D5A0(v8);
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
