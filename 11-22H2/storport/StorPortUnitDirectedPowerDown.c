/*
 * XREFs of StorPortUnitDirectedPowerDown @ 0x1C004E820
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000AC74 (RaidUnitReenablePendingTimer.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x1C004AA64 (McTemplateK0pquuutx_EtwWriteTransfer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004D6A8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerDownRequestD3 @ 0x1C004EA90 (StorPortUnitDirectedPowerDownRequestD3.c)
 *     RaidNotifyPoAboutAdaptiveD3Engagement @ 0x1C00741D8 (RaidNotifyPoAboutAdaptiveD3Engagement.c)
 */

void __fastcall StorPortUnitDirectedPowerDown(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  char v7; // [rsp+28h] [rbp-30h]
  char v8; // [rsp+30h] [rbp-28h]
  char v9; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    v4 = *(_QWORD *)(Context + 1792);
    if ( (*(_DWORD *)(v4 + 32) & 0x300) == 0x300 )
    {
      if ( (*(_BYTE *)(Context + 451) & 4) == 0 )
        RaidNotifyPoAboutAdaptiveD3Engagement(Context);
      PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context + 1792), v2, v3);
    }
    else
    {
      if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
      {
        v5 = *(_QWORD *)(Context + 24);
        v9 = *(_BYTE *)(Context + 98);
        v8 = *(_BYTE *)(Context + 97);
        v7 = *(_BYTE *)(Context + 96);
        v6 = *(_DWORD *)(v5 + 56);
        McTemplateK0pquuutx_EtwWriteTransfer(v5, &EventUnitDirectedPowerDownStart, v3, *(_QWORD *)v4, v6, v7, v8, v9);
      }
      RaidUnitReenablePendingTimer(Context, 0);
      *(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) &= ~8u;
      *(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) &= ~0x10u;
      if ( *(_DWORD *)(Context + 976) && (*(_BYTE *)(Context + 449) & 0x40) != 0 )
        *(_BYTE *)(Context + 1782) = 0;
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
      StorPortUnitDirectedPowerDownRequestD3((PVOID)Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784));
    }
  }
}
