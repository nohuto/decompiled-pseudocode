/*
 * XREFs of sub_1405D2C00 @ 0x1405D2C00
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_1405CBC30 @ 0x1405CBC30 (sub_1405CBC30.c)
 *     sub_1405CCAC0 @ 0x1405CCAC0 (sub_1405CCAC0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D2C00(__int64 *a1, int a2)
{
  REGHANDLE v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  int *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  int v13; // [rsp+98h] [rbp+18h] BYREF

  v13 = a2;
  if ( byte_140C5AE14 )
  {
    v3 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140037A98) )
    {
      v4 = *a1;
      v5 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = v5 + 48;
      v7 = v4 + 16;
      v8 = 4;
      v10 = &v13;
      v11 = 4;
      UserData.Size = 8;
      EtwWriteEx(v3, &stru_140037A98, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
