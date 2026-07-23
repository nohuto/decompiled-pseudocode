/*
 * XREFs of sub_140994114 @ 0x140994114
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140994114()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v2; // [rsp+40h] [rbp-28h]
  int v3; // [rsp+48h] [rbp-20h]
  int v4; // [rsp+4Ch] [rbp-1Ch]

  if ( byte_140C5AE14 )
  {
    v0 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400379C8) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      UserData.Ptr = (ULONGLONG)&dword_140C5AE20;
      UserData.Size = 4;
      v2 = &dword_140C5AE1C;
      v3 = 4;
      EtwWrite(v0, &stru_1400379C8, 0LL, 2u, &UserData);
    }
  }
}
