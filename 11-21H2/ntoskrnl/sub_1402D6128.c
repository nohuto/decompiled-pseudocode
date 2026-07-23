/*
 * XREFs of sub_1402D6128 @ 0x1402D6128
 * Callers:
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1402D6128(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( byte_140C5AE14 )
  {
    v1 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_14000FF48) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWriteEx(v1, &stru_14000FF48, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
