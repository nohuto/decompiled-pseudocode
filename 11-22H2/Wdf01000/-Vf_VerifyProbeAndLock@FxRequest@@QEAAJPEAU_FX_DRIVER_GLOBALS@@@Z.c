/*
 * XREFs of ?Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA5D4
 * Callers:
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0039EAC (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C003A144 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyProbeAndLock(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _IRP *m_Irp; // rax
  struct _KTHREAD *_a1; // r8

  m_Irp = this->m_Irp.m_Irp;
  _a1 = &m_Irp->Tail.Overlay.Thread->Tcb;
  if ( !_a1 || m_Irp->RequestorMode != 1 || _a1 == KeGetCurrentThread() )
    return 0LL;
  WPP_IFR_SF_qid(
    FxDriverGlobals,
    2u,
    0x10u,
    0x31u,
    WPP_FxRequest_cpp_Traceguids,
    _a1,
    (__int64)KeGetCurrentThread(),
    -1073741819);
  return 3221225477LL;
}
