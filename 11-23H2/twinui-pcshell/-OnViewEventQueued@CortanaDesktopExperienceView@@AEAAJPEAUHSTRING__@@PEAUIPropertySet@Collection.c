/*
 * XREFs of ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18048570C
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1804855F0 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
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
 *     ??$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAURect@63@@Z1@Z @ 0x1804764A0 (--$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x180481118 (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804823F4 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804863A8 (-OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x180487804 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180487C68 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::OnViewEventQueued(
        CortanaDesktopExperienceView *this,
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
  unsigned int v38; // r8d
  HSTRING_HEADER *v39; // rax
  __int64 v40; // r8
  HSTRING_HEADER *v41; // rax
  HSTRING v42; // r8
  unsigned int v43; // r8d
  HSTRING_HEADER *v44; // rax
  HSTRING v45; // r8
  unsigned int v46; // r8d
  HSTRING_HEADER *v47; // rax
  HSTRING v48; // r8
  unsigned int v49; // r8d
  HSTRING_HEADER *v50; // rax
  HSTRING v51; // r8
  unsigned int v52; // r8d
  HSTRING_HEADER *v53; // rax
  HSTRING v54; // r8
  unsigned int v55; // r8d
  int v56; // eax
  wil::details::in1diag3 *v57; // rcx
  __int64 v58; // rdx
  HSTRING_HEADER *v59; // rax
  HSTRING v60; // r8
  unsigned int v61; // r8d
  HSTRING_HEADER *v62; // rax
  __int64 v63; // r8
  unsigned __int8 v65[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v66; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER v67; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+58h] [rbp-A8h]
  HSTRING_HEADER v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+78h] [rbp-88h]
  __int64 v71[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v71,
    (__int64)"CortanaExperienceManager_OnEventQueued");
  v71[0] = (__int64)&CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v71,
    StringRawBuffer);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4678, v7);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v8[1].Reserved.Reserved1, v9) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 12);
    v12 = *v11;
    v13 = 0LL;
LABEL_9:
    (*(void (__fastcall **)(__int64 *, __int64))(v12 + 80))(v11, v13);
    goto LABEL_36;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4668, v10);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v14[1].Reserved.Reserved1,
                        v15) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 12);
    v12 = *v11;
    v13 = 1LL;
    goto LABEL_9;
  }
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4670, v16);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v17[1].Reserved.Reserved1,
                        v18) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 12);
    v12 = *v11;
    v13 = 2LL;
    goto LABEL_9;
  }
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4658, v19);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a2,
                        (HSTRING)v20[1].Reserved.Reserved1,
                        v21) )
  {
    v11 = (__int64 *)*((_QWORD *)this + 12);
    v12 = *v11;
    v13 = 3LL;
    goto LABEL_9;
  }
  v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4660, v22);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a2,
                       (HSTRING)v24[1].Reserved.Reserved1,
                       v25) )
  {
    v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4648, v26);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v31[1].Reserved.Reserved1,
                         v32) )
    {
      v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4650, v33);
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            a2,
                            (HSTRING)v35[1].Reserved.Reserved1,
                            v36) )
      {
        *(_QWORD *)&v66 = a3;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v66);
        v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v69, (const WCHAR **)&off_1807F45D0, v38);
        v28 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v66,
                (HSTRING)v39[1].Reserved.Reserved1,
                v40,
                v65);
        v70 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v66);
        if ( v28 >= 0 )
        {
          CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, v65[0]);
          goto LABEL_36;
        }
        v29 = (unsigned int)v28;
        v30 = 1117LL;
        goto LABEL_18;
      }
      v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4600, v37);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           a2,
                           (HSTRING)v41[1].Reserved.Reserved1,
                           v42) )
      {
        v44 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F4608, v43);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                             a2,
                             (HSTRING)v44[1].Reserved.Reserved1,
                             v45) )
        {
          v47 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807F45F0, v46);
          if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                               a2,
                               (HSTRING)v47[1].Reserved.Reserved1,
                               v48) )
          {
            v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &v67,
                    (const WCHAR **)&off_1807F45F8,
                    v49);
            if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                 a2,
                                 (HSTRING)v50[1].Reserved.Reserved1,
                                 v51) )
            {
              v53 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      &v67,
                      (const WCHAR **)&off_1807F45E0,
                      v52);
              if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                   a2,
                                   (HSTRING)v53[1].Reserved.Reserved1,
                                   v54) )
              {
                v59 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &v67,
                        (const WCHAR **)&off_1807F45E8,
                        v55);
                if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                     a2,
                                     (HSTRING)v59[1].Reserved.Reserved1,
                                     v60) )
                  goto LABEL_36;
                *(_QWORD *)&v66 = a3;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v66);
                v62 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &v67,
                        (const WCHAR **)&off_1807F4610,
                        v61);
                Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v66,
                  (HSTRING)v62[1].Reserved.Reserved1,
                  v63,
                  &v69);
                v68 = 0LL;
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v66);
                v66 = *(_OWORD *)&v69.Reserved.Reserved1;
                v56 = CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(
                        (__int64)this,
                        (float *)&v66);
                v57 = retaddr;
                if ( v56 >= 0 )
                  goto LABEL_36;
                v58 = 1147LL;
              }
              else
              {
                v56 = CortanaDesktopExperienceView::OnWindowSizeChangeHandled(this);
                v57 = retaddr;
                if ( v56 >= 0 )
                  goto LABEL_36;
                v58 = 1141LL;
              }
              wil::details::in1diag3::_Log_Hr(
                v57,
                (void *)v58,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                (const char *)(unsigned int)v56);
              goto LABEL_36;
            }
            *((_BYTE *)this + 249) = 0;
          }
          CortanaDesktopExperienceView::ShowBorder(this, 0LL);
LABEL_36:
          wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v71,
            v23);
          v28 = 0;
          goto LABEL_37;
        }
        *((_BYTE *)this + 236) = 0;
        v34 = *(void (**)(void))(**((_QWORD **)this + 12) + 48LL);
      }
      else
      {
        *((_BYTE *)this + 236) = 1;
        v34 = *(void (**)(void))(**((_QWORD **)this + 12) + 40LL);
      }
    }
    else
    {
      CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, 0);
      v34 = *(void (**)(void))(**((_QWORD **)this + 12) + 112LL);
    }
    v34();
    goto LABEL_36;
  }
  v27 = CortanaDesktopExperienceView::DismissCortanaApp(this);
  v28 = v27;
  if ( v27 >= 0 )
    goto LABEL_36;
  v29 = (unsigned int)v27;
  v30 = 1106LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)v29);
LABEL_37:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v71);
  return (unsigned int)v28;
}
