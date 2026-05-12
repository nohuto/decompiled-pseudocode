/*
 * XREFs of RaidUnitEndMaintenanceTime @ 0x1C0049DA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 *     McTemplateK0zjquuujssstq_EtwWriteTransfer @ 0x1C004838C (McTemplateK0zjquuujssstq_EtwWriteTransfer.c)
 *     RaidUnitMaintenanceTime @ 0x1C0049F84 (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitEndMaintenanceTime(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( a2 && RaidUnitCheckAndAcquirePoFx(a2) )
  {
    v3 = *(_QWORD *)(a2 + 1744);
    if ( (*(_DWORD *)(v3 + 148) & 1) != 0 )
    {
      if ( (byte_1C00799E6 & 4) != 0 )
      {
        McTemplateK0zjquuujssstq_EtwWriteTransfer(
          a2 + 169,
          a2 + 160,
          a2 + 1976,
          *(const wchar_t **)(*(_QWORD *)(a2 + 24) + 4592LL),
          *(_QWORD *)(a2 + 24) + 4936LL,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 96),
          *(_BYTE *)(a2 + 97),
          *(_BYTE *)(a2 + 98),
          a2 + 1976,
          (const char *)(a2 + 160),
          (const char *)(a2 + 169),
          (const char *)(a2 + 186),
          *(_DWORD *)(v3 + 144) == 0,
          *(_DWORD *)(v3 + 144));
        v3 = *(_QWORD *)(a2 + 1744);
      }
      *(_DWORD *)(v3 + 148) &= ~1u;
      RaidUnitPoFxIdleComponent(a2, 0, 0, 0LL);
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 1744) + 144LL) )
        RaidUnitMaintenanceTime(a2);
      else
        *(_QWORD *)(*(_QWORD *)(a2 + 1744) + 136LL) = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1736));
  }
}
