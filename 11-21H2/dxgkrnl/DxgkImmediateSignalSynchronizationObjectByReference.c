/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C019AB18
 * Callers:
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C0003140 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C00044C4 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C000DA20 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C0078EA8 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007DDE4 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C019AB9C (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r15d
  _QWORD *v6; // rsi
  int v7; // eax
  int v8; // esi
  _QWORD *v10; // rax
  _BYTE v11[16]; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_QWORD *)a1;
  v4 = a1[2];
  v6 = (_QWORD *)(*(_QWORD *)a1 + 296LL);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 204LL) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(v2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    v10 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
    {
      WdLogSingleEntry1(1LL, 1312LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsListEmpty(&pCrossAdapterSyncObject->m_DxgSyncObjectSyncObjectListHead)",
        1312LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v10 = *(_QWORD **)(v2 + 296);
    }
    v6 = v10 - 6;
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
  v7 = DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v6, v2, a2, v4, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkImmediateSignalSynchronizationObjectByReference failed for synch object: 0x%I64x, Status: %I64x",
      (__int64)a1,
      v8,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
