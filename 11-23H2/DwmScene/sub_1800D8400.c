/*
 * XREFs of sub_1800D8400 @ 0x1800D8400
 * Callers:
 *     sub_1800D7DB0 @ 0x1800D7DB0 (sub_1800D7DB0.c)
 * Callees:
 *     sub_180050D08 @ 0x180050D08 (sub_180050D08.c)
 */

__int64 __fastcall sub_1800D8400(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a1 + 136) = 3;
  sub_180050D08((_QWORD *)(a1 + 104));
  result = sub_180050D08((_QWORD *)(a1 + 120));
  *(_QWORD *)&v3 = 0LL;
  BYTE8(v3) = 1;
  *(_OWORD *)(a1 + 144) = v3;
  return result;
}
