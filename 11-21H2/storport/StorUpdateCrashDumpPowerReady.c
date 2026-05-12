/*
 * XREFs of StorUpdateCrashDumpPowerReady @ 0x1C000C7B4
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C000C580 (StorPortAdapterIdleState.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0014E6C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     StorPortUnitIdleState @ 0x1C0025000 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C000C8F8 (RaidGetStorPoFxComponent.c)
 */

char __fastcall StorUpdateCrashDumpPowerReady(__int64 a1)
{
  char v1; // si
  __int64 v2; // rdi
  char v3; // bl
  char v4; // r14
  __int64 v6; // r9
  _DWORD *StorPoFxComponent; // rax
  unsigned int v8; // edx
  __int64 v9; // r9
  bool v10; // cc
  int v12; // eax
  _DWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r9
  bool v16; // cc

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 4888);
  v3 = 1;
  v4 = 1;
  if ( *(char *)(a1 + 108) < 0 )
    goto LABEL_21;
  if ( *(_DWORD *)(a1 + 308) == 4 && !*(_DWORD *)(a1 + 100) )
  {
    v12 = *(_DWORD *)(a1 + 352);
    if ( v12 == 5 || v12 == 17 || (*(_BYTE *)(a1 + 107) & 0x50) == 0x50 )
      goto LABEL_21;
  }
  v6 = *(_QWORD *)(a1 + 4832);
  if ( v6 )
  {
    StorPoFxComponent = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(v6 + 8), 0LL);
    if ( !StorPoFxComponent )
      goto LABEL_21;
    if ( *StorPoFxComponent >= 2u )
    {
      v10 = *(_DWORD *)(v9 + 16) <= StorPoFxComponent[9];
      goto LABEL_7;
    }
    if ( *StorPoFxComponent == 1 && (*(_BYTE *)(a1 + 107) & 0x40) != 0 )
    {
      v10 = *(_DWORD *)(v9 + 16) <= v8;
LABEL_7:
      if ( v10 )
        goto LABEL_8;
LABEL_21:
      v1 = 0;
LABEL_30:
      v4 = 0;
      goto LABEL_12;
    }
  }
LABEL_8:
  if ( !v2
    || (*(_BYTE *)(v2 + 450) & 4) != 0
    || *(_DWORD *)(v2 + 492) == 4 && !*(_DWORD *)(v2 + 924) && (*(_BYTE *)(v2 + 449) & 0x44) == 0x44 )
  {
    v3 = 0;
    goto LABEL_30;
  }
  if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(v2) )
    goto LABEL_12;
  v13 = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(*(_QWORD *)(v2 + 1744) + 8LL), 0LL);
  if ( !v13 )
  {
LABEL_38:
    v3 = 0;
    goto LABEL_39;
  }
  if ( *v13 >= 2u )
  {
    v16 = *(_DWORD *)(v15 + 16) <= v13[9];
    goto LABEL_37;
  }
  if ( *v13 == 1 && (*(_BYTE *)(v2 + 449) & 0x40) != 0 )
  {
    v16 = *(_DWORD *)(v15 + 16) <= v14;
LABEL_37:
    if ( v16 )
      goto LABEL_39;
    goto LABEL_38;
  }
LABEL_39:
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 1736));
  if ( !v3 )
    goto LABEL_30;
LABEL_12:
  *(_BYTE *)(a1 + 4765) = v1;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 1734) = v3;
    *(_BYTE *)(v2 + 1735) = v4;
  }
  return v3;
}
