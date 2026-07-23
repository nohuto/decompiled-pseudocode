/*
 * XREFs of sub_140B1B59C @ 0x140B1B59C
 * Callers:
 *     sub_140B1B2C0 @ 0x140B1B2C0 (sub_140B1B2C0.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402A0D30 @ 0x1402A0D30 (sub_1402A0D30.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 */

__int64 __fastcall sub_140B1B59C(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[68]; // [rsp+40h] [rbp-128h] BYREF

  v3[0] = 2097153;
  memset(&v3[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v3, 0);
  sub_14070A268(a1, 0, 0, (unsigned __int16 *)v3, 0LL, 0LL, 1);
  *(_BYTE *)(a1 + 641) = 127;
  *(_QWORD *)(a1 + 1512) = a1 + 1504;
  *(_QWORD *)(a1 + 1504) = a1 + 1504;
  sub_1402A0D30(a1 + 2560);
  _InterlockedOr(dword_140D32F60, 0x8000u);
  _InterlockedOr(dword_140D3337C, 0x400000u);
  result = 34404LL;
  *(_WORD *)(a1 + 2412) = -31132;
  return result;
}
