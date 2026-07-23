/*
 * XREFs of sub_14099AD7C @ 0x14099AD7C
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_14099AD7C()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( byte_140C5AE30 )
  {
    v0 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_140039A90) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&dword_140C1D024;
      UserData.Size = 4;
      EtwWrite(v0, &stru_140039A90, 0LL, 1u, &UserData);
    }
  }
}
