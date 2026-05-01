/*
 * XREFs of ?s_GetNotifierCallbackList@CImmersiveApp@@CAJPEAUIUnknown@@AEBU_GUID@@PEAPEAUIObjectArray@@@Z @ 0x180028068
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800282C0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::s_GetNotifierCallbackList(
        struct IUnknown *a1,
        const struct _GUID *a2,
        struct IObjectArray **a3)
{
  int v5; // ebx
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  v5 = IAMPrivate_QueryObject(
         a1,
         (const struct _GUID *)&SID_ImmersiveApplicationListeners,
         &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, struct IObjectArray **))(*(_QWORD *)v7 + 24LL))(v7, a3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  return (unsigned int)v5;
}
