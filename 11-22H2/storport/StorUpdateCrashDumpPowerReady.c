/*
 * XREFs of StorUpdateCrashDumpPowerReady @ 0x1C00124B0
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011048 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     StorPortUnitIdleState @ 0x1C0024F60 (StorPortUnitIdleState.c)
 *     StorPortAdapterIdleState @ 0x1C004E010 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C00125F8 (RaidGetStorPoFxComponent.c)
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
  _DWORD *v10; // rax
  __int64 v11; // r9
  int v13; // eax

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 4952);
  v3 = 1;
  v4 = 1;
  if ( *(char *)(a1 + 108) < 0
    || *(_DWORD *)(a1 + 308) == 4
    && !*(_DWORD *)(a1 + 100)
    && ((v13 = *(_DWORD *)(a1 + 352), v13 == 5) || v13 == 17 || (*(_BYTE *)(a1 + 107) & 0x50) == 0x50)
    || (v6 = *(_QWORD *)(a1 + 4896)) != 0
    && ((StorPoFxComponent = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(v6 + 8), 0LL)) == 0LL
     || *StorPoFxComponent >= 2u && *(_DWORD *)(v9 + 16) > StorPoFxComponent[9]
     || *StorPoFxComponent == 1 && (*(_BYTE *)(a1 + 107) & 0x40) != 0 && *(_DWORD *)(v9 + 16) > v8) )
  {
    v1 = 0;
LABEL_25:
    v4 = 0;
    goto LABEL_19;
  }
  if ( !v2
    || (*(_BYTE *)(v2 + 450) & 4) != 0
    || *(_DWORD *)(v2 + 492) == 4 && !*(_DWORD *)(v2 + 980) && (*(_BYTE *)(v2 + 449) & 0x44) == 0x44 )
  {
    v3 = 0;
    goto LABEL_25;
  }
  if ( RaidUnitCheckAndAcquirePoFx(v2) )
  {
    v10 = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(*(_QWORD *)(v2 + 1792) + 8LL), 0LL);
    if ( !v10
      || *v10 >= 2u && *(_DWORD *)(v11 + 16) > v10[9]
      || *v10 == 1 && (*(_BYTE *)(v2 + 449) & 0x40) != 0 && *(_DWORD *)(v11 + 16) )
    {
      v3 = 0;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 1784));
    if ( !v3 )
      goto LABEL_25;
  }
LABEL_19:
  *(_BYTE *)(a1 + 4829) = v1;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 1782) = v3;
    *(_BYTE *)(v2 + 1783) = v4;
  }
  return v3;
}
