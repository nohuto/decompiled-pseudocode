/*
 * XREFs of ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805951F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800610EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SnapEducation_WindowSnapped@CSnapComponentTelemetry@@SAXXZ @ 0x180595D18 (-SnapEducation_WindowSnapped@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x180596B24 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180597E3C (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1805ACD48 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1805EFA6C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ?IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFBD4 (-IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CShellSnapComponent::OnWindowArrangementEvent(
        CShellSnapComponent *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs *a3)
{
  _DWORD *v5; // rcx
  int v6; // ecx
  bool v7; // si
  __int64 v8; // r9
  HWND v9; // r15
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  struct IApplicationView *v13; // rdx
  unsigned int v14; // esi
  struct IImmersiveApplication *ApplicationFromView; // rax
  struct IImmersiveApplication *v17; // rsi
  HMONITOR v18; // r9
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64, HMONITOR, __int64 *); // rax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rdx
  struct IApplicationView *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // esi
  int v28; // eax
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  SnapLayoutProvider *v36; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v38; // [rsp+70h] [rbp+30h] BYREF
  ApplicationViewHelpers *v39; // [rsp+80h] [rbp+40h] BYREF
  struct IImmersiveApplication *v40; // [rsp+88h] [rbp+48h] BYREF

  v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    LODWORD(v38) = *((_DWORD *)a3 + 4);
    LODWORD(v39) = *((_DWORD *)a3 + 2);
    v40 = *(struct IImmersiveApplication **)a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_1806C8E14,
      0LL,
      0LL,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38);
  }
  v6 = *((_DWORD *)a3 + 4);
  v7 = (unsigned int)(v6 + 1) > 1 && (v6 & 2) == 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 30);
  v9 = (HWND)*(unsigned int *)a3;
  if ( *((_DWORD *)a3 + 2) != 1 )
    goto LABEL_39;
  if ( v7 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 32LL))(*((_QWORD *)this + 31)) )
  {
    v39 = 0LL;
    v10 = (__int64 *)*((_QWORD *)this + 29);
    v11 = *v10;
    v39 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, ApplicationViewHelpers **))(v11 + 48))(
            v10,
            (unsigned int)v9,
            &v39);
    v14 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x567,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v12);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v39);
      return v14;
    }
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(v39, v13);
    v17 = ApplicationFromView;
    v40 = ApplicationFromView;
    if ( ApplicationFromView )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)ApplicationFromView + 8LL))(ApplicationFromView);
    if ( !v17 )
      goto LABEL_22;
    v18 = MonitorFromWindow(v9, 0);
    if ( !v18 )
      goto LABEL_22;
    v38 = 0LL;
    v19 = *((_QWORD *)this + 28);
    v20 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v19 + 48LL);
    v38 = 0LL;
    v21 = v20(v19, v18, &v38);
    v22 = retaddr;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, _QWORD))(*(_QWORD *)v17 + 224LL))(
              v17,
              v38,
              0LL);
      v22 = retaddr;
      if ( v21 >= 0 )
      {
LABEL_21:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v38);
LABEL_22:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v40);
        if ( !ApplicationViewHelpers::IsTopMostView(v39, v24) )
        {
          if ( (*((_WORD *)a3 + 5) & 0x1F0) == 0x10 )
          {
            v27 = 1;
          }
          else
          {
            v27 = 0;
            if ( (*((_WORD *)a3 + 5) & 0x1F0) == 0x40 )
              v27 = 2;
          }
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
            1u,
            v25,
            v26);
          LOBYTE(v38) = 0;
          v28 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 73) + 64LL))(
                  *((_QWORD *)this + 73),
                  &v38);
          if ( v28 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x588,
              (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v28);
          if ( !(_BYTE)v38 )
          {
            v29 = (*(__int64 (__fastcall **)(_QWORD, ApplicationViewHelpers *, _QWORD, _QWORD))(**((_QWORD **)this + 32)
                                                                                              + 32LL))(
                    *((_QWORD *)this + 32),
                    v39,
                    *((unsigned int *)this + 286),
                    v27);
            if ( v29 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x58B,
                (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                (const char *)(unsigned int)v29);
          }
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v39);
        goto LABEL_33;
      }
      v23 = 1398LL;
    }
    else
    {
      v23 = 1396LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v22,
      (void *)v23,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_21;
  }
LABEL_33:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl,
    1u,
    0,
    v8);
  if ( *((_DWORD *)this + 306) != -1 )
  {
    CSnapComponentTelemetry::SnapEducation_WindowSnapped();
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 29) + 104LL))(
            *((_QWORD *)this + 29),
            *((unsigned int *)this + 306));
    if ( v32 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x59A,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v32);
    *((_DWORD *)this + 306) = -1;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
    1u,
    v30,
    v31);
  if ( **((_DWORD **)this + 163) == 1 )
    CSnapComponentTelemetry::OnSnappingCancelled::Stop((CShellSnapComponent *)((char *)this + 1256), 0);
LABEL_39:
  v33 = CShellSnapComponent::_SendAppSnapUnsnapEvent(this, v9, *((unsigned int *)a3 + 2));
  if ( v33 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5A6,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v33);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    v34,
    v35);
  v36 = (SnapLayoutProvider *)*((_QWORD *)this + 72);
  if ( v36 )
    SnapLayoutProvider::Reset(v36);
  return 0LL;
}
