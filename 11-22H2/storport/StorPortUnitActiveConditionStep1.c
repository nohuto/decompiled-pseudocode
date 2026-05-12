/*
 * XREFs of StorPortUnitActiveConditionStep1 @ 0x1C00013E0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitActiveConditionStep2 @ 0x1C000152C (StorPortUnitActiveConditionStep2.c)
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x1C0022074 (RaMiniportIsFeatureSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C004A828 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitActiveConditionStep1(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int64, _DWORD *); // rax
  __int64 v8; // rcx
  _DWORD *v9; // r9
  __int64 v10; // rcx
  _DWORD *v11; // r9
  __int64 v12; // rcx
  _DWORD *v13; // r9
  _DWORD v14[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]
  char v17; // [rsp+64h] [rbp-14h]
  __int16 v18; // [rsp+65h] [rbp-13h]
  char v19; // [rsp+67h] [rbp-11h]

  if ( *(char *)(a1 + 449) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784)) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
      McTemplateK0pquuuq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitActiveConditionStart,
        v4,
        **(_QWORD **)(a1 + 1792),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 4) == 0 )
      goto LABEL_13;
    v5 = *(_QWORD *)(a1 + 24);
    if ( **(_DWORD **)(v5 + 568) != 208 )
      goto LABEL_13;
    if ( (*(_BYTE *)(v5 + 584) & 8) == 0 )
    {
      *(_QWORD *)(v5 + 592) = 0LL;
      *(_QWORD *)(v5 + 600) = 0LL;
      *(_DWORD *)(v5 + 588) = 12;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v5 + 336, 0LL) )
        *v9 = 13;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v8, 1LL) )
        *v11 = 14;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v10, 4LL) )
        *v13 = 15;
      if ( (int)RaCallMiniportUnitControl(v12, 0LL, v13) < 0 )
        goto LABEL_13;
      *(_BYTE *)(v5 + 584) |= 8u;
    }
    if ( *(_BYTE *)(v5 + 598) && (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v18 = 0;
      v19 = 0;
      v14[0] = 1;
      v14[1] = 24;
      v15 = a1 + 88;
      v16 = 0;
      v17 = 1;
      v7 = *(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)(v6 + 568) + 200LL);
      if ( v7 )
        v7(*(_QWORD *)(v6 + 576) + 16LL, 6LL, v14);
    }
LABEL_13:
    StorPortUnitActiveConditionStep2(a1, a2);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
}
