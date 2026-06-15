/*
 * XREFs of ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x18000FF20
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF__guid_ @ 0x1800D0F5C (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParamInternal(
        CAudioSession *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  struct _GUID *v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = (struct _GUID *)((char *)this + 204);
  v6 = *(_QWORD *)((char *)this + 204) - *(_QWORD *)&a2->Data1;
  if ( !v6 )
    v6 = *(_QWORD *)((char *)this + 212) - *(_QWORD *)a2->Data4;
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, a2);
    }
    v7 = *((_QWORD *)this - 1);
    *v3 = *a2;
    (*(void (__fastcall **)(char *))(v7 + 8))((char *)this - 8);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 424));
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 16LL))((char *)this - 8);
  }
  return 0LL;
}
