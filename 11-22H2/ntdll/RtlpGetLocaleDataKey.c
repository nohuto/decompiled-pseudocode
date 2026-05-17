/*
 * XREFs of RtlpGetLocaleDataKey @ 0x180109B58
 * Callers:
 *     RtlpGetUserLocaleName @ 0x180109CE4 (RtlpGetUserLocaleName.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetLocaleDataKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  HANDLE v5; // [rsp+68h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !gLocaleDataRegKey && (int)OpenGlobalizationUserSettingsKey(0x20019u, a2, (__int64)&v5, a4) >= 0 )
  {
    if ( (int)NtOpenKey() >= 0 && _InterlockedCompareExchange64(&gLocaleDataRegKey, 0LL, 0LL) )
      NtClose(0LL);
    NtClose(v5);
  }
  return gLocaleDataRegKey;
}
