/*
 * XREFs of ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18047AD5C
 * Callers:
 *     ?OnViewEvent@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x18047AC40 (-OnViewEvent@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800DDC9C (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180429604 (--0-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180429EAC (--1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z @ 0x18042DC90 (-StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18042E0B4 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047846C (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18047C668 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x18047C748 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18047CA20 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SearchAppDesktopExperienceView::OnViewEventQueued(
        SearchAppDesktopExperienceView *this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  HSTRING v9; // r8
  unsigned int v10; // r8d
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  HSTRING_HEADER *v14; // rax
  HSTRING v15; // r8
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  HSTRING v18; // r8
  unsigned int v19; // r8d
  HSTRING_HEADER *v20; // rax
  HSTRING v21; // r8
  unsigned int v22; // r8d
  int v23; // edx
  HSTRING_HEADER *v24; // rax
  HSTRING v25; // r8
  unsigned int v26; // r8d
  int v27; // eax
  int v28; // ebx
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  HSTRING_HEADER *v31; // rax
  HSTRING v32; // r8
  unsigned int v33; // r8d
  void (*v34)(void); // rax
  HSTRING_HEADER *v35; // rax
  HSTRING v36; // r8
  unsigned int v37; // r8d
  HSTRING_HEADER *v38; // rax
  HSTRING v39; // r8
  unsigned int v40; // r8d
  HSTRING_HEADER *v41; // rax
  HSTRING v42; // r8
  unsigned int v43; // r8d
  HSTRING_HEADER *v44; // rax
  HSTRING v45; // r8
  unsigned int v46; // r8d
  HSTRING_HEADER *v47; // rax
  HSTRING v48; // r8
  unsigned int v49; // r8d
  int v50; // eax
  HSTRING_HEADER *v51; // rax
  HSTRING v52; // r8
  unsigned int v53; // r8d
  HSTRING_HEADER *v54; // rax
  __int64 v55; // r8
  unsigned __int8 v57[8]; // [rsp+20h] [rbp-E0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v58; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER v59; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h]
  __int64 v61[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v61,
    (__int64)"CortanaExperienceManager_OnEventQueued");
  v61[0] = (__int64)&CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v61,
    StringRawBuffer);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F45C8, v7);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v8[1].Reserved.Reserved1, v9) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 10);
    v12 = *v11;
    v13 = 0LL;
LABEL_9:
    (*(void (__fastcall **)(__int64 *, __int64))(v12 + 80))(v11, v13);
    goto LABEL_32;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F45C0, v10);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v14[1].Reserved.Reserved1,
                        v15) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 10);
    v12 = *v11;
    v13 = 1LL;
    goto LABEL_9;
  }
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F45B8, v16);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v17[1].Reserved.Reserved1,
                        v18) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 10);
    v12 = *v11;
    v13 = 2LL;
    goto LABEL_9;
  }
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F45B0, v19);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v20[1].Reserved.Reserved1,
                        v21) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 10);
    v12 = *v11;
    v13 = 3LL;
    goto LABEL_9;
  }
  v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F4568, v22);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v24[1].Reserved.Reserved1,
                        v25) )
  {
    v27 = SearchAppDesktopExperienceView::DismissCortanaApp(this);
    v28 = v27;
    if ( v27 >= 0 )
      goto LABEL_32;
    v29 = (unsigned int)v27;
    v30 = 834LL;
    goto LABEL_30;
  }
  v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F4560, v26);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v31[1].Reserved.Reserved1,
                        v32) )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, 0);
    v34 = *(void (**)(void))(**((_QWORD **)this + 10) + 112LL);
LABEL_19:
    v34();
    goto LABEL_32;
  }
  v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F4550, v33);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v35[1].Reserved.Reserved1,
                        v36) )
  {
    *((_BYTE *)this + 196) = 1;
    v34 = *(void (**)(void))(**((_QWORD **)this + 10) + 40LL);
    goto LABEL_19;
  }
  v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F4548, v37);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v38[1].Reserved.Reserved1,
                        v39) )
  {
    *((_BYTE *)this + 196) = 0;
    v34 = *(void (**)(void))(**((_QWORD **)this + 10) + 48LL);
    goto LABEL_19;
  }
  v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F4540, v40);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v41[1].Reserved.Reserved1,
                        v42) )
  {
LABEL_23:
    SearchAppDesktopExperienceView::ShowBorder(this, 0LL);
    goto LABEL_32;
  }
  v44 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F4538, v43);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v44[1].Reserved.Reserved1,
                        v45) )
  {
    *((_BYTE *)this + 203) = 0;
    goto LABEL_23;
  }
  v47 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F4530, v46);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v47[1].Reserved.Reserved1,
                        v48) )
  {
    v50 = SearchAppDesktopExperienceView::SetZBand(this);
    if ( v50 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v50);
    goto LABEL_32;
  }
  v51 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F4558, v49);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a2,
                       (HSTRING)v51[1].Reserved.Reserved1,
                       v52) )
  {
LABEL_32:
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v61, v23);
    v28 = 0;
    goto LABEL_33;
  }
  v58 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v58);
  v54 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&off_1807F45A8, v53);
  v28 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v58,
          (HSTRING)v54[1].Reserved.Reserved1,
          v55,
          v57);
  v60 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v58);
  if ( v28 >= 0 )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, v57[0]);
    goto LABEL_32;
  }
  v29 = (unsigned int)v28;
  v30 = 868LL;
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)v29);
LABEL_33:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v61);
  return (unsigned int)v28;
}
