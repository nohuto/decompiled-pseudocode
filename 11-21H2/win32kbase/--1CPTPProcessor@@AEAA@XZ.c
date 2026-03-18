/*
 * XREFs of ??1CPTPProcessor@@AEAA@XZ @ 0x1C01DD480
 * Callers:
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DF808 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C009E8D0 (--1CTouchProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPTPProcessor::~CPTPProcessor(CPTPProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 19) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 67);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  *((_DWORD *)this + 127) &= ~4u;
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 384));
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 384));
  CTouchProcessor::~CTouchProcessor(this);
}
