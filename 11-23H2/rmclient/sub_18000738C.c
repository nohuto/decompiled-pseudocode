/*
 * XREFs of sub_18000738C @ 0x18000738C
 * Callers:
 *     HamQueryCallerTerminateReason @ 0x1800072B0 (HamQueryCallerTerminateReason.c)
 * Callees:
 *     sub_180007470 @ 0x180007470 (sub_180007470.c)
 *     sub_180007560 @ 0x180007560 (sub_180007560.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000738C(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-E0h] BYREF
  HKEY hKey; // [rsp+28h] [rbp-D8h] BYREF
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v13[272]; // [rsp+40h] [rbp-C0h] BYREF

  hKey = 0LL;
  v11 = 130;
  PsmGetAumidFromKey(a1, &v11, v13);
  v6 = sub_180007560(a2, v5, &hKey);
  if ( v6 >= 0 )
  {
    v9 = 4;
    v7 = sub_180007470(hKey, v13, v12, &v9);
    v6 = v7;
    if ( v7 < 0 )
    {
      if ( v7 != -1073283070 )
        goto LABEL_6;
      *a3 = 0;
      goto LABEL_5;
    }
    if ( v12[0] <= 0x1AFF && v9 == 4 )
    {
      *a3 = v12[0];
LABEL_5:
      v6 = 0;
      goto LABEL_6;
    }
    v6 = -1073739509;
  }
LABEL_6:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v6;
}
