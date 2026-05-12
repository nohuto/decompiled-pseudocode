/*
 * XREFs of RaidUnitEndMaintenanceTime @ 0x1C004D120
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0zjquuujssstq_EtwWriteTransfer @ 0x1C004B1A8 (McTemplateK0zjquuujssstq_EtwWriteTransfer.c)
 *     RaidUnitMaintenanceTime @ 0x1C004D344 (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitEndMaintenanceTime(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( a2 && RaidUnitCheckAndAcquirePoFx(a2) )
  {
    v3 = *(_QWORD *)(a2 + 1792);
    if ( (*(_DWORD *)(v3 + 148) & 1) != 0 )
    {
      if ( (byte_1C0092A06 & 8) != 0 )
        McTemplateK0zjquuujssstq_EtwWriteTransfer(
          a2 + 169,
          a2 + 160,
          a2 + 2024,
          *(const wchar_t **)(*(_QWORD *)(a2 + 24) + 4656LL),
          *(_QWORD *)(a2 + 24) + 5000LL,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 96),
          *(_BYTE *)(a2 + 97),
          *(_BYTE *)(a2 + 98),
          a2 + 2024,
          (const char *)(a2 + 160),
          (const char *)(a2 + 169),
          (const char *)(a2 + 186),
          *(_DWORD *)(v3 + 144) == 0,
          *(_DWORD *)(v3 + 144));
      *(_DWORD *)(*(_QWORD *)(a2 + 1792) + 148LL) &= ~1u;
      RaidUnitPoFxIdleComponent(a2, 0, 0, 0LL);
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 1792) + 144LL) )
        RaidUnitMaintenanceTime(a2);
      else
        *(_QWORD *)(*(_QWORD *)(a2 + 1792) + 136LL) = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1784));
  }
}
