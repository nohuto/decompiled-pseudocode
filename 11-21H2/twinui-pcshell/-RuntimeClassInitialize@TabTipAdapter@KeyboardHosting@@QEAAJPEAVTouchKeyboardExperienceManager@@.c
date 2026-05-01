/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1800B9490
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1800B91E8 (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1800B9288 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x1800B9760 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800B9E58 (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BF254 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x180177A68 (-InternalRelease@-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall KeyboardHosting::TabTipAdapter::RuntimeClassInitialize(
        KeyboardHosting::TabTipAdapter *this,
        struct TouchKeyboardExperienceManager *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // ebx
  char *v6; // r12
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  HSTRING v10; // rbx
  int ActivationFactory; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, char *); // rdi
  __int64 v14; // rdx
  HSTRING v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, char *); // rsi
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, int (*)(void *), KeyboardHosting::TabTipAdapter *, char *); // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x85,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      a4);
  *((_QWORD *)this + 8) = a2;
  Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease((char *)this + 112);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapterPolicy,KeyboardHosting::TabTipAdapterPolicy,>((char *)this + 112);
  if ( v5 < 0 )
  {
    v22 = 138LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v6 = (char *)this + 88;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
  v5 = CoreUICreate((char *)this + 88);
  if ( v5 < 0 )
  {
    v22 = 140LL;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 9);
  v5 = CoreUIFactoryCreate((char *)this + 72);
  if ( v5 < 0 )
  {
    v22 = 141LL;
    goto LABEL_27;
  }
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    v7);
  v8 = SharedMessagePortRefPtr::Initialize((KeyboardHosting::TabTipAdapter *)((char *)this + 120));
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
  v9 = KeyboardHosting::TabTipAdapter::InitializeRemoteTabTipAdapter(this);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9);
  v26 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.UI.Internal.Text.Core.CoreKeyboardManager",
         0x31u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v10 = string;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  ActivationFactory = RoGetActivationFactory(v10, &GUID_4781e102_173f_40ee_b985_685f98a866aa, &v26);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v23 = 189LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_22;
  }
  v12 = v26;
  v13 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 3);
  ActivationFactory = v13(v12, (char *)this + 24);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v23 = 190LL;
    goto LABEL_33;
  }
  ActivationFactory = KeyboardHosting::TabTipAdapter::AddEventHandlersFromCoreKeyboardManager(this);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v23 = 191LL;
    goto LABEL_33;
  }
  LOBYTE(v14) = 1;
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 592LL))(
                        *((_QWORD *)this + 3),
                        v14,
                        0LL);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v23 = 193LL;
    goto LABEL_33;
  }
  v25 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.UI.Internal.Text.Core.CoreInputViewManager",
         0x32u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v15 = string;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  v16 = RoGetActivationFactory(v15, &GUID_6fa49ca9_046b_4d5c_b942_7dbc066f6579, &v25);
  v5 = v16;
  if ( v16 < 0 )
  {
    v24 = 199LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_21;
  }
  v17 = v25;
  v18 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 5);
  v16 = v18(v17, (char *)this + 40);
  v5 = v16;
  if ( v16 < 0 )
  {
    v24 = 200LL;
    goto LABEL_37;
  }
  v19 = *(_QWORD *)v6;
  v20 = *(__int64 (__fastcall **)(__int64, int (*)(void *), KeyboardHosting::TabTipAdapter *, char *))(**(_QWORD **)v6 + 144LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  v16 = v20(v19, KeyboardHosting::TabTipAdapter::TimerDeferredShowRequestCallback, this, (char *)this + 96);
  v5 = v16;
  if ( v16 < 0 )
  {
    v24 = 205LL;
    goto LABEL_37;
  }
  v5 = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  return (unsigned int)v5;
}
