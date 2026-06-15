/*
 * XREFs of ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180008110
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180008190 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::AddSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, a2);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)a2 + 8LL))(a2);
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 432));
  return 0LL;
}
