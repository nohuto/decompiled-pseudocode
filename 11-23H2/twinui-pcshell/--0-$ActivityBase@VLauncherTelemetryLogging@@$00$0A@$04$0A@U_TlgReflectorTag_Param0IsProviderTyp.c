/*
 * XREFs of ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BC1B8
 * Callers:
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800BC0C0 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ??$?0$$V@PerformDelayedInitialization@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800F3A90 (--$-0$$V@PerformDelayedInitialization@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 *     ??$?0$$V@UnsubscribeFromServices@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800F57B4 (--$-0$$V@UnsubscribeFromServices@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@SubscribeToServices@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180105328 (--$-0$$V@SubscribeToServices@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@CreateHoldingTankWindow@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180503128 (--$-0$$V@CreateHoldingTankWindow@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@DestroyHoldingTankWindow@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805031D8 (--$-0$$V@DestroyHoldingTankWindow@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rcx

  *(_QWORD *)a1 = &wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  v3 = a1 + 56;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  v4 = (_QWORD *)(a1 + 136);
  v4[19] = 0LL;
  v4[20] = 0LL;
  memset_0(v4, 0, 0x98uLL);
  *(_QWORD *)(v3 + 248) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  return a1;
}
