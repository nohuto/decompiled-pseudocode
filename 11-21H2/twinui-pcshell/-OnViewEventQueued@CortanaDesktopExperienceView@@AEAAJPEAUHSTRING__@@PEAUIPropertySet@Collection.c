/*
 * XREFs of ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AA2FC
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1803AA1E0 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
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
 *     ??$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAURect@63@@Z1@Z @ 0x180397A30 (--$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1803A5D04 (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803A6FB0 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803AB088 (-OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803AC4F8 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803AC968 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::OnViewEventQueued(
        CortanaDesktopExperienceView *this,
        HSTRING string,
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
  void (*v27)(void); // rax
  __int64 v28; // rax
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  unsigned int v36; // r8d
  __int64 v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // rax
  unsigned int v40; // r8d
  __int64 v41; // rax
  unsigned int v42; // r8d
  int v43; // eax
  wil::details::in1diag3 *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // r8
  unsigned __int8 v51[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v52; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v53[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h]
  __int128 v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h]
  _QWORD v57[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  *(_QWORD *)&v52 = string;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v57,
    (__int64)"CortanaExperienceManager_OnEventQueued");
  v57[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v57,
    StringRawBuffer);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v53, (const WCHAR **)&off_180669778, v6);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v7) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 12);
    v10 = *v9;
    v11 = 0LL;
LABEL_9:
    (*(void (__fastcall **)(__int64 *, __int64))(v10 + 80))(v9, v11);
    goto LABEL_36;
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v53, (const WCHAR **)&off_180669770, v8);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v12) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 12);
    v10 = *v9;
    v11 = 1LL;
    goto LABEL_9;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v53, (const WCHAR **)&off_180669728, v13);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v14) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 12);
    v10 = *v9;
    v11 = 2LL;
    goto LABEL_9;
  }
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v53, (const WCHAR **)&off_180669720, v15);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v16) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 12);
    v10 = *v9;
    v11 = 3LL;
    goto LABEL_9;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v53, (const WCHAR **)&off_180669718, v17);
  if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v19) )
  {
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v53,
            (const WCHAR **)&off_180669710,
            v20);
    if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v25) )
    {
      CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, 0);
      v27 = *(void (**)(void))(**((_QWORD **)this + 12) + 112LL);
    }
    else
    {
      v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)v53,
              (const WCHAR **)&off_180669708,
              v26);
      if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v28) )
      {
        *(_QWORD *)&v52 = a3;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v52);
        v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&v55,
                (const WCHAR **)&off_180669750,
                v30);
        v22 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v52,
                *(_QWORD *)(v31 + 24),
                v32,
                v51);
        v56 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v52);
        if ( v22 >= 0 )
        {
          CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, v51[0]);
          goto LABEL_36;
        }
        v23 = (unsigned int)v22;
        v24 = 1118LL;
        goto LABEL_18;
      }
      v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)v53,
              (const WCHAR **)&off_180669700,
              v29);
      if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v33) )
      {
        *((_BYTE *)this + 236) = 1;
        v27 = *(void (**)(void))(**((_QWORD **)this + 12) + 40LL);
      }
      else
      {
        v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)v53,
                (const WCHAR **)&off_1806696F8,
                v34);
        if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v35) )
        {
          v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)v53,
                  (const WCHAR **)&off_1806696F0,
                  v36);
          if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v37) )
          {
            v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    (__int64)v53,
                    (const WCHAR **)&off_180669768,
                    v38);
            if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v39) )
            {
              v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      (__int64)v53,
                      (const WCHAR **)&off_180669760,
                      v40);
              if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v41) )
              {
                v43 = CortanaDesktopExperienceView::OnWindowSizeChangeHandled(this);
                v44 = retaddr;
                if ( v43 >= 0 )
                  goto LABEL_36;
                v45 = 1142LL;
              }
              else
              {
                v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (__int64)v53,
                        (const WCHAR **)&off_180669758,
                        v42);
                if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)&v52, v46) )
                  goto LABEL_36;
                *(_QWORD *)&v52 = a3;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v52);
                v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (__int64)v53,
                        (const WCHAR **)&off_1806696D0,
                        v47);
                Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v52,
                  *(HSTRING *)(v48 + 24),
                  v49,
                  &v55);
                v54 = 0LL;
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v52);
                v52 = v55;
                v43 = CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(
                        (__int64)this,
                        (float *)&v52);
                v44 = retaddr;
                if ( v43 >= 0 )
                  goto LABEL_36;
                v45 = 1148LL;
              }
              wil::details::in1diag3::_Log_Hr(
                v44,
                (void *)v45,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                (const char *)(unsigned int)v43);
              goto LABEL_36;
            }
            *((_BYTE *)this + 249) = 0;
          }
          CortanaDesktopExperienceView::ShowBorder(this, 0LL);
LABEL_36:
          wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            (__int64)v57,
            v18);
          v22 = 0;
          goto LABEL_37;
        }
        *((_BYTE *)this + 236) = 0;
        v27 = *(void (**)(void))(**((_QWORD **)this + 12) + 48LL);
      }
    }
    v27();
    goto LABEL_36;
  }
  v21 = CortanaDesktopExperienceView::DismissCortanaApp(this);
  v22 = v21;
  if ( v21 >= 0 )
    goto LABEL_36;
  v23 = (unsigned int)v21;
  v24 = 1107LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)v23);
LABEL_37:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v57);
  return (unsigned int)v22;
}
