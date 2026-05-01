/*
 * XREFs of ?v_ShutdownServices@CApplicationViewManager@@UEAAJPEAUIProfferService@@@Z @ 0x18017CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ED400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::v_ShutdownServices(
        CApplicationViewManager *this,
        struct IProfferService *a2)
{
  int v2; // eax
  volatile signed __int32 *v3; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IProfferService *))(**((_QWORD **)this + 82) + 48LL))(
         *((_QWORD *)this + 82),
         a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
  AcquireSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v3 = (volatile signed __int32 *)GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals = 0LL;
  ReleaseSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::Release(v3);
  return 0LL;
}
