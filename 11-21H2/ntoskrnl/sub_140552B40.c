/*
 * XREFs of sub_140552B40 @ 0x140552B40
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_14055CC5C @ 0x14055CC5C (sub_14055CC5C.c)
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140567588 @ 0x140567588 (sub_140567588.c)
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140553164 @ 0x140553164 (sub_140553164.c)
 */

LONG __fastcall sub_140552B40(int a1)
{
  int v2; // r8d
  LONG result; // eax
  int v4; // edx
  _DWORD Src[10]; // [rsp+20h] [rbp-38h] BYREF

  if ( qword_140D00A80 )
  {
    v2 = *(_DWORD *)(qword_140D00A80 + 1404);
    if ( (v2 & 0x860000) == 0 )
    {
      *(_DWORD *)(qword_140D00A80 + 1404) = v2 ^ ((unsigned __int16)a1 ^ (unsigned __int16)v2) & 0x1FF;
      result = sub_140553164();
    }
    if ( a1 == 4 )
    {
      v4 = 4 - *(_DWORD *)(qword_140D00A80 + 1336);
      Src[3] = 0;
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[5] = -2147483613;
      Src[4] = 8961 - (v4 != 0);
      Src[6] = 24;
      Src[7] = 8;
      Src[9] = *(_DWORD *)(qword_140D00A80 + 1404);
      Src[8] = *(_DWORD *)(qword_140D00A80 + 24);
      return WheaLogInternalEvent(Src);
    }
  }
  return result;
}
