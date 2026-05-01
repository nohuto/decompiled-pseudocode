/*
 * XREFs of ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180060A88
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18007A310 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180060D40 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180060D70 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180078304 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?AreVirtualDesktopsEnabled@@YA_NXZ @ 0x1800F4940 (-AreVirtualDesktopsEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert@@@details@wil@@QEAA_NXZ @ 0x18028AD64 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_Te.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskViewHost::CreateFrames(TaskViewHost *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  struct IImmersiveMonitor *v11; // rbx
  int FrameForMonitor; // eax
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-38h]
  int v16; // [rsp+30h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v17[2]; // [rsp+38h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IImmersiveMonitor *v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+98h] [rbp+38h] BYREF
  struct IImmersiveMonitor *v23; // [rsp+A0h] [rbp+40h] BYREF

  v22 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 29);
  v3 = *v2;
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 112))(v2, &v22);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 592LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
      (const char *)(unsigned int)v4,
      v14);
    goto LABEL_29;
  }
  if ( AreVirtualDesktopsEnabled() )
  {
    v7 = *((_QWORD *)this + 22);
    if ( v7 )
    {
      v23 = 0LL;
      v8 = (**(__int64 (__fastcall ***)(__int64, void *, struct IImmersiveMonitor **))v7)(
             v7,
             &winrt::impl::guid_v<IDesktopVirtualDesktopDataSource>,
             &v23);
      if ( v8 < 0 )
        winrt::throw_hresult((unsigned int)v8);
      v7 = (__int64)v23;
      v21 = v23;
    }
    else
    {
      v21 = 0LL;
    }
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x258,
        (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
        (const char *)(unsigned int)v9,
        v14);
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v21);
      goto LABEL_29;
    }
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v21);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert>::GetImpl'::`2'::impl)
    && !((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 3) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  v10 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 24LL))(v22, (char *)this + 728);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 612LL;
    goto LABEL_16;
  }
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    &v14,
    v22);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    &v16,
    &v14,
    0LL);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    &v18,
    &v14,
    v15);
  while ( 1 )
  {
    if ( v16 == v18 && v17[1] == (struct IImmersiveMonitor *)v19[1] )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v17);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v5 = 0;
      goto LABEL_29;
    }
    v11 = v17[0];
    v23 = v17[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v11 + 48LL))(
           v11,
           &v21) >= 0 )
    {
      if ( (_DWORD)v21 )
      {
        FrameForMonitor = TaskViewHost::CreateFrameForMonitor(this, v11);
        v5 = FrameForMonitor;
        if ( FrameForMonitor < 0 )
          break;
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert>::GetImpl'::`2'::impl) )
    {
      if ( (unsigned int)++v10 <= *((_DWORD *)this + 182) )
        MicrosoftTelemetryAssertTriggeredNoArgs();
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
    ++v16;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v16);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26A,
    (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
    (const char *)(unsigned int)FrameForMonitor,
    v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v17);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
LABEL_29:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  return v5;
}
