/*
 * XREFs of ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800F7E18
 * Callers:
 *     ?Clear@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800F7F74 (-Clear@-$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXXZ.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800F8410 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800F8570 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LampArrayRawInputProvider::LampArrayClientListEntry *__fastcall LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(
        LampArrayRawInputProvider::LampArrayClientListEntry *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  operator delete(this);
  return this;
}
