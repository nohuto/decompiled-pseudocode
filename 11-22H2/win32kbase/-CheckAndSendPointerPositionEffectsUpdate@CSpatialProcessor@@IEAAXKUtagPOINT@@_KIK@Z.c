/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C01F2568
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0055BE0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D95F4 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ApiSetAddMagnificationOutputTransform @ 0x1C005880C (ApiSetAddMagnificationOutputTransform.c)
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x1C01F2688 (-CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  PKDPC BufferChainingDpc; // rsi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  int v12; // eax
  __int64 v13; // r9
  _DWORD v14[104]; // [rsp+20h] [rbp-1B8h] BYREF

  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
  LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine;
  ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)BufferChainingDpc == 2 )
  {
    v12 = *((_DWORD *)this + 6);
    if ( v12 == a2
      && (v12 != 2 || *((_DWORD *)this + 7) == a5)
      && CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(this, a4) )
    {
      memset(v14, 0, 0x198uLL);
      v14[6] = a6;
      v14[0] = 1;
      v14[2] = a2;
      *(struct tagPOINT *)&v14[3] = a3;
      v14[5] = a5;
      ApiSetAddMagnificationOutputTransform((__int64)&v14[3]);
      SendMessageTo(4LL, (__int64)v14, 408LL, v13);
    }
  }
}
