/*
 * XREFs of sub_140993308 @ 0x140993308
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140993308()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( byte_140C5AE14 )
  {
    v0 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400384B8) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&dword_140C09830;
      UserData.Size = 4;
      EtwWrite(v0, &stru_1400384B8, 0LL, 1u, &UserData);
    }
  }
}
