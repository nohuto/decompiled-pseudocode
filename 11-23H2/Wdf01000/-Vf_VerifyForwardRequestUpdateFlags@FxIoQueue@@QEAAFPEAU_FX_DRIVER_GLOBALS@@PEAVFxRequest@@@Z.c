/*
 * XREFs of ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BB51C
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0003FF0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C006400C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *Request,
        FxRequest *FxDriverGlobals)
{
  unsigned __int16 m_VerifierFlags; // bx
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *irql; // [rsp+38h] [rbp+10h] OVERLAPPED BYREF

  irql = Request;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(FxDriverGlobals, (unsigned __int8 *)&irql, (unsigned __int8)FxDriverGlobals);
  m_VerifierFlags = FxDriverGlobals->m_VerifierFlags;
  v5 = (unsigned __int8)irql;
  FxDriverGlobals->m_VerifierFlags = m_VerifierFlags & 0xFFF2 | 4;
  FxNonPagedObject::Unlock(FxDriverGlobals, v5, v6);
  return m_VerifierFlags;
}
