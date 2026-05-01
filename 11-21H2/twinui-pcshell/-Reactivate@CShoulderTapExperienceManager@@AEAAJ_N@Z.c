/*
 * XREFs of ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x18036D698
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036CC80 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x18036DC30 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18000B4DC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180036348 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18004C24C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x1803525E0 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18036C15C (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18036C990 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShoulderTapExperienceManager::Reactivate(CShoulderTapExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // r8d
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // eax
  unsigned int v35; // r8d
  __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // r8d
  __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // r8d
  __int64 v42; // rax
  int v43; // eax
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // eax
  int PeopleBarScreenEdge; // eax
  unsigned int v49; // r8d
  __int64 v50; // rax
  int v51; // eax
  unsigned int v52; // r8d
  unsigned int v53; // ebx
  unsigned int v54; // esi
  __int64 v55; // rax
  __int64 v56; // r8
  int v57; // eax
  unsigned int v58; // r8d
  __int64 v59; // rax
  __int64 v60; // r8
  int v61; // eax
  int v62; // eax
  unsigned int v63; // r8d
  HSTRING v64; // rbx
  __int64 v65; // rax
  int v66; // eax
  HSTRING v68; // [rsp+40h] [rbp-40h] BYREF
  int v69; // [rsp+48h] [rbp-38h] BYREF
  HSTRING v70; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v72; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v70 = 0LL;
  v72 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v72,
         (__int64 *)&v70);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v68 = v70;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v68);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (__int64)&hstringHeader,
           (const WCHAR **)&off_1806694F0,
           v6);
    v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
           *(HSTRING *)(v7 + 24));
    v5 = v8;
    if ( v8 < 0 )
    {
      v10 = (unsigned int)v8;
      v11 = 107LL;
      goto LABEL_46;
    }
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694E8,
            v9);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v12 + 24));
    v5 = v13;
    if ( v13 < 0 )
    {
      v10 = (unsigned int)v13;
      v11 = 108LL;
      goto LABEL_46;
    }
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694B0,
            v14);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v15 + 24));
    v5 = v16;
    if ( v16 < 0 )
    {
      v10 = (unsigned int)v16;
      v11 = 109LL;
      goto LABEL_46;
    }
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694A8,
            v17);
    v19 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v18 + 24));
    v5 = v19;
    if ( v19 < 0 )
    {
      v10 = (unsigned int)v19;
      v11 = 110LL;
      goto LABEL_46;
    }
    v21 = *((_DWORD *)this + 74);
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694A0,
            v20);
    v24 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v22 + 24),
            v23,
            v21);
    v5 = v24;
    if ( v24 < 0 )
    {
      v10 = (unsigned int)v24;
      v11 = 111LL;
      goto LABEL_46;
    }
    v26 = *((_DWORD *)this + 75);
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_180669498,
            v25);
    v29 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v27 + 24),
            v28,
            v26);
    v5 = v29;
    if ( v29 < 0 )
    {
      v10 = (unsigned int)v29;
      v11 = 112LL;
      goto LABEL_46;
    }
    v31 = *((_DWORD *)this + 76);
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694D0,
            v30);
    v34 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v32 + 24),
            v33,
            v31);
    v5 = v34;
    if ( v34 < 0 )
    {
      v10 = (unsigned int)v34;
      v11 = 113LL;
      goto LABEL_46;
    }
    v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694C8,
            v35);
    v37 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v36 + 24));
    v5 = v37;
    if ( v37 < 0 )
    {
      v10 = (unsigned int)v37;
      v11 = 114LL;
      goto LABEL_46;
    }
    v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694C0,
            v38);
    v40 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v39 + 24));
    v5 = v40;
    if ( v40 < 0 )
    {
      v10 = (unsigned int)v40;
      v11 = 115LL;
      goto LABEL_46;
    }
    v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_180669490,
            v41);
    v43 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v42 + 24));
    v5 = v43;
    if ( v43 < 0 )
    {
      v10 = (unsigned int)v43;
      v11 = 116LL;
      goto LABEL_46;
    }
    v45 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694B8,
            v44);
    v47 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v45 + 24),
            v46,
            a2);
    v5 = v47;
    if ( v47 < 0 )
    {
      v10 = (unsigned int)v47;
      v11 = 117LL;
      goto LABEL_46;
    }
    v69 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v69);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v10 = (unsigned int)PeopleBarScreenEdge;
      v11 = 121LL;
      goto LABEL_46;
    }
    v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1806694E0,
            v49);
    v51 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
            *(HSTRING *)(v50 + 24));
    v5 = v51;
    if ( v51 < 0 )
    {
      v10 = (unsigned int)v51;
      v11 = 122LL;
      goto LABEL_46;
    }
    v53 = 184;
    v54 = 184;
    if ( v69 != -1 )
    {
      switch ( v69 )
      {
        case 0:
          goto LABEL_35;
        case 1:
LABEL_34:
          v54 = 202;
          goto LABEL_36;
        case 2:
LABEL_35:
          v53 = 202;
LABEL_36:
          v55 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)&off_180669488,
                  v52);
          v57 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                  *(HSTRING *)(v55 + 24),
                  v56,
                  v53);
          v5 = v57;
          if ( v57 >= 0 )
          {
            v59 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    (__int64)&hstringHeader,
                    (const WCHAR **)&off_180669480,
                    v58);
            v61 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                    *(HSTRING *)(v59 + 24),
                    v60,
                    v54);
            v5 = v61;
            if ( v61 >= 0 )
            {
              v62 = CSingleViewShellExperience::Show(
                      (__int64)this + 40,
                      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
              v5 = v62;
              if ( v62 >= 0 )
              {
                v64 = v70;
                v65 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (__int64)&hstringHeader,
                        (const WCHAR **)&off_1806694D8,
                        v63);
                v66 = ExperienceManagerUtils::RaiseReactivatedEvent(
                        *((ExperienceManagerUtils **)this + 8),
                        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 42),
                        *((HSTRING *)this + 6),
                        *((HSTRING *)this + 7),
                        *(HSTRING *)(v65 + 24),
                        v64);
                v5 = v66;
                if ( v66 >= 0 )
                {
                  v5 = 0;
LABEL_47:
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
                  goto LABEL_48;
                }
                v10 = (unsigned int)v66;
                v11 = 153LL;
              }
              else
              {
                v10 = (unsigned int)v62;
                v11 = 152LL;
              }
            }
            else
            {
              v10 = (unsigned int)v61;
              v11 = 149LL;
            }
          }
          else
          {
            v10 = (unsigned int)v57;
            v11 = 148LL;
          }
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v11,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)v10);
          goto LABEL_47;
        case 3:
          goto LABEL_34;
      }
    }
    v5 = -2147024809;
    v10 = 2147942487LL;
    v11 = 145LL;
    goto LABEL_46;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_48:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v70);
  return v5;
}
