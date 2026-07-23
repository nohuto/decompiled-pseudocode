/*
 * XREFs of sub_140993FC8 @ 0x140993FC8
 * Callers:
 *     sub_1409984D0 @ 0x1409984D0 (sub_1409984D0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140993FC8(unsigned __int64 a1)
{
  REGHANDLE v2; // rbx
  unsigned __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400395A0) )
    {
      UserData.Reserved = 0;
      UserData.Size = 8;
      UserData.Ptr = (ULONGLONG)&v3;
      v3 = a1 / 0xA;
      EtwWrite(v2, &stru_1400395A0, 0LL, 1u, &UserData);
    }
  }
}
