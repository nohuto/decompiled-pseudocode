/*
 * XREFs of RaidUnitMaintenanceTime @ 0x1C004D344
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C004D120 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C004D2B0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x1C004D510 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0008870 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0zjquuujsss_EtwWriteTransfer @ 0x1C004B008 (McTemplateK0zjquuujsss_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(_QWORD *)(a1 + 1792);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 0x100) != 0
      && (v4 & 0x400) != 0
      && (v4 & 0x800) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v3 + 148), 0) )
    {
      v5 = *(_QWORD *)(a1 + 1792);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v5 + 136)) <= 864000000000LL )
      {
        *(_DWORD *)(v5 + 148) &= ~1u;
      }
      else
      {
        if ( !*(_QWORD *)(v5 + 128) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 128LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL, v2);
        v6 = *(_QWORD *)(a1 + 1792);
        if ( *(_QWORD *)(v6 + 128) )
        {
          if ( (byte_1C0092A06 & 8) != 0 )
            McTemplateK0zjquuujsss_EtwWriteTransfer(
              a1 + 169,
              a1 + 160,
              a1 + 2024,
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
              *(_QWORD *)(a1 + 24) + 5000LL,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 96),
              *(_BYTE *)(a1 + 97),
              *(_BYTE *)(a1 + 98),
              a1 + 2024,
              (const char *)(a1 + 160),
              (const char *)(a1 + 169),
              (const char *)(a1 + 186));
          RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
          *(_DWORD *)(*(_QWORD *)(a1 + 1792) + 144LL) = 0;
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1792) + 128LL), -600000000LL, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v6 + 148) &= ~1u;
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
}
