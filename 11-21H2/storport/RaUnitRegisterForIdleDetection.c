/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1C0088388
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00015CC (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C00016A0 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 *     RaidSetD3Cold @ 0x1C0020224 (RaidSetD3Cold.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pquuudttqqttq_EtwWriteTransfer @ 0x1C00478D8 (McTemplateK0pquuudttqqttq_EtwWriteTransfer.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0049514 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall RaUnitRegisterForIdleDetection(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi
  unsigned __int8 v6; // al
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // r12d
  int v10; // esi
  int v11; // r13d
  __int64 v12; // r8
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  char v18; // di
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 Pool; // rax
  _QWORD *v22; // rsi
  int v23; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  _DWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 *v31; // rcx
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v33; // [rsp+48h] [rbp-51h]
  int v34; // [rsp+80h] [rbp-19h]
  int v35; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v35 = 0;
  v34 = -1;
  v5 = 0;
  if ( RuntimePowerDisabled )
  {
    Context[451] |= 0x20u;
    goto LABEL_16;
  }
  if ( !v2 || (*(_BYTE *)(v2 + 108) & 8) != 0 || *((_DWORD *)Context + 454) == 1 )
  {
LABEL_61:
    v5 = -1073741823;
    goto LABEL_16;
  }
  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    if ( (Context[449] & 0x80u) != 0 )
    {
      v5 = -1073741738;
      goto LABEL_16;
    }
    v6 = _interlockedbittestandset((volatile signed __int32 *)Context + 114, 0);
    v35 = v6;
    if ( !v6 )
    {
      Context[449] ^= (Context[449] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
      if ( RaidIsUnitControlSupported((__int64)Context, 4) )
        v5 = RaCallMiniportUnitControl(*((_QWORD *)Context + 3) + 336LL);
      if ( *((_QWORD *)Context + 218) )
        goto LABEL_26;
      if ( (*(_BYTE *)(v2 + 104) & 0x20) != 0 )
      {
        v18 = 0;
        v19 = 248LL;
        if ( (*(_BYTE *)(v2 + 110) & 0x40) == 0 )
          goto LABEL_41;
      }
      else
      {
        if ( (*(_BYTE *)(v2 + 110) & 0x40) == 0 )
        {
          v5 = -1073741637;
LABEL_14:
          Context[449] &= ~4u;
LABEL_15:
          RaidSetD3Cold(*((struct _DEVICE_OBJECT **)Context + 1), (Context[449] & 4) != 0);
          goto LABEL_16;
        }
        v18 = 0;
      }
      v20 = *(_QWORD *)(v2 + 4832);
      v19 = 248LL;
      if ( v20 && (*(_DWORD *)(v20 + 20) & 0x100) == 0 )
      {
        v18 = 1;
        v19 = 280LL;
      }
LABEL_41:
      Pool = RaidAllocatePool(64LL, v19, 1330667858LL, *((_QWORD *)Context + 1));
      v22 = (_QWORD *)Pool;
      if ( Pool )
      {
        v23 = *(_DWORD *)(Pool + 32);
        *(_DWORD *)(Pool + 16) = 0;
        *(_DWORD *)(Pool + 32) = v23 & 0xFFFFFFF1 | 0xA;
        *(_QWORD *)(Pool + 88) = Pool + 80;
        *(_QWORD *)(Pool + 80) = Pool + 80;
        KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 96));
        v22[1] = v22 + 21;
        *((_DWORD *)v22 + 43) = 16;
        *((_DWORD *)v22 + 42) = 1;
        *((_DWORD *)v22 + 44) = 1;
        *((_DWORD *)v22 + 48) = 1;
        *((_DWORD *)v22 + 46) = 1;
        *((_DWORD *)v22 + 47) = 32;
        *(_OWORD *)(v22 + 25) = xmmword_1C0071960;
        *((_DWORD *)v22 + 54) = 1;
        *((_DWORD *)v22 + 55) = 32;
        v22[28] = 0LL;
        v22[29] = 0LL;
        *((_DWORD *)v22 + 60) = -1;
        if ( v18 )
        {
          *((_DWORD *)v22 + 45) |= 0x100u;
          *((_DWORD *)v22 + 48) = 2;
          *((_DWORD *)v22 + 62) = 1;
          *((_DWORD *)v22 + 63) = 32;
          v22[32] = 0LL;
          v22[33] = 0LL;
          *((_DWORD *)v22 + 68) = -1;
          *((_DWORD *)v22 + 8) |= 0x1000u;
        }
        v5 = RaidRegisterForRuntimePowerManagement(
               *((_QWORD *)Context + 1),
               (int *)v22 + 42,
               (__int64)Context,
               (__int64)v22);
        if ( v5 >= 0 )
        {
          if ( *v22 )
          {
            PoFxSetComponentLatency(*v22, 0LL, -1LL);
            PoFxSetComponentResidency(*v22, 0LL, -1LL);
            v24 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 217);
            *((_QWORD *)Context + 218) = v22;
            ExReInitializeRundownProtectionCacheAware(v24);
            Context[449] |= 0x80u;
LABEL_47:
            *(_DWORD *)(*((_QWORD *)Context + 218) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*((_QWORD *)Context
                                                                                                 + 218)
                                                                                               + 32LL)) & 1;
            v25 = *((_DWORD *)Context + 455);
            v26 = *((_QWORD *)Context + 218);
            if ( v25 != -1 )
              goto LABEL_58;
            v27 = *(_DWORD **)(v26 + 8);
            if ( *v27 < 2u )
              goto LABEL_57;
            v28 = v27[3];
            if ( (v28 & 0x10) != 0 )
            {
              v25 = v27[4];
              goto LABEL_58;
            }
            if ( *v27 >= 3u && (v28 & 0x20) != 0 )
              v25 = 0;
            else
LABEL_57:
              v25 = 300000;
LABEL_58:
            *(_DWORD *)(v26 + 24) = v25;
            *(_DWORD *)(*((_QWORD *)Context + 218) + 20LL) = *(_DWORD *)(a2 + 12);
            RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12), 1);
            PoFxStartDevicePowerManagement(**((_QWORD **)Context + 218));
            v30 = *((_QWORD *)Context + 218);
            if ( (*(_DWORD *)(v30 + 32) & 0x100) != 0 )
            {
              LOBYTE(v29) = 1;
              PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v29, v30 + 104, Context);
              PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &GUID_ACDC_POWER_SOURCE,
                (PPOWER_SETTING_CALLBACK)RaidUnitPowerSettingCallback,
                Context,
                (PVOID *)(*((_QWORD *)Context + 218) + 112LL));
              *(_QWORD *)(*((_QWORD *)Context + 218) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, Context, 0LL);
              *(_QWORD *)(*((_QWORD *)Context + 218) + 128LL) = ExAllocateTimer(
                                                                  RaidUnitEndMaintenanceTime,
                                                                  Context,
                                                                  0LL);
            }
            goto LABEL_15;
          }
          v5 = -1073741823;
        }
        ExFreePoolWithTag(v22, 0x4F506152u);
      }
      else
      {
        v5 = -1073741670;
      }
