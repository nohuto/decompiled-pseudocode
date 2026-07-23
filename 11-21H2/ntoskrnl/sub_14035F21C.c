/*
 * XREFs of sub_14035F21C @ 0x14035F21C
 * Callers:
 *     sub_14035C864 @ 0x14035C864 (sub_14035C864.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN sub_14035F21C()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  result = dword_140D06984;
  v2 = dword_140D06984;
  if ( byte_140C5AE14 )
  {
    v1 = RegHandle;
    result = EtwEventEnabled(RegHandle, &stru_140010ED8);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      return EtwWriteEx(v1, &stru_140010ED8, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
