/*
 * XREFs of ?OnControlCenterShowPendingTimerTick@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804204AC
 * Callers:
 *     ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180143E30 (-OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180071C60 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180144240 (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnControlCenterShowPendingTimerTick(struct _TP_TIMER **this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r9
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<ControlCenterLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 0x400000000000LL) )
  {
    v10 = 0x1000000LL;
    v9 = 10000;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v3,
      byte_18084AAD7,
      0LL,
      v4,
      (__int64)&v9,
      (__int64)&v10);
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 80,
    0LL);
  v5 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)(this + 4), 0LL, 0);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31C,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
