/*
 * XREFs of ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180017940
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180017E30 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800165F8 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180017ADC (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180017B0C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??$as@UIDesktopVirtualDesktopDataSource@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIDesktopVirtualDesktopDataSource@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180017B94 (--$as@UIDesktopVirtualDesktopDataSource@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskViewHost::CreateFrames(TaskViewHost *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct IImmersiveMonitor *v8; // rbx
  int FrameForMonitor; // eax
  __int64 v10; // rdx
  int v11[4]; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+30h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v13[2]; // [rsp+38h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v15[8]; // [rsp+50h] [rbp-10h] BYREF
  struct IImmersiveMonitor *v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  __int64 v19; // [rsp+88h] [rbp+28h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+90h] [rbp+30h] BYREF

  v19 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 29);
  v3 = *v2;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 112))(v2, &v19);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 493LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
      (const char *)(unsigned int)v4,
      v11[0]);
    goto LABEL_10;
  }
  if ( *((_QWORD *)this + 22) )
  {
    winrt::impl::as<IDesktopVirtualDesktopDataSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v18);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
        (const char *)(unsigned int)v6,
        v11[0]);
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
      goto LABEL_10;
    }
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 24LL))(v19, (char *)this + 712);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 505LL;
    goto LABEL_18;
  }
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    v11,
    v19);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    &v12,
    v11,
    0LL);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    &v14,
    v11,
    (unsigned int)v11[2]);
  while ( 1 )
  {
    if ( v12 == v14 && v13[1] == v16 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
      v5 = 0;
      goto LABEL_10;
    }
    v8 = v13[0];
    v20 = v13[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v18) >= 0 )
    {
      if ( (_DWORD)v18 )
      {
        FrameForMonitor = TaskViewHost::CreateFrameForMonitor(this, v8);
        v5 = FrameForMonitor;
        if ( FrameForMonitor < 0 )
          break;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    ++v12;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v12);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FF,
    (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
    (const char *)(unsigned int)FrameForMonitor,
    v11[0]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
LABEL_10:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v19);
  return v5;
}
