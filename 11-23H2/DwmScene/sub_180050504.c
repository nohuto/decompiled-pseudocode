/*
 * XREFs of sub_180050504 @ 0x180050504
 * Callers:
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180050CB0 @ 0x180050CB0 (sub_180050CB0.c)
 */

bool __fastcall sub_180050504(__int64 a1, __int64 a2)
{
  bool v3; // bl
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)sub_180050CB0(a1 + 18560, v5, a2) != *(_QWORD *)(a1 + 18560);
  sub_180011B24(a2);
  return v3;
}
