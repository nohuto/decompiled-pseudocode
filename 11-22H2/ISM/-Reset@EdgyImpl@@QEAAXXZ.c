/*
 * XREFs of ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801DA2C4
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801D5DD0 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801D8D8C (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1801D9510 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 *     ?StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D9910 (-StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@.c)
 *     ??1EdgyImpl@@QEAA@XZ @ 0x1801D9C8C (--1EdgyImpl@@QEAA@XZ.c)
 *     ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x1801DA16C (-OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z @ 0x1801D6DC8 (--_G-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801D6E38 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

void __fastcall EdgyImpl::Reset(EdgyImpl *this)
{
  CandidateIdentity *v2; // rcx

  v2 = (CandidateIdentity *)*((_QWORD *)this + 1);
  if ( v2 )
    CandidateIdentity::`scalar deleting destructor'(v2, 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( *(_QWORD *)this )
  {
    std::vector<CandidateIdentity>::`scalar deleting destructor'(*(CandidateIdentity ***)this);
    *(_QWORD *)this = 0LL;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 4) = 0;
}
