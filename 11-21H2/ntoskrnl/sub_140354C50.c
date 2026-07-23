/*
 * XREFs of sub_140354C50 @ 0x140354C50
 * Callers:
 *     sub_140354990 @ 0x140354990 (sub_140354990.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_140354C50(__int64 a1)
{
  BOOLEAN result; // al
  REGHANDLE v2; // rbx
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v3 = a1;
  result = sub_140355058(a1, 0LL, 7LL);
  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    result = EtwEventEnabled(RegHandle, &stru_140010E78);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      return EtwWriteEx(v2, &stru_140010E78, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
