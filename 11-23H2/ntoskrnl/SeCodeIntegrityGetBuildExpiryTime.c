/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x140863E10
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x140863D80 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C37A50 )
    return qword_140C37A50();
  *a1 = 0LL;
  return 0LL;
}