LABEL_26:
      if ( v5 < 0 )
        goto LABEL_14;
      goto LABEL_47;
    }
    goto LABEL_61;
  }
  v14 = *((_QWORD *)Context + 218);
  v15 = *(_DWORD *)(a2 + 12);
  if ( v15 != *(_DWORD *)(v14 + 20) )
  {
    *(_DWORD *)(v14 + 20) = v15;
    if ( _bittest((const signed __int32 *)(*((_QWORD *)Context + 218) + 32LL), 8u) )
      RaidUnitAdaptiveIdleTimeout((__int64)Context);
    else
      RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12), 0);
  }
  v16 = *((_QWORD *)Context + 218);
  v17 = *(_DWORD *)(a2 + 8) & 1;
  if ( v17 != (*(_DWORD *)(v16 + 32) & 1) )
    *(_DWORD *)(v16 + 32) = v17 | *(_DWORD *)(v16 + 32) & 0xFFFFFFFE;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 217));
LABEL_16:
  if ( StorEtwLoggingEnabled )
  {
    v7 = *((_QWORD *)Context + 3);
    v8 = 0LL;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( v7 )
      v34 = *(_DWORD *)(v7 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v31 = (__int64 *)*((_QWORD *)Context + 218);
      v8 = *v31;
      v10 = v31[4] & 1;
      v11 = *((_DWORD *)v31 + 5);
      v9 = *(_DWORD *)(v31[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 217));
    }
    if ( (byte_1C00799E2 & 0x10) != 0 )
    {
      v33 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v34;
      McTemplateK0pquuudttqqttq_EtwWriteTransfer(
        *(_DWORD *)(a2 + 8) & 1,
        v33,
        v12,
        v8,
        Handle,
        Context[96],
        Context[97],
        Context[98],
        v5,
        v33,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v9,
        (Context[449] >> 2) & 1,
        v10,
        v11);
    }
  }
  if ( !v35 )
    *((_DWORD *)Context + 114) &= ~1u;
  return (unsigned int)v5;
}
