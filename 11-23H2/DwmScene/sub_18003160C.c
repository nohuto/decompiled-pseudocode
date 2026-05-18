/*
 * XREFs of sub_18003160C @ 0x18003160C
 * Callers:
 *     sub_18002FAEC @ 0x18002FAEC (sub_18002FAEC.c)
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 * Callees:
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 */

__int64 __fastcall sub_18003160C(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = -8388609;
  *(_DWORD *)(a1 + 4) = 2139095039;
  sub_18001E3BC((_QWORD *)(a1 + 24), (__int64)&unk_180106A04);
  return a1;
}
