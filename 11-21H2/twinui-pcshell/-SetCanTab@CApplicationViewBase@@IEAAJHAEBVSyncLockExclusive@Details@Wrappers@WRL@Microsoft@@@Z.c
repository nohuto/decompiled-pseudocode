/*
 * XREFs of ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1803152A0
 * Callers:
 *     ?RefreshCanTab@CApplicationViewBase@@UEAAJXZ @ 0x180315150 (-RefreshCanTab@CApplicationViewBase@@UEAAJXZ.c)
 *     ?SetCanTab@CApplicationViewBase@@UEAAJH@Z @ 0x180315390 (-SetCanTab@CApplicationViewBase@@UEAAJH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_6fdf3937fe5b77ad66258336b78d36c4___ @ 0x1800ED29C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_6fdf3937fe5b77ad66258.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ED490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?get@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVApplicationViewTelemetry@ApplicationViewManagement@@P6AXXZ@Z @ 0x18014A358 (-get@-$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVAp.c)
 */

__int64 __fastcall CApplicationViewBase::SetCanTab(
        CApplicationViewBase *this,
        int a2,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a3)
{
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // rcx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF
  const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v4 = 2 - (a2 != 0);
  v5 = *((_DWORD *)this + 33);
  v6 = (_DWORD *)wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::get(
                   (__int64)this,
                   _lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
  {
    v12 = v4;
    LODWORD(v13) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v6,
      byte_1806A16D8,
      0LL,
      v7,
      (__int64)&v13,
      (__int64)&v12);
  }
  if ( v5 != v4 )
  {
    *((_DWORD *)this + 33) = v4;
    if ( v5 )
    {
      v13 = 0LL;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_6fdf3937fe5b77ad66258336b78d36c4___((__int64 *)&v13);
      v8 = CApplicationViewManager::RaiseApplicationViewChanged(
             (__int64)v13 + 136,
             (int (__fastcall ***)(_QWORD, GUID *, WINBOOL *))this,
             0x14u,
             0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x16E,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
          (const char *)(unsigned int)v8);
      v9 = (__int64)v13;
      if ( v13 )
      {
        v13 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v9);
      }
    }
  }
  return 0LL;
}
