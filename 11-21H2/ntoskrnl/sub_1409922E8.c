/*
 * XREFs of sub_1409922E8 @ 0x1409922E8
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14056C938 @ 0x14056C938 (sub_14056C938.c)
 */

void sub_1409922E8()
{
  REGHANDLE v0; // rbx
  char v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( byte_140C5AE14 )
  {
    v0 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039580) )
    {
      UserData.Reserved = 0;
      v1 = sub_14056C938();
      UserData.Size = 1;
      UserData.Ptr = (ULONGLONG)&v1;
      EtwWrite(v0, &stru_140039580, 0LL, 1u, &UserData);
    }
  }
}
