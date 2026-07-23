/*
 * XREFs of sub_1408233FC @ 0x1408233FC
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1403B9A30 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1408233FC(__int64 a1)
{
  REGHANDLE v1; // rbx
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v2 = a1;
  sub_140355058(a1, 0, 3, 0LL);
  if ( byte_140C5AE14 )
  {
    v1 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400118D8) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWrite(v1, &stru_1400118D8, 0LL, 1u, &UserData);
    }
  }
}
