/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C0352D3C
 * Callers:
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C000E1B0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000E864 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C007E3DC (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C007E930 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C008459C (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0351614 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi

  v3 = DXGSYNCOBJECT::SignalFence(*(_QWORD *)a1, a2, *(_DWORD *)(a1 + 8), 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkImmediateSignalSynchronizationObjectByReference failed for synch object: 0x%I64x, Status: %I64x",
      a1,
      v4,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v4;
}
