/*
 * XREFs of WdipSemWriteProviderLimitExceededEvent @ 0x1409DE678
 * Callers:
 *     WdipSemUpdateProviderTableWithEvent @ 0x140831C00 (WdipSemUpdateProviderTableWithEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x14083215C (WdipSemWriteEvent.c)
 */

NTSTATUS __fastcall WdipSemWriteProviderLimitExceededEvent(ULONGLONG a1)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 )
    return -1073741811;
  v2.Reserved = 0;
  v2.Ptr = a1;
  v2.Size = 16;
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_INIT_PROVIDER_MAX, 0LL, 1u, &v2);
}
