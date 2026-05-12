/*
 * XREFs of StorPortUnitIdleCondition @ 0x1C00011C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00047A0 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x1C0022074 (RaMiniportIsFeatureSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C004A828 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitIdleCondition(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  signed __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  int v9; // r8d
  bool v10; // zf
  signed __int64 v11; // rax
  char IsFeatureSupported; // al
  __int64 v13; // rcx
  int *v14; // r10
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // r9d
  int *v18; // r10
  __int64 v19; // rcx
  int v20; // r9d
  int *v21; // r10
  _DWORD v22[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v23; // [rsp+58h] [rbp-20h]
  int v24; // [rsp+60h] [rbp-18h]
  char v25; // [rsp+64h] [rbp-14h]
  __int16 v26; // [rsp+65h] [rbp-13h]
  char v27; // [rsp+67h] [rbp-11h]

  if ( *(char *)(a1 + 449) >= 0 || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784)) )
    return;
  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
    McTemplateK0pquuuq_EtwWriteTransfer(
      *(_QWORD *)(a1 + 24),
      (unsigned int)&EventUnitIdleConditionStart,
      v4,
      **(_QWORD **)(a1 + 1792),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) &= ~2u;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 0x100) != 0 )
  {
    RaidUnitAdaptiveIdleTimeout(a1);
    *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 64LL) = MEMORY[0xFFFFF78000000014];
  }
  if ( !*(_BYTE *)(a1 + 695) )
  {
    *(_BYTE *)(a1 + 695) = 1;
    v5 = *(_QWORD *)(a1 + 744);
    if ( (v5 & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 736));
      ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 736));
      do
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 744), v5 | 1, v5);
        v10 = v5 == v11;
        v5 = v11;
      }
      while ( !v10 && (v11 & 1) == 0 );
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 4) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( **(_DWORD **)(v6 + 568) == 208 )
    {
      if ( (*(_BYTE *)(v6 + 584) & 8) == 0 )
      {
        *(_QWORD *)(v6 + 592) = 0LL;
        *(_QWORD *)(v6 + 600) = 0LL;
        *(_DWORD *)(v6 + 588) = 12;
        IsFeatureSupported = RaMiniportIsFeatureSupported(v6 + 336, 0LL);
        v15 = *v14;
        if ( IsFeatureSupported )
          v15 = 13;
        *v14 = v15;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v13, 1LL) )
          v17 = 14;
        *v18 = v17;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v16, 4LL) )
          v20 = 15;
        *v21 = v20;
        if ( (int)RaCallMiniportUnitControl(v19, 0LL, v21) < 0 )
          goto LABEL_17;
        *(_BYTE *)(v6 + 584) |= 8u;
      }
      if ( *(_BYTE *)(v6 + 598) )
      {
        if ( (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
        {
          v7 = *(_QWORD *)(a1 + 24);
          v26 = 0;
          v27 = 0;
          v22[0] = 1;
          v22[1] = 24;
          v23 = a1 + 88;
          v24 = 0;
          v25 = 0;
          v8 = *(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)(v7 + 568) + 200LL);
          if ( v8 )
            v8(*(_QWORD *)(v7 + 576) + 16LL, 6LL, v22);
        }
      }
    }
  }
LABEL_17:
  PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 1792), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0092A02 & 0x10) != 0 )
      McTemplateK0pquuuq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleConditionStop,
        v9,
        **(_QWORD **)(a1 + 1792),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2);
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
}
