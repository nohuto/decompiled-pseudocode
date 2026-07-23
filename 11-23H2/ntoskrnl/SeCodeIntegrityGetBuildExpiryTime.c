/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x140864050
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x140863FC0 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C379F0 )
    return qword_140C379F0();
  *a1 = 0LL;
  return 0LL;
}
