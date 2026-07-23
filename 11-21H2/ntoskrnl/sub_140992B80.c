/*
 * XREFs of sub_140992B80 @ 0x140992B80
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140992B80()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( byte_140C5AE14 )
  {
    v0 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400387D0) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&dword_140D06A88;
      UserData.Size = 4;
      EtwWrite(v0, &stru_1400387D0, 0LL, 1u, &UserData);
    }
  }
}
