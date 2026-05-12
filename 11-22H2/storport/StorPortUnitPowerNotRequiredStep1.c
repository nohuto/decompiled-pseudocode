/*
 * XREFs of StorPortUnitPowerNotRequiredStep1 @ 0x1C004F350
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000AC74 (RaidUnitReenablePendingTimer.c)
 *     McTemplateK0pquuutq_EtwWriteTransfer @ 0x1C004A99C (McTemplateK0pquuutq_EtwWriteTransfer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004D6A8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C004F438 (StorPortUnitPowerNotRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep1(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-38h]
  char v6; // [rsp+28h] [rbp-30h]
  char v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      v8 = *(_BYTE *)(Context + 98);
      v7 = *(_BYTE *)(Context + 97);
      v6 = *(_BYTE *)(Context + 96);
      v5 = *(_DWORD *)(v4 + 56);
      McTemplateK0pquuutq_EtwWriteTransfer(v4, v2, v3, **(_QWORD **)(Context + 1792), v5, v6, v7, v8);
    }
    RaidUnitReenablePendingTimer(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 872) = 0;
    if ( *(_DWORD *)(Context + 976) && (*(_BYTE *)(Context + 449) & 0x40) != 0 )
      *(_BYTE *)(Context + 1782) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerNotRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784));
  }
}
