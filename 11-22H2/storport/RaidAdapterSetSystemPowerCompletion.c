/*
 * XREFs of RaidAdapterSetSystemPowerCompletion @ 0x1C00137A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterSetSystemPowerCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  POWER_STATE v7; // ebx
  REQUEST_POWER_COMPLETE *v8; // r9
  void *Context; // r8
  NTSTATUS v10; // esi
  bool v11; // cl
  char v12; // r14

  v2 = *(_QWORD *)(a1 + 64);
  v4 = 1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids, v2, a2);
  }
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(int *)(v5 + 24);
  v7.SystemState = (_SYSTEM_POWER_STATE)DeviceStateTable[v6];
  if ( *(_DWORD *)(v2 + 304) < (int)v6 )
  {
    v4 = 0;
  }
  else if ( *(_QWORD *)(v2 + 4896) )
  {
    v8 = StorPortAdapterPoFxD0Completion;
    Context = (void *)v2;
    goto LABEL_6;
  }
  v8 = (REQUEST_POWER_COMPLETE *)&RaidAdapterSetDevicePowerCompletionRoutine;
  Context = (void *)a2;
LABEL_6:
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  v10 = *(_DWORD *)(a2 + 48);
  if ( v10 >= 0 )
  {
    v11 = (_DWORD)v6 != 1 && *(_DWORD *)(v2 + 304) < (int)v6;
    v12 = 2;
    *(_DWORD *)(v2 + 312) = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
    *(_BYTE *)(v2 + 316) = v11;
    *(_DWORD *)(v2 + 304) = v6;
    v10 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(v2 + 8), 2u, v7, v8, Context, 0LL);
    if ( v10 == 259 )
    {
      if ( v7.SystemState != PowerSystemWorking )
        v12 = 4;
      *(_BYTE *)(v2 + 107) |= v12;
      v10 = 0;
    }
  }
  if ( v4 || v10 < 0 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 296));
  else
    v10 = -1073741802;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 44LL, &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids, v2, a2, v10);
  }
  return (unsigned int)v10;
}
