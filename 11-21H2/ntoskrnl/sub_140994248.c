/*
 * XREFs of sub_140994248 @ 0x140994248
 * Callers:
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A51C68 @ 0x140A51C68 (sub_140A51C68.c)
 */

void __fastcall sub_140994248(int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+50h] [rbp-10h]
  int v7; // [rsp+54h] [rbp-Ch]
  int v8; // [rsp+70h] [rbp+10h] BYREF

  v8 = a1;
  v3 = 0LL;
  if ( byte_140C5AE14 )
  {
    if ( EtwEventEnabled(RegHandle, &stru_1400387A8) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      sub_140A51C68(a2, &v3);
      v7 = 0;
      v5 = &v3;
      v6 = 8;
      EtwWrite(RegHandle, &stru_1400387A8, 0LL, 2u, &UserData);
    }
  }
}
