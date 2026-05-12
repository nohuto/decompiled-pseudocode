/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x1C00015CC
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C000C470 (StorPortUnitIdleCondition.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0049EF0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x1C004A130 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x1C004A150 (RaidUnitPowerSettingCallback.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0088388 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C00016A0 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C00016FC (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0quuuqqq_EtwWriteTransfer @ 0x1C0048058 (McTemplateK0quuuqqq_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  unsigned int MinimumPowerCyclePeriod; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // r14
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx() )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0x100) != 0 )
    {
      MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
      v4 = *(_QWORD *)(v3 + 120);
      v5 = MinimumPowerCyclePeriod;
      if ( v4 )
      {
        ExCancelTimer(v4, 0LL);
        v3 = *(_QWORD *)(a1 + 1744);
      }
      v6 = *(_DWORD *)(v3 + 20);
      if ( (unsigned int)v5 > v6 )
        v6 = v5;
      v7 = 0;
      if ( (*(_DWORD *)(v3 + 32) & 0x400) != 0 )
      {
        ++*(_QWORD *)(v3 + 56);
        v8 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 3224);
        if ( v8 > 0 )
        {
          v9 = v8 / 10000;
          v10 = v8 / 10000 / v5;
          if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
          {
            v11 = *(_DWORD *)(a1 + 3216);
            LOBYTE(v11) = *(_BYTE *)(a1 + 98);
            McTemplateK0quuuqqq_EtwWriteTransfer(
              v11,
              *(_QWORD *)(a1 + 24),
              0,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 96),
              *(_BYTE *)(a1 + 97),
              v11,
              *(_DWORD *)(a1 + 3216),
              v10,
              v5);
          }
          if ( v10 <= *(unsigned int *)(a1 + 3216) )
          {
            ++*(_QWORD *)(*(_QWORD *)(a1 + 1744) + 48LL);
            v12 = *(_QWORD *)(a1 + 1744);
            v13 = v9 - v5 * (*(unsigned int *)(a1 + 3216) + 1LL);
            if ( !*(_QWORD *)(v12 + 120) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL);
              v12 = *(_QWORD *)(a1 + 1744);
            }
            v14 = *(_QWORD *)(v12 + 120);
            v7 = 1;
            if ( v14 )
            {
              ExSetTimer(v14, 10000 * v13, 0LL, 0LL);
              v7 = 1;
            }
          }
          else
          {
            v6 = 100;
            v7 = 0;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) = (v7 << 9) | *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0xFFFFFDFF;
      RaidUnitPoFxSetDeviceIdleTimeout(a1, v6, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
