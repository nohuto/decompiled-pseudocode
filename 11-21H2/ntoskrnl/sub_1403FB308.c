/*
 * XREFs of sub_1403FB308 @ 0x1403FB308
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_1403A55A0 @ 0x1403A55A0 (sub_1403A55A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FB390 @ 0x1403FB390 (sub_1403FB390.c)
 *     sub_1403FCBE0 @ 0x1403FCBE0 (sub_1403FCBE0.c)
 *     sub_1403FCC10 @ 0x1403FCC10 (sub_1403FCC10.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403FB308(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[128]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v7, 0, 0x7CuLL);
  sub_1403FCBE0(v7);
  sub_1403FB390(v7, a1, a2);
  return sub_1403FCC10(v7, a3);
}
