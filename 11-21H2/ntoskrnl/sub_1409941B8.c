/*
 * XREFs of sub_1409941B8 @ 0x1409941B8
 * Callers:
 *     sub_14099CEC0 @ 0x14099CEC0 (sub_14099CEC0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1409941B8()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( byte_140C5AE14 )
  {
    v0 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400398A0) )
    {
      v1 = 0;
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v1;
      UserData.Size = 4;
      EtwWrite(v0, &stru_1400398A0, 0LL, 1u, &UserData);
    }
  }
}
