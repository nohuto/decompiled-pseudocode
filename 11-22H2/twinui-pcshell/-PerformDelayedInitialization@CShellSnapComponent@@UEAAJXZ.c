/*
 * XREFs of ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1801389B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ @ 0x180112174 (-InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801143CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801145FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows@@@detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z @ 0x18013869C (--0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18013ABA0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIWindowManag.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UHitTestPartNotifyEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18013ACB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_18013ACB8.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UDragSizeInfoEventArgs@2345@@Foundation@Windows@@V_lambda_6ac410e79d22676e05d6f96b06aeb884_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@UDragSizeInfoEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UDragSizeInfoEventArgs@2345@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@UDragSizeInfoEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_6ac410e79d22676e05d6f96b06aeb884_@@@Z @ 0x18013C298 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@Window_ea_18013C298.c)
 *     ?SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@AEBU_GUID@@PEAPEAX@Z @ 0x180191124 (-SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEA.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@Z @ 0x1801B4B58 (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CShellSnapComponent::PerformDelayedInitialization(CShellSnapComponent *this)
{
  struct IImmersiveMonitorManager *v2; // rdi
  SnapLayoutProvider *v3; // rbx
  SnapLayoutProvider **v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  char *v7; // r13
  void *v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // edi
  _OWORD *v20; // rax
  _OWORD *v21; // rdi
  int v22; // eax
  unsigned int v23; // esi
  _OWORD *v24; // rax
  _OWORD *v25; // rsi
  int v26; // eax
  unsigned int v27; // r14d
  __int64 (__fastcall *v28)(char *, GUID *, struct IPriviledgedPositioner **); // r14
  int v29; // eax
  unsigned int v30; // r14d
  void (__fastcall *v31)(char *, GUID *, IUnknown **); // r14
  void (__fastcall *v32)(char *, GUID *, IUnknown **); // r14
  HRESULT v33; // r14d
  int v34; // eax
  unsigned int v35; // r14d
  int v36; // eax
  unsigned int v37; // r14d
  int v38; // eax
  unsigned int v39; // r14d
  int Instance; // eax
  unsigned int v41; // r14d
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  SnapLayoutHelpers *v45; // rcx
  const struct _GUID *v47; // [rsp+30h] [rbp-108h]
  IUnknown *punk; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+48h] [rbp-F0h] BYREF
  __int128 v50; // [rsp+50h] [rbp-E8h]
  _BYTE v51[24]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v52[3]; // [rsp+78h] [rbp-C0h] BYREF
  _QWORD v53[21]; // [rsp+90h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]
  SnapLayoutProvider *v55; // [rsp+140h] [rbp+8h] BYREF
  struct IPriviledgedPositioner *v56; // [rsp+148h] [rbp+10h] BYREF
  void *v57; // [rsp+150h] [rbp+18h] BYREF
  void *ppvOut; // [rsp+158h] [rbp+20h] BYREF

  LODWORD(v55) = 0;
  v2 = (struct IImmersiveMonitorManager *)*((_QWORD *)this + 21);
  v3 = (SnapLayoutProvider *)operator new(0xA0uLL);
  v55 = v3;
  SnapLayoutProvider::SnapLayoutProvider(v3, v2);
  *(_QWORD *)v3 = &SnapLayoutProvider::`vftable'{for `winrt::impl::producers_base<SnapLayoutProvider,std::tuple<IInspectable>>'};
  *((_QWORD *)v3 + 1) = &winrt::impl::heap_implements<SnapLayoutProvider>::`vftable'{for `winrt::impl::root_implements<SnapLayoutProvider,IInspectable>'};
  v55 = v3;
  v4 = (SnapLayoutProvider **)((char *)this + 536);
  if ( (SnapLayoutProvider **)((char *)this + 536) == &v55 )
  {
    if ( v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v55);
  }
  else
  {
    if ( *v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 67);
    *v4 = v3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, unsigned __int64, char *))(**((_QWORD **)this + 69) + 56LL))(
         *((_QWORD *)this + 69),
         5LL,
         &unk_1808195A0,
         ((unsigned __int64)this + 104) & -(__int64)(this != (CShellSnapComponent *)48),
         (char *)this + 560);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    *((_DWORD *)this + 278) = 138428417;
    *((_DWORD *)this + 279) = 411732504;
    *((_DWORD *)this + 280) = 843071538;
    *((_DWORD *)this + 281) = 541607966;
    *((_DWORD *)this + 282) = 1217433630;
    *((_DWORD *)this + 283) = 1217433650;
    v7 = (char *)this + 112;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 14) + 24LL))((char *)this + 112, 4LL);
    *(_QWORD *)&v50 = CShellSnapComponent::OnDragSizeInfoEvent;
    DWORD2(v50) = 0;
    *(_QWORD *)v51 = (char *)this - 48;
    *(_OWORD *)&v51[8] = v50;
    v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
      v9 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>,_lambda_6ac410e79d22676e05d6f96b06aeb884_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>,_lambda_6ac410e79d22676e05d6f96b06aeb884_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>(
             v8,
             v51);
    else
      v9 = 0LL;
    v53[12] = v9;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 31) + 128LL))(
            *((_QWORD *)this + 31),
            v9,
            (char *)this + 400);
    v13 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D2,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v10);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      return v13;
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
        1u,
        v11,
        v12);
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 24LL))((char *)this + 112, 13LL);
      v16 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),CShellSnapComponent *>(
              (int)this + 408,
              *((_QWORD *)this + 27),
              v14,
              v15,
              (__int64)this - 48);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DE,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v16);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        return v17;
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 30) + 24LL))(
                *((_QWORD *)this + 30),
                ((unsigned __int64)this + 96) & -(__int64)(this != (CShellSnapComponent *)48));
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E0,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v18);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          return v19;
        }
        else
        {
          *(_QWORD *)&v50 = CShellSnapComponent::OnWindowArrangementEvent;
          DWORD2(v50) = 0;
          *(_QWORD *)v51 = (char *)this - 48;
          *(_OWORD *)&v51[8] = v50;
          v20 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
          v21 = v20;
          if ( v20 )
          {
            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>(v20);
            v21[1] = *(_OWORD *)v51;
            *((_QWORD *)v21 + 4) = *(_QWORD *)&v51[16];
            *(_QWORD *)v21 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_bc6a996c5f9ff2cfd33224138910e618_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::`vftable';
          }
          else
          {
            v21 = 0LL;
          }
          v53[13] = v21;
          v22 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 31) + 48LL))(
                  *((_QWORD *)this + 31),
                  v21,
                  (char *)this + 320);
          v23 = v22;
          if ( v22 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E4,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v22);
            if ( v21 )
              (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            return v23;
          }
          else
          {
            *(_QWORD *)&v50 = CShellSnapComponent::OnHitTestPartNotifyEvent;
            DWORD2(v50) = 0;
            *(_QWORD *)v51 = (char *)this - 48;
            *(_OWORD *)&v51[8] = v50;
            v24 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
            v25 = v24;
            if ( v24 )
            {
              Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>>(v24);
              v25[1] = *(_OWORD *)v51;
              *((_QWORD *)v25 + 4) = *(_QWORD *)&v51[16];
              *(_QWORD *)v25 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>,_lambda_6b37e6f6ffb8617f7a72125e0299ac07_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>::`vftable';
            }
            else
            {
              v25 = 0LL;
            }
            *(_QWORD *)&v50 = v25;
            v26 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 31) + 96LL))(
                    *((_QWORD *)this + 31),
                    v25,
                    (char *)this + 328);
            v27 = v26;
            if ( v26 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1E8,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                (const char *)(unsigned int)v26);
              if ( v25 )
                (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v25 + 16LL))(v25);
              if ( v21 )
                (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
              if ( v9 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
              return v27;
            }
            else
            {
              v56 = 0LL;
              v28 = (__int64 (__fastcall *)(char *, GUID *, struct IPriviledgedPositioner **))**((_QWORD **)this - 6);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
              v29 = v28((char *)this - 48, &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6, &v56);
              v30 = v29;
              if ( v29 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1EB,
                  (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                  (const char *)(unsigned int)v29);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
                if ( v25 )
                  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v25 + 16LL))(v25);
                if ( v21 )
                  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
                if ( v9 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                return v30;
              }
              else
              {
                ppvOut = 0LL;
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
                punk = 0LL;
                LODWORD(v55) = 5;
                v31 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 5) + 32LL);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
                v31((char *)this - 40, &GUID_00000000_0000_0000_c000_000000000046, &punk);
                IUnknown_QueryService(
                  punk,
                  (const GUID *const)&SID_VirtualDesktopManager,
                  &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
                  &ppvOut);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
                v57 = 0LL;
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
                punk = 0LL;
                LODWORD(v55) = 19;
                v32 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 5) + 32LL);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
                v32((char *)this - 40, &GUID_00000000_0000_0000_c000_000000000046, &punk);
                v33 = IUnknown_QueryService(
                        punk,
                        &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                        &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                        &v57);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
                if ( v33 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1F1,
                    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                    (const char *)(unsigned int)v33);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
                  if ( v25 )
                    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v25 + 16LL))(v25);
                  if ( v21 )
                    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
                  if ( v9 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                  return (unsigned int)v33;
                }
                else
                {
                  v49 = 0LL;
                  v34 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(
                          *((_QWORD *)this + 25),
                          &GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36,
                          &v49);
                  v35 = v34;
                  if ( v34 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x1F4,
                      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                      (const char *)(unsigned int)v34);
                    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
                    if ( v25 )
                      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v25 + 16LL))(v25);
                    if ( v21 )
                      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
                    if ( v9 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                    return v35;
                  }
                  else
                  {
                    v53[0] = *((_QWORD *)this + 26);
                    v53[1] = *((_QWORD *)this + 21);
                    v53[2] = *((_QWORD *)this + 22);
                    v53[3] = v57;
                    v53[4] = v56;
                    v53[5] = *((_QWORD *)this + 46);
                    v53[6] = ppvOut;
                    v53[7] = *((_QWORD *)this + 27);
                    v53[8] = *((_QWORD *)this + 29);
                    v53[9] = *((_QWORD *)this + 28);
                    v53[10] = *((_QWORD *)this + 31);
                    v53[11] = (char *)this + 80;
                    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v49 + 24LL))(v49, v53);
                    v37 = v36;
                    if ( v36 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x204,
                        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                        (const char *)(unsigned int)v36);
                      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
                      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
                      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
                      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
                      if ( v25 )
                        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v25 + 16LL))(v25);
                      if ( v21 )
                        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
                      if ( v9 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                      return v37;
                    }
                    else
                    {
                      v52[0] = *((_QWORD *)this + 22);
                      v52[1] = *((_QWORD *)this + 21);
                      v52[2] = *((_QWORD *)this + 27);
                      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 32) + 32LL))(
                              *((_QWORD *)this + 32),
                              v52);
                      v39 = v38;
                      if ( v38 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x20C,
                          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                          (const char *)(unsigned int)v38);
                        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
                        if ( v25 )
                          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v25 + 16LL))(v25);
                        if ( v21 )
                          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
                        if ( v9 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                        return v39;
                      }
                      else
                      {
                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 24);
                        Instance = SnapHotkeyHandler_CreateInstance(
                                     v56,
                                     *((struct ISnapAssistController **)this + 25),
                                     *((struct IImmersiveMonitorManager **)this + 21),
                                     *((struct IApplicationViewCollection **)this + 22),
                                     *((struct IImmersiveSettingsCache **)this + 27),
                                     *((struct ITabletModeController **)this + 28),
                                     v47,
                                     (void **)this + 24);
                        v41 = Instance;
                        if ( Instance < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x215,
                            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                            (const char *)(unsigned int)Instance);
                          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
                          if ( v25 )
                            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v25 + 16LL))(v25);
                          if ( v21 )
                            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
                          if ( v9 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                          return v41;
                        }
                        else
                        {
                          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 24LL))((char *)this + 112, 11LL);
                          wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows>::ReportUsage(
                            `wil::Feature<__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows>::GetImpl'::`2'::impl,
                            1u,
                            v42,
                            v43);
                          SnapLayoutHelpers::InitializeSnapQuadrantsPolicy(v45, v44);
                          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
                          if ( v25 )
                            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v25 + 16LL))(v25);
                          if ( v21 )
                            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
                          if ( v9 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                          return 0LL;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
