/*
 * XREFs of sub_140A6BC20 @ 0x140A6BC20
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140A6BC20()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( byte_140C5AE14 )
  {
    v0 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140037F58) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&dword_140C227EC;
      UserData.Size = 4;
      EtwWrite(v0, &stru_140037F58, 0LL, 1u, &UserData);
    }
  }
}
