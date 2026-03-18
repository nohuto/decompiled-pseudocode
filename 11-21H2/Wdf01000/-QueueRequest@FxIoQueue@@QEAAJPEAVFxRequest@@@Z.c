/*
 * XREFs of ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0008700
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007B50 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0010358 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0082B70 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000A8B0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0063FCC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0082384 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequest(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxRequest *v4; // rdi
  unsigned __int8 v6; // si
  unsigned __int8 v7; // r8
  _FX_IO_QUEUE_STATE m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxVerifierLock *v11; // rcx
  _FX_DRIVER_GLOBALS *v12; // r11
  const void *globals; // r10
  const char *_a5; // r8
  const void *_a3; // rdx
  const void *v16; // rbp
  const void *v17; // rdx
  unsigned __int8 v18; // r8
  _FX_DRIVER_GLOBALS *v19; // rdx
  unsigned __int8 v20; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *Request; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+18h] BYREF

  Request = pRequest;
  m_ObjectFlags = this->m_ObjectFlags;
  v4 = pRequest;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v11 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v11, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v6;
  }
  if ( v4->m_Reserved )
    FxObject::AddRef(v4, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_QueueState = this->m_QueueState;
  if ( (m_QueueState & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v16 = 0LL;
      v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v17 = 0LL;
      if ( v4->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v16, v17);
    }
    if ( v4->m_Globals->FxVerifierIO )
    {
      PreviousIrql = 0;
      FxNonPagedObject::Lock(v4, &PreviousIrql, v7);
      v19 = v4->m_Globals;
      if ( v19->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted(v4, v19);
      FxNonPagedObject::Unlock(v4, PreviousIrql, v18);
    }
    v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v4->m_Reserved )
    {
      if ( this->m_Dispatching )
      {
        FxIoQueue::InsertNewRequestLocked(this, &Request, irql);
        FxNonPagedObject::Unlock(this, irql, v20);
        return 259LL;
      }
      v4 = Request;
      v6 = irql;
    }
    FxIoQueue::DispatchEvents(this, v6, v4);
    return 259LL;
  }
  v12 = this->m_Globals;
  if ( v12->FxVerboseOn )
  {
    if ( v4->m_ObjectSize )
      globals = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    _a5 = "power stopping (Drain) in progress,";
    if ( (m_QueueState & 0x10000) == 0 )
      _a5 = a5;
    _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qLsqd(v12, 5u, (unsigned int)_a5, 0x29u, traceGuid, _a3, this->m_QueueState, _a5, globals, -1073741436);
  }
  FxNonPagedObject::Unlock(this, v6, v7);
  v4->m_Irp.m_Irp->IoStatus.Information = 0LL;
  FxRequest::Complete(v4, -1073741436);
  v4->Release(v4, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  return 3221225860LL;
}
