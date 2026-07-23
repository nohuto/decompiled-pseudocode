/*
 * XREFs of sub_140A09A80 @ 0x140A09A80
 * Callers:
 *     sub_140A0980C @ 0x140A0980C (sub_140A0980C.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

LONG sub_140A09A80()
{
  _DWORD Src[9]; // [rsp+20h] [rbp-40h] BYREF
  char v2; // [rsp+44h] [rbp-1Ch]
  char v3; // [rsp+45h] [rbp-1Bh]
  char v4; // [rsp+46h] [rbp-1Ah]
  int v5; // [rsp+47h] [rbp-19h]
  int v6; // [rsp+4Bh] [rbp-15h]
  int v7; // [rsp+4Fh] [rbp-11h]

  Src[3] = 0;
  Src[8] = dword_140D04C94;
  v2 = byte_140D04C99;
  v3 = byte_140CE1AD3;
  v4 = byte_140D04C98;
  v5 = dword_140C0C8C0;
  v6 = dword_140C0C8D0;
  Src[0] = 1733060695;
  v7 = qword_140C0DA98 / 0x989680uLL;
  Src[1] = 1;
  Src[2] = 51;
  Src[5] = -2147483640;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 19;
  return WheaLogInternalEvent(Src);
}
