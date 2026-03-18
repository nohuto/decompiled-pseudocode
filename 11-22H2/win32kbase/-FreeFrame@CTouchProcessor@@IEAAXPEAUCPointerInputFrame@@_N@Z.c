/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01C3308
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D49B8 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D86C8 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     HMAssignmentUnlockWorker @ 0x1C0056D3C (HMAssignmentUnlockWorker.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0079E14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C00E3F38 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01C3EE4 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01C3F44 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01CCB18 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2, char a3)
{
  __int64 v6; // rcx
  CTouchProcessor *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  struct CPointerInfoNode *v16; // rdx
  struct CPointerQFrame *v17; // rdx
  CInpLockGuard *v18[13]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+8h] BYREF
  int v20; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v18,
    (struct CInpLockGuard *)(this + 4),
    0LL);
  if ( this[5] != KeGetCurrentThread() )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8179);
  }
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v6, a2) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8201);
  }
  if ( (unsigned int)dword_1C0289810 > 5 && tlgKeywordOn((__int64)&dword_1C0289810, 32LL) )
  {
    v20 = *((_DWORD *)a2 + 10);
    v19 = *((_QWORD *)a2 + 9);
    v21 = *((_QWORD *)a2 + 27);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1C0289810,
      (int)&unk_1C025B652,
      v8,
      v9,
      (__int64)&v21,
      (__int64)&v19,
      (__int64)&v20);
  }
  if ( !a3 )
  {
    if ( *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 12) )
    {
      v20 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8206);
    }
    v10 = (_QWORD *)((char *)a2 + 8);
    v11 = *((_QWORD *)a2 + 1);
    if ( *(struct CPointerInputFrame **)(v11 + 8) != (struct CPointerInputFrame *)((char *)a2 + 8) )
      goto LABEL_21;
    v12 = (_QWORD *)*((_QWORD *)a2 + 2);
    if ( (_QWORD *)*v12 != v10
      || (*v12 = v11,
          *(_QWORD *)(v11 + 8) = v12,
          *((_QWORD *)a2 + 2) = (char *)a2 + 8,
          *v10 = v10,
          v13 = (_QWORD *)((char *)a2 + 24),
          v14 = *((_QWORD *)a2 + 3),
          *(struct CPointerInputFrame **)(v14 + 8) != (struct CPointerInputFrame *)((char *)a2 + 24))
      || (v7 = (CTouchProcessor *)*((_QWORD *)a2 + 4), *(_QWORD **)v7 != v13) )
    {
LABEL_21:
      __fastfail(3u);
    }
    *(_QWORD *)v7 = v14;
    *(_QWORD *)(v14 + 8) = v7;
    *((_QWORD *)a2 + 4) = (char *)a2 + 24;
    *v13 = v13;
  }
  v15 = *((_DWORD *)a2 + 57);
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (v15 & 0x40) != 0 )
    {
      if ( !*((_DWORD *)this + 42) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8227);
      }
      --*((_DWORD *)this + 42);
    }
    else
    {
      if ( !*((_DWORD *)this + 43) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8232);
      }
      --*((_DWORD *)this + 43);
    }
  }
  v16 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  if ( v16 )
    CTouchProcessor::FreePointerInfoList(v7, v16, *((_DWORD *)a2 + 12));
  v17 = (struct CPointerQFrame *)*((_QWORD *)a2 + 31);
  if ( v17 )
    CTouchProcessor::FreePointerQFrameList(v7, v17, *((_DWORD *)a2 + 12));
  HMAssignmentUnlockWorker((__int64 *)a2 + 32);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)a2 + 29));
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a2);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v18);
}
