/*
 * XREFs of ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68
 * Callers:
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800646A8 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A5450 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A59D0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800DB1F8 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800FE968 (-RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800FEBF8 (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800FED60 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800FEEB0 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180118538 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18011AC04 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18036076C (-RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803619CC (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180379330 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18037F0B0 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1803917A0 (-RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRI.c)
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180394508 (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@01@@Z @ 0x18009759C (--$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHS.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x180097648 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 *     ??$AsWeak@UIWeakReferenceSource@@@WRL@Microsoft@@YAJPEAUIWeakReferenceSource@@PEAVWeakRef@01@@Z @ 0x1800978BC (--$AsWeak@UIWeakReferenceSource@@@WRL@Microsoft@@YAJPEAUIWeakReferenceSource@@PEAVWeakRef@01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSingleViewShellExperience::RuntimeClassInitialize(
        HSTRING *this,
        struct IWeakReferenceSource *a2,
        struct IServiceProvider *a3,
        HSTRING a4,
        HSTRING string)
{
  HSTRING v9; // rdi
  HSTRING *v10; // r14
  HRESULT v11; // ebx
  HSTRING *v12; // rbx
  HRESULT v13; // eax
  HSTRING v14; // rbx
  HSTRING v15; // rcx
  _QWORD *v16; // r13
  __int64 *v17; // rbx
  HRESULT v18; // eax
  int v19; // edx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HSTRING v23; // rcx
  _QWORD *v24; // r15
  __int64 v26; // rdx
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v28)(_QWORD, GUID *, __int64 *); // rbx
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // rdx
  int v32; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING v35; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]

  v9 = string;
  v10 = this + 1;
  if ( !a4 || a4 != *v10 )
  {
    WindowsDeleteString(*v10);
    *v10 = 0LL;
    v11 = WindowsDuplicateString(a4, v10);
    if ( v11 < 0 )
    {
      v26 = 65LL;
      goto LABEL_29;
    }
  }
  v12 = this + 2;
  if ( string && string == *v12
    || (WindowsDeleteString(*v12),
        *v12 = 0LL,
        v13 = WindowsDuplicateString(string, this + 2),
        v9 = (HSTRING)(unsigned int)v13,
        v13 >= 0) )
  {
    v14 = *v12;
    if ( !v14 || v14 != *this )
    {
      WindowsDeleteString(*this);
      *this = 0LL;
      v11 = WindowsDuplicateString(v14, this);
      if ( v11 < 0 )
      {
        v26 = 67LL;
        goto LABEL_29;
      }
    }
    v15 = this[12];
    this[12] = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16LL))(v15);
    v11 = Microsoft::WRL::AsWeak<IWeakReferenceSource>(a2, this + 12);
    if ( v11 < 0 )
    {
      v26 = 69LL;
      goto LABEL_29;
    }
    v16 = this + 10;
    v11 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, char *))(*(_QWORD *)this[11] + 136LL))(
            this[11],
            this,
            (char *)this + 80);
    if ( v11 < 0 )
    {
      v26 = 71LL;
      goto LABEL_29;
    }
    v17 = (__int64 *)(this + 4);
    v35 = 0LL;
    v18 = WindowsCreateStringReference(L"Windows.Foundation.Collections.PropertySet", 0x2Au, &hstringHeader, &v35);
    if ( v18 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18, v19, v20);
    }
    else
    {
      v9 = v35;
      v21 = *v17;
      if ( !*v17 )
        goto LABEL_16;
    }
    *v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
LABEL_16:
    v11 = Windows::Foundation::ActivateInstance<Windows::Foundation::Collections::IPropertySet>(v9, this + 4);
    if ( v11 < 0 )
    {
      v26 = 74LL;
    }
    else
    {
      if ( (*((_BYTE *)this + 132) & 0x10) != 0 )
        goto LABEL_21;
      QueryService = a3->lpVtbl->QueryService;
      v23 = this[13];
      if ( v23 )
      {
        this[13] = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, HSTRING *))QueryService)(
              a3,
              &GUID_be47f3f2_56c0_40dd_a5ad_ba88325ea0ce,
              &GUID_69bb2711_c5f2_41da_8d6d_448a336a24c5,
              this + 13);
      if ( v11 >= 0 )
      {
LABEL_21:
        v24 = this + 14;
        v11 = CSingleViewShellExperience::RegisterAumid(
                (CSingleViewShellExperience *)this,
                *v10,
                (struct EventRegistrationToken *)this + 14);
        if ( v11 >= 0 )
        {
          if ( (*((_BYTE *)this + 132) & 4) == 0 || !*v24 )
          {
LABEL_23:
            v11 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *))(*(_QWORD *)*v16 + 16LL))(*v16, a3);
            if ( v11 < 0 )
            {
              v26 = 95LL;
            }
            else
            {
              if ( (*((_BYTE *)this + 132) & 1) == 0 )
                return 0LL;
              v11 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *))(*(_QWORD *)*v16 + 24LL))(*v16, a3);
              if ( v11 >= 0 )
                return 0LL;
              v26 = 101LL;
            }
            goto LABEL_29;
          }
          v33 = 0LL;
          v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))this[13];
          v28 = (__int64 (__fastcall *)(_QWORD, GUID *, __int64 *))**v27;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
          v29 = v28(v27, &GUID_b18447e2_209d_43d3_add5_a3434f4d558b, &v33);
          v30 = retaddr;
          if ( v29 >= 0 )
          {
            v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 48LL))(v33, *v24);
            v30 = retaddr;
            if ( v29 >= 0 )
            {
LABEL_45:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
              goto LABEL_23;
            }
            v31 = 90LL;
          }
          else
          {
            v31 = 88LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v30,
            (void *)v31,
            (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v29,
            v32);
          goto LABEL_45;
        }
        v26 = 81LL;
      }
      else
      {
        v26 = 78LL;
      }
    }
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v9;
}
