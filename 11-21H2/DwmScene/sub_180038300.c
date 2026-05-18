/*
 * XREFs of sub_180038300 @ 0x180038300
 * Callers:
 *     sub_180070A00 @ 0x180070A00 (sub_180070A00.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800357B4 @ 0x1800357B4 (sub_1800357B4.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 *     sub_180056998 @ 0x180056998 (sub_180056998.c)
 *     sub_180080834 @ 0x180080834 (sub_180080834.c)
 */

__int64 __fastcall sub_180038300(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_180036808(a1, 1);
  sub_180080834(v4);
  *(_DWORD *)(a1 + 696) = *(_DWORD *)(a2 + 56);
  v5 = sub_180056998();
  sub_1800375A0((_QWORD *)a1, v5);
  sub_1800357B4((__int64 *)a1, v7);
  return sub_180010910((__int64)v7);
}
