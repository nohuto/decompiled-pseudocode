/*
 * XREFs of sub_1402D6184 @ 0x1402D6184
 * Callers:
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1402D6184(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( byte_140C5AE14 )
  {
    v1 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_14000FF58) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWriteEx(v1, &stru_14000FF58, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
