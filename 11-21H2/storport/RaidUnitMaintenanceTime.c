/*
 * XREFs of RaidUnitMaintenanceTime @ 0x1C0049F84
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C0049DA0 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0049EF0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x1C004A150 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000FA68 (RaidUnitPoFxActivateComponent.c)
 *     McTemplateK0zjquuujsss_EtwWriteTransfer @ 0x1C0048200 (McTemplateK0zjquuujsss_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = *(_QWORD *)(a1 + 1744);
    v3 = *(_DWORD *)(v2 + 32);
    if ( (v3 & 0x100) != 0
      && (v3 & 0x400) != 0
      && (v3 & 0x800) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v2 + 148), 0) )
    {
      v4 = *(_QWORD *)(a1 + 1744);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v4 + 136)) > 864000000000LL
        && (*(_QWORD *)(v4 + 128)
         || (*(_QWORD *)(*(_QWORD *)(a1 + 1744) + 128LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL),
             v4 = *(_QWORD *)(a1 + 1744),
             *(_QWORD *)(v4 + 128))) )
      {
        if ( (byte_1C00799E6 & 4) != 0 )
          McTemplateK0zjquuujsss_EtwWriteTransfer(
            a1 + 169,
            a1 + 160,
            a1 + 1976,
            *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4592LL),
            *(_QWORD *)(a1 + 24) + 4936LL,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a1 + 1976,
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186));
        RaidUnitPoFxActivateComponent(a1, 0LL, 2LL, 0LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 144LL) = 0;
        ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1744) + 128LL), -600000000LL, 0LL, 0LL);
      }
      else
      {
        *(_DWORD *)(v4 + 148) &= ~1u;
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
