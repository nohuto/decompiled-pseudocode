/*
 * XREFs of sub_1405D1EE8 @ 0x1405D1EE8
 * Callers:
 *     sub_14024E2C8 @ 0x14024E2C8 (sub_14024E2C8.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN sub_1405D1EE8()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  result = dword_140D01430;
  v2 = dword_140D01430;
  if ( byte_140C5AE14 )
  {
    v1 = RegHandle;
    result = EtwEventEnabled(RegHandle, &stru_140037BB0);
    if ( result )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&dword_140D00BC4;
      UserData.Size = 4;
      v4 = &v2;
      v5 = 4;
      return EtwWriteEx(v1, &stru_140037BB0, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
