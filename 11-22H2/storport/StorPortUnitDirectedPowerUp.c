/*
 * XREFs of StorPortUnitDirectedPowerUp @ 0x1C004ECF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000AC74 (RaidUnitReenablePendingTimer.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x1C004AA64 (McTemplateK0pquuutx_EtwWriteTransfer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004D6A8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1C004EEA8 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     RaidNotifyPoAboutAdaptiveD3Engagement @ 0x1C00741D8 (RaidNotifyPoAboutAdaptiveD3Engagement.c)
 */

void __fastcall StorPortUnitDirectedPowerUp(char *Context)
{
  __int64 v2; // r9
  int v3; // ecx
  __int64 *v4; // r8
  unsigned __int64 v5; // rcx

  if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    v2 = *((_QWORD *)Context + 224);
    v3 = *(_DWORD *)(v2 + 32);
    if ( (v3 & 0x300) == 0x300 )
    {
      if ( (Context[451] & 4) == 0 )
        RaidNotifyPoAboutAdaptiveD3Engagement(Context);
      PoFxReportDevicePoweredOn(**((_QWORD **)Context + 224));
    }
    else
    {
      v4 = (__int64 *)(Context + 24);
      if ( *((_QWORD *)Context + 267) )
      {
        if ( (v3 & 0x80u) != 0 || (*(_BYTE *)(*v4 + 108) & 1) != 0 )
        {
          v5 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)Context + 267);
          *((_QWORD *)Context + 268) += v5 / 0x2710;
          if ( v5 / 0x2710 >= 0x2710 )
            ++*((_DWORD *)Context + 530);
          if ( !*((_QWORD *)Context + 266) )
            *((_QWORD *)Context + 266) = *(_QWORD *)(*v4 + 5152);
        }
        *((_QWORD *)Context + 267) = 0LL;
        v2 = *((_QWORD *)Context + 224);
      }
      ++*((_DWORD *)Context + 528);
      if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
        McTemplateK0pquuutx_EtwWriteTransfer(
          *v4,
          &EventUnitDirectedPowerUpStart,
          (__int64)v4,
          *(_QWORD *)v2,
          *(_DWORD *)(*v4 + 56),
          Context[96],
          Context[97],
          Context[98]);
      RaidUnitReenablePendingTimer((__int64)Context, 0);
      *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) |= 8u;
      if ( RaidIsUnitControlSupported((__int64)Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport((__int64)Context);
      StorPortUnitDirectedPowerUpRequestD0(Context);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 223));
    }
  }
}
