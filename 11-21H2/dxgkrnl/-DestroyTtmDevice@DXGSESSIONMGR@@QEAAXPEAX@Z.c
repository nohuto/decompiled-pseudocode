/*
 * XREFs of ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C03479C0
 * Callers:
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C03B5418 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0025B34 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C020B9B0 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDevice(CSERIALIZEDWORKQUEUE ***this, char *a2)
{
  __int64 v4; // r9
  bool v5; // zf
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+58h] [rbp-10h]

  if ( a2 && *((_DWORD *)a2 + 10) == 1299018836 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v9,
      (struct DXGPUSHLOCKFAST *)(a2 + 888));
    v5 = v10 == 0;
    a2[912] = 1;
    if ( !v5 )
    {
      v6 = v9;
      *(_QWORD *)(v9 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v6, 0LL);
      KeLeaveCriticalRegion();
    }
    v7 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
           this + 47,
           (void (*)(void *))DXGSESSIONMGR::DestroyTtmDeviceWorker,
           a2,
           v4);
    if ( v7 < 0 )
    {
      v8 = v7;
      WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 20), *((_QWORD *)a2 + 8), v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to queue a Serialized work item to destroy TTM device for target 0x%I64x on adapter 0x%I64x, (St"
                  "atus = 0x%I64x).",
        *((unsigned int *)a2 + 20),
        *((_QWORD *)a2 + 8),
        v8,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified invalid TTM device 0x%I64x.",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
