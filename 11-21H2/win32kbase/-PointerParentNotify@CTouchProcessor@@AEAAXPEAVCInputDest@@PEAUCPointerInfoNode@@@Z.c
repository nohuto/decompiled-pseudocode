/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01CF2B8
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01CE784 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C0209FA4 (ApiSetEditionPointerParentNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(struct _KTHREAD **this, struct CInputDest *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _OWORD v19[7]; // [rsp+28h] [rbp-89h] BYREF
  PERESOURCE *v20[6]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v21[64]; // [rsp+C8h] [rbp+17h] BYREF

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v21, a2, v11);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v20, this + 4, a3[2]);
  v12 = a3[2];
  v13 = *((_OWORD *)a2 + 1);
  v19[0] = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 2);
  v19[1] = v13;
  v15 = *((_OWORD *)a2 + 3);
  v19[2] = v14;
  v16 = *((_OWORD *)a2 + 4);
  v19[3] = v15;
  v17 = *((_OWORD *)a2 + 5);
  v19[4] = v16;
  v18 = *((_OWORD *)a2 + 6);
  v19[5] = v17;
  v19[6] = v18;
  ApiSetEditionPointerParentNotify(v19, a3, v12);
  CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v20);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v21);
}
