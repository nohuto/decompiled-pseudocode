/*
 * XREFs of WheapPfaLogPageMonitorRemoval @ 0x140A08ED0
 * Callers:
 *     WheapPfaMemoryCheck @ 0x140A08F68 (WheapPfaMemoryCheck.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x140A091FC (WheapPfaRetireExpiredMemoryEntries.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x140380BF0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

LONG __fastcall WheapPfaLogPageMonitorRemoval(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  int v4; // eax
  _DWORD Src[12]; // [rsp+20h] [rbp-40h] BYREF

  v3 = a3 - *(_QWORD *)(a1 + 24);
  Src[3] = 0;
  Src[8] = a2;
  Src[10] = *(unsigned __int16 *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 40);
  Src[9] = v3 / 0x989680;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 48;
  Src[5] = -2147483641;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 16;
  Src[11] = v4;
  return WheaLogInternalEvent(Src);
}
