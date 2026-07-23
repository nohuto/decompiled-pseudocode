/*
 * XREFs of sub_1405D27D4 @ 0x1405D27D4
 * Callers:
 *     sub_1405CEED0 @ 0x1405CEED0 (sub_1405CEED0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D27D4(__int64 a1, __int64 a2, int a3)
{
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+B0h] [rbp+30h] BYREF

  v14 = a3;
  v13 = a1;
  if ( byte_140C5AE14 )
  {
    v5 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140038410) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v13;
      UserData.Size = 8;
      v7 = &v14;
      v8 = 4;
      v11 = 4 * a3;
      v10 = a2;
      EtwWriteEx(v5, &stru_140038410, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
