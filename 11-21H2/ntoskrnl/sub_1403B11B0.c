/*
 * XREFs of sub_1403B11B0 @ 0x1403B11B0
 * Callers:
 *     sub_1403A4CC0 @ 0x1403A4CC0 (sub_1403A4CC0.c)
 *     sub_1403B1020 @ 0x1403B1020 (sub_1403B1020.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1403B11B0(__int64 a1, int a2)
{
  char v2; // bl
  REGHANDLE v3; // rdi
  char v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  char *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v2 = a2;
  v5 = a1;
  sub_140355058(a1, 0, 6, a2);
  if ( byte_140C5AE14 )
  {
    v3 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400103F0) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 8;
      v7 = &v4;
      v4 = v2 - 1;
      v8 = 1;
      EtwWriteEx(v3, &stru_1400103F0, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
}
