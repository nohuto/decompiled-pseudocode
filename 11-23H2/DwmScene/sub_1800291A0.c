/*
 * XREFs of sub_1800291A0 @ 0x1800291A0
 * Callers:
 *     sub_180029178 @ 0x180029178 (sub_180029178.c)
 *     sub_18003906C @ 0x18003906C (sub_18003906C.c)
 *     sub_180054464 @ 0x180054464 (sub_180054464.c)
 *     sub_18008A7DC @ 0x18008A7DC (sub_18008A7DC.c)
 *     sub_18008A814 @ 0x18008A814 (sub_18008A814.c)
 *     sub_18008B81C @ 0x18008B81C (sub_18008B81C.c)
 *     sub_18008BD24 @ 0x18008BD24 (sub_18008BD24.c)
 *     sub_1800E3828 @ 0x1800E3828 (sub_1800E3828.c)
 * Callees:
 *     sub_18002920C @ 0x18002920C (sub_18002920C.c)
 */

__int64 __fastcall sub_1800291A0(__int64 a1)
{
  __int64 result; // rax

  sub_18002920C();
  *(_QWORD *)a1 = &Spectre::Engine::DeviceResource::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return result;
}
