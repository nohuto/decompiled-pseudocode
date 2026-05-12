/*
 * XREFs of RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0014160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterQuerySystemPowerCompletionRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  NTSTATUS v4; // ebx

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 35LL, &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids, v2, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_DWORD *)(a2 + 48);
  if ( v4 < 0
    || (v4 = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(v2 + 8),
               3u,
               DeviceStateTable[*(int *)(*(_QWORD *)(a2 + 184) + 24LL)],
               RaidAdapterQueryDevicePowerCompletionRoutine,
               (PVOID)a2,
               0LL),
        v4 < 0) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 296));
  }
  else
  {
    v4 = -1073741802;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 36LL, &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids, v2, a2, v4);
  }
  return (unsigned int)v4;
}
