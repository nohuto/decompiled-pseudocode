/*
 * XREFs of StorPortUnitPowerRequiredStep1 @ 0x1C004F6F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000AC74 (RaidUnitReenablePendingTimer.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x1C004AA64 (McTemplateK0pquuutx_EtwWriteTransfer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004D6A8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C004F864 (StorPortUnitPowerRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerRequiredStep1(char *Context)
{
  __int64 *v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-38h]
  char v7; // [rsp+28h] [rbp-30h]
  char v8; // [rsp+30h] [rbp-28h]
  char v9; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    v2 = (__int64 *)(Context + 24);
    if ( *((_QWORD *)Context + 259) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) & 0x20) != 0 || (*(_BYTE *)(*v2 + 108) & 1) != 0 )
      {
        v3 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)Context + 259);
        *((_QWORD *)Context + 260) += v3 / 0x2710;
        if ( v3 / 0x2710 >= 0x2710 )
          ++*((_DWORD *)Context + 530);
        if ( !*((_QWORD *)Context + 256) )
          *((_QWORD *)Context + 256) = *(_QWORD *)(*v2 + 5152);
      }
      *((_QWORD *)Context + 259) = 0LL;
    }
    ++*((_DWORD *)Context + 528);
    if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
    {
      v9 = Context[98];
      v8 = Context[97];
      v7 = Context[96];
      v6 = *(_DWORD *)(*v2 + 56);
      McTemplateK0pquuutx_EtwWriteTransfer(
        *v2,
        &EventUnitPowerRequiredStart,
        (__int64)v2,
        **((_QWORD **)Context + 224),
        v6,
        v7,
        v8,
        v9);
    }
    RaidUnitReenablePendingTimer((__int64)Context, 0);
    *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) |= 8u;
    v4 = *((_QWORD *)Context + 224);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 0x10) != 0 )
      *(_DWORD *)(v4 + 32) = v5 & 0xFFFFFFEF;
    else
      *((_DWORD *)Context + 218) = 1;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported((__int64)Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport((__int64)Context);
    }
    StorPortUnitPowerRequiredStep2(Context);
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 223));
  }
}
