/*
 * XREFs of ?SetCurrentTimestamp@CCrossProcessServerInputEndpoint@@UEAAJPEAUAE_CURRENT_POSITION@@@Z @ 0x14008C930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossProcessServerInputEndpoint::SetCurrentTimestamp(
        CCrossProcessServerInputEndpoint *this,
        struct AE_CURRENT_POSITION *a2)
{
  (*(void (__fastcall **)(char *, struct AE_CURRENT_POSITION *, signed __int64))(*((_QWORD *)this - 51) + 80LL))(
    (char *)this - 408,
    a2,
    _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 42) + 24LL), 0LL, 0LL));
  return 0LL;
}
