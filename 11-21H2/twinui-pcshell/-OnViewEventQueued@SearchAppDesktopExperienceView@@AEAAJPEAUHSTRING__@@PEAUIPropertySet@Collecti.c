/*
 * XREFs of ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039C3DC
 * Callers:
 *     ?OnViewEvent@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x18039C2C0 (-OnViewEvent@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180093AC0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x1800944A8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18035728C (--0-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180357B50 (--1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z @ 0x18035BC78 (-StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035C050 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180399B48 (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18039DDC0 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x18039DEA0 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18039E180 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SearchAppDesktopExperienceView::OnViewEventQueued(
        SearchAppDesktopExperienceView *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  unsigned int v6; // r8d
  __int64 v7; // rax
  unsigned int v8; // r8d
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r8d
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax
  unsigned int v17; // r8d
  int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // r8d
  int v21; // eax
  int v22; // ebx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rax
  unsigned int v28; // r8d
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  unsigned int v36; // r8d
  int v37; // eax
  __int64 v38; // rax
  unsigned int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // r8
  int v43[2]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int8 v44[8]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v45[24]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h]
  _QWORD v47[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  *(_QWORD *)v43 = a2;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v47,
    (__int64)"CortanaExperienceManager_OnEventQueued");
  v47[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v47,
    StringRawBuffer);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_1806696C8, v6);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v7) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 10);
    v10 = *v9;
    v11 = 0LL;
LABEL_9:
    (*(void (__fastcall **)(__int64 *, __int64))(v10 + 80))(v9, v11);
    goto LABEL_32;
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_1806696C0, v8);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v12) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 10);
    v10 = *v9;
    v11 = 1LL;
    goto LABEL_9;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_180669688, v13);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v14) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 10);
    v10 = *v9;
    v11 = 2LL;
    goto LABEL_9;
  }
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_180669680, v15);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v16) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 10);
    v10 = *v9;
    v11 = 3LL;
    goto LABEL_9;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_180669698, v17);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v19) )
  {
    v21 = SearchAppDesktopExperienceView::DismissCortanaApp(this);
    v22 = v21;
    if ( v21 >= 0 )
      goto LABEL_32;
    v23 = (unsigned int)v21;
    v24 = 843LL;
    goto LABEL_30;
  }
  v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_180669690, v20);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v25) )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, 0);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10));
    goto LABEL_32;
  }
  v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_1806696A0, v26);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v27) )
  {
    *((_BYTE *)this + 204) = 1;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
    goto LABEL_32;
  }
  v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_1806696B8, v28);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v29) )
  {
    *((_BYTE *)this + 204) = 0;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10));
    goto LABEL_32;
  }
  v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_1806696B0, v30);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v31) )
  {
LABEL_23:
    SearchAppDesktopExperienceView::ShowBorder(this, 0LL);
    goto LABEL_32;
  }
  v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_180669648, v32);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v33) )
  {
    *((_BYTE *)this + 211) = 0;
    goto LABEL_23;
  }
  v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_180669640, v34);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v35) )
  {
    v37 = SearchAppDesktopExperienceView::SetZBand(this);
    if ( v37 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3EA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v37);
    goto LABEL_32;
  }
  v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_1806696A8, v36);
  if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)v43, v38) )
  {
LABEL_32:
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v47,
      v18);
    v22 = 0;
    goto LABEL_33;
  }
  *(_QWORD *)v43 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v43);
  v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&off_180669658, v39);
  v22 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v43,
          *(_QWORD *)(v40 + 24),
          v41,
          v44);
  v46 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v43);
  if ( v22 >= 0 )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, v44[0]);
    goto LABEL_32;
  }
  v23 = (unsigned int)v22;
  v24 = 877LL;
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)v23);
LABEL_33:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v47);
  return (unsigned int)v22;
}
