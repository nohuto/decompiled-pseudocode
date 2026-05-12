/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x1C00047A0
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C00011C0 (StorPortUnitIdleCondition.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C004D2B0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x1C004D4F0 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x1C004D510 (RaidUnitPowerSettingCallback.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00A2EDC (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C00048B4 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     McTemplateK0quuuqqq_EtwWriteTransfer @ 0x1C004AE60 (McTemplateK0quuuqqq_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  int v2; // r8d
  __int64 v3; // rcx
  _DWORD *v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // esi
  int v9; // edx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  int v14; // ecx
  __int64 v15; // rbp
  __int64 v16; // rcx

  if ( *(char *)(a1 + 449) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784)) )
  {
    v3 = *(_QWORD *)(a1 + 1792);
    if ( (*(_DWORD *)(v3 + 32) & 0x100) != 0 )
    {
      if ( !v3 || (v4 = *(_DWORD **)(v3 + 8)) == 0LL || *v4 != 3 || (v5 = v4[5]) == 0 )
        v5 = 300000;
      v6 = *(_QWORD *)(v3 + 120);
      if ( v6 )
        ExCancelTimer(v6, 0LL);
      v7 = *(_QWORD *)(a1 + 1792);
      v8 = v5;
      if ( v5 <= *(_DWORD *)(v7 + 20) )
        v8 = *(_DWORD *)(v7 + 20);
      v9 = 0;
      v10 = v8;
      if ( (*(_DWORD *)(v7 + 32) & 0x400) != 0 )
      {
        ++*(_QWORD *)(v7 + 56);
        v11 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 3272);
        if ( v11 > 0 )
        {
          v12 = v11 / 10000;
          v13 = v11 / 10000 / (unsigned __int64)v5;
          if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
          {
            v14 = *(_DWORD *)(a1 + 3264);
            LOBYTE(v14) = *(_BYTE *)(a1 + 98);
            McTemplateK0quuuqqq_EtwWriteTransfer(
              v14,
              *(_QWORD *)(a1 + 24),
              v2,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 96),
              *(_BYTE *)(a1 + 97),
              v14,
              *(_DWORD *)(a1 + 3264),
              v13,
              v5);
          }
          if ( v13 <= *(unsigned int *)(a1 + 3264) )
          {
            ++*(_QWORD *)(*(_QWORD *)(a1 + 1792) + 48LL);
            v15 = v12 - v5 * (*(unsigned int *)(a1 + 3264) + 1LL);
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1792) + 120LL) )
              *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL, v10);
            LODWORD(v10) = v8;
            v9 = 1;
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 120LL);
            if ( v16 )
            {
              ExSetTimer(v16, 10000 * v15, 0LL, 0LL);
              LODWORD(v10) = v8;
              v9 = 1;
            }
          }
          else
          {
            v9 = 0;
            LODWORD(v10) = 100;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 0xFFFFFDFF | (v9 << 9);
      RaidUnitPoFxSetDeviceIdleTimeout(a1, (unsigned int)v10, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
}
