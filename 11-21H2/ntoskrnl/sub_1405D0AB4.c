/*
 * XREFs of sub_1405D0AB4 @ 0x1405D0AB4
 * Callers:
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN sub_1405D0AB4()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  char v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  result = dword_140D05304;
  v2 = dword_140D05304;
  if ( byte_140C5AE14 )
  {
    v1 = RegHandle;
    result = EtwEventEnabled(RegHandle, &stru_140039B40);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 1;
      return EtwWriteEx(v1, &stru_140039B40, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
