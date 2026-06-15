/*
 * XREFs of ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18003D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtrBase@UISessionInternalEvents@@@ATL@@IEAA@PEAUISessionInternalEvents@@@Z @ 0x18003D2D0 (--0-$CComPtrBase@UISessionInternalEvents@@@ATL@@IEAA@PEAUISessionInternalEvents@@@Z.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18003D4A4 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::AddSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  char v5; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, a2);
  }
  ATL::CComPtrBase<ISessionInternalEvents>::CComPtrBase<ISessionInternalEvents>(&v5, a2);
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 432));
  return 0LL;
}
