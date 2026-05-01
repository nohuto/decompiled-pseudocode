/*
 * XREFs of ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547810
 * Callers:
 *     ?RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805476A0 (-RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180029F94 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ACAC8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801895D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     wil::details::ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___::_ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___ @ 0x1801B5548 (wil--details--ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___--_ScopeExitFn__lambda_a242.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIObjectArray@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIObjectArray@@@Z @ 0x1805442A0 (--0-$com_ptr_t@UIObjectArray@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180544440 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$all_ea_180544440.c)
 *     ??1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180544934 (--1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z @ 0x180545B6C (-GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z.c)
 *     ?StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180548760 (-StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x180548DF8 (-Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualD.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x18054C5F4 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CVirtualDesktopManager::RemoveDesktopInternal(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  int updated; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // r15
  struct IObjectArray *MonitorsToNotify; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // esi
  __int64 v19; // rax
  int v20; // eax
  __int64 **v21; // rax
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  _QWORD *CurrentDesktopCollection; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  struct IUnknown *v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  struct IVirtualDesktop *v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+68h] [rbp-98h] BYREF
  __int128 v37; // [rsp+78h] [rbp-88h]
  __int64 *v38[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v40; // [rsp+C0h] [rbp-40h]
  _QWORD v41[40]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v29 = a2;
  v31 = a3;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v41,
    (__int64)"VirtualDesktopDestroyedActivity");
  v41[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v41);
  v4 = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
         (CVirtualDesktopManager *)((char *)this - 8),
         (struct IVirtualDesktop *)v29,
         v31);
  updated = v4;
  if ( v4 >= 0 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 12);
    if ( !v8 )
    {
      updated = -2147417848;
      v6 = 2147549448LL;
      v7 = 843LL;
      goto LABEL_5;
    }
    v33 = 0LL;
    v9 = *v8;
    v33 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v9 + 24))(v8, &v33);
    updated = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34E,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_39:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v33);
      goto LABEL_40;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
      0,
      v11,
      v12);
    v13 = (unsigned int)SHIsSameObject(v29, *((struct IUnknown **)this + 30)) != 0;
    MonitorsToNotify = CVirtualDesktopManager::GetMonitorsToNotify((CVirtualDesktopManager *)((char *)this - 8), 0LL);
    wil::com_ptr_t<IObjectArray,wil::err_returncode_policy>::com_ptr_t<IObjectArray,wil::err_returncode_policy>(
      &v34,
      (__int64)MonitorsToNotify);
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 14)
                                                                                                  + 32LL))(
            *((_QWORD *)this + 14),
            v34,
            v29,
            v31);
    updated = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x366,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_38:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v34);
      goto LABEL_39;
    }
    *(_QWORD *)&v36 = (char *)this - 8;
    *((_QWORD *)&v36 + 1) = &v34;
    *(_QWORD *)&v37 = &v29;
    *((_QWORD *)&v37 + 1) = &v31;
    v39[0] = v36;
    v39[1] = v37;
    v40 = 1;
    v16 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v33 + 24))(v33, &v32);
    updated = v16;
    if ( v16 >= 0 )
    {
      v18 = 0;
      if ( v32 )
      {
        while ( 1 )
        {
          v30 = 0LL;
          v19 = *v33;
          v30 = 0LL;
          v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v19 + 32))(
                  v33,
                  v18,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  &v30);
          updated = v20;
          if ( v20 < 0 )
            break;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, struct IUnknown *))(**((_QWORD **)this + 13) + 32LL))(
                 *((_QWORD *)this + 13),
                 v30,
                 v29) )
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 13) + 40LL))(
                    *((_QWORD *)this + 13),
                    v30,
                    v31);
            updated = v20;
            if ( v20 < 0 )
            {
              v23 = 885LL;
              goto LABEL_27;
            }
            if ( v13 )
            {
              wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                &v35,
                (__int64)v31);
              v38[0] = &v35;
              v38[1] = (__int64 *)&v36;
              v21 = std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
                      (__int64 **)&v36,
                      v38);
              updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, v30, v21);
              `eh vector destructor iterator'(
                (char *)&v35,
                8LL,
                1LL,
                (void (*)(void *))wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>);
              if ( updated < 0 )
              {
                v22 = (unsigned int)updated;
                v23 = 888LL;
                goto LABEL_28;
              }
            }
            else
            {
              CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this - 8, &v36);
              v20 = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, v30, CurrentDesktopCollection);
              updated = v20;
              if ( v20 < 0 )
              {
                v23 = 892LL;
                goto LABEL_27;
              }
            }
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
          if ( ++v18 >= v32 )
            goto LABEL_21;
        }
        v23 = 882LL;
LABEL_27:
        v22 = (unsigned int)v20;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)v22);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
        goto LABEL_37;
      }
LABEL_21:
      if ( v13 && (v16 = CVirtualDesktopManager::SwitchDesktopInternal(this, 0LL, v31), updated = v16, v16 < 0) )
      {
        v17 = 899LL;
      }
      else
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 11) + 64LL))(
                *((_QWORD *)this + 11),
                v29);
        updated = v16;
        if ( v16 >= 0 )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
            1u,
            v25,
            v26);
          v27 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 16) + 64LL))(
                  *((_QWORD *)this + 16),
                  v29);
          if ( v27 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x38C,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v27);
          v40 = 0;
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 14) + 48LL))(
                  *((_QWORD *)this + 14),
                  v34,
                  v29,
                  v31);
          updated = v16;
          if ( v16 >= 0 )
          {
            VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(
              (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v41,
              (struct IVirtualDesktop *)v29,
              v31);
            updated = 0;
            goto LABEL_37;
          }
          v17 = 912LL;
        }
        else
        {
          v17 = 902LL;
        }
      }
    }
    else
    {
      v17 = 878LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_37:
    wil::details::ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___::_ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___((__int64)v39);
    goto LABEL_38;
  }
  v6 = (unsigned int)v4;
  v7 = 842LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v6);
LABEL_40:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::~VirtualDesktopDestroyedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v41);
  return (unsigned int)updated;
}
