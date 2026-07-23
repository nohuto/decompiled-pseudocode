/*
 * XREFs of XdvIopBuildAsynchronousFsdRequest @ 0x1405D0090
 * Callers:
 *     IovBuildAsynchronousFsdRequest @ 0x140AC1010 (IovBuildAsynchronousFsdRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XdvIopBuildAsynchronousFsdRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 (__fastcall *a8)(__int64, __int64, __int64))
{
  return a8(a1, a2, a3);
}
