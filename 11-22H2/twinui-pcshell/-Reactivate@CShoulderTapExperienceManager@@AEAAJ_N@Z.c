/*
 * XREFs of ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x180443244
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804428E0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x1804437E0 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002B06C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800DD81C (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1802D05FC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18041C464 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x180441DBC (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1804425F0 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShoulderTapExperienceManager::Reactivate(CShoulderTapExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r8
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rdx
  HSTRING_HEADER *v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // r8
  int v15; // eax
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // r8
  int v19; // eax
  unsigned int v20; // r8d
  HSTRING_HEADER *v21; // rax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // r8
  int v23; // eax
  unsigned int v24; // r8d
  HSTRING_HEADER *v25; // rax
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // r8
  int v27; // eax
  unsigned int v28; // r8d
  HSTRING_HEADER *v29; // rax
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // r8
  int v31; // eax
  unsigned int v32; // r8d
  HSTRING_HEADER *v33; // rax
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // r8
  int v35; // eax
  unsigned int v36; // r8d
  HSTRING_HEADER *v37; // rax
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // r8
  int v39; // eax
  unsigned int v40; // r8d
  HSTRING_HEADER *v41; // rax
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // r8
  int v43; // eax
  unsigned int v44; // r8d
  HSTRING_HEADER *v45; // rax
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // r8
  int v47; // eax
  unsigned int v48; // r8d
  HSTRING_HEADER *v49; // rax
  __int64 v50; // r8
  int v51; // eax
  int PeopleBarScreenEdge; // eax
  unsigned int v53; // r8d
  HSTRING_HEADER *v54; // rax
  __int64 (__fastcall ***v55)(_QWORD, GUID *, __int64 *); // r8
  int v56; // eax
  unsigned int v57; // r8d
  HSTRING_HEADER *v58; // rax
  __int64 (__fastcall ***v59)(_QWORD, GUID *, __int64 *); // r8
  int v60; // eax
  unsigned int v61; // r8d
  HSTRING_HEADER *v62; // rax
  __int64 (__fastcall ***v63)(_QWORD, GUID *, __int64 *); // r8
  int v64; // eax
  int v65; // eax
  unsigned int v66; // r8d
  HSTRING v67; // rbx
  HSTRING_HEADER *v68; // rax
  int v69; // eax
  HSTRING v71; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v72; // [rsp+48h] [rbp-38h] BYREF
  HSTRING v73; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v75; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v73 = 0LL;
  v75 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v75,
         (__int64 *)&v73);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v71 = v73;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v71);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &hstringHeader,
           (const WCHAR **)&off_1807F43F8,
           v6);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
           (HSTRING)v7[1].Reserved.Reserved1,
           v8);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const WCHAR **)&off_1807F4400,
              v10);
      v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
              (HSTRING)v13[1].Reserved.Reserved1,
              v14);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)&off_1807F43F0,
                v16);
        v19 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                (HSTRING)v17[1].Reserved.Reserved1,
                v18);
        v5 = v19;
        if ( v19 >= 0 )
        {
          v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &hstringHeader,
                  (const WCHAR **)&off_1807F4418,
                  v20);
          v23 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                  (HSTRING)v21[1].Reserved.Reserved1,
                  v22);
          v5 = v23;
          if ( v23 >= 0 )
          {
            v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)&off_1807F4420,
                    v24);
            v27 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                    (HSTRING)v25[1].Reserved.Reserved1,
                    v26);
            v5 = v27;
            if ( v27 >= 0 )
            {
              v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      &hstringHeader,
                      (const WCHAR **)&off_1807F4408,
                      v28);
              v31 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                      (HSTRING)v29[1].Reserved.Reserved1,
                      v30);
              v5 = v31;
              if ( v31 >= 0 )
              {
                v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &hstringHeader,
                        (const WCHAR **)&off_1807F4410,
                        v32);
                v35 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                        (HSTRING)v33[1].Reserved.Reserved1,
                        v34);
                v5 = v35;
                if ( v35 >= 0 )
                {
                  v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                          &hstringHeader,
                          (const WCHAR **)&off_1807F43C8,
                          v36);
                  v39 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                          (HSTRING)v37[1].Reserved.Reserved1,
                          v38);
                  v5 = v39;
                  if ( v39 >= 0 )
                  {
                    v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                            &hstringHeader,
                            (const WCHAR **)&off_1807F43D0,
                            v40);
                    v43 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                            (HSTRING)v41[1].Reserved.Reserved1,
                            v42);
                    v5 = v43;
                    if ( v43 >= 0 )
                    {
                      v45 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                              &hstringHeader,
                              (const WCHAR **)&off_1807F43C0,
                              v44);
                      v47 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                              (HSTRING)v45[1].Reserved.Reserved1,
                              v46);
                      v5 = v47;
                      if ( v47 >= 0 )
                      {
                        v49 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                &hstringHeader,
                                (const WCHAR **)&off_1807F43B8,
                                v48);
                        v51 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                                (HSTRING)v49[1].Reserved.Reserved1,
                                v50,
                                a2);
                        v5 = v51;
                        if ( v51 >= 0 )
                        {
                          v72 = -1;
                          PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                                                  this,
                                                  (enum EDGEUI_TRAYSTUCKPLACE *)&v72);
                          v5 = PeopleBarScreenEdge;
                          if ( PeopleBarScreenEdge >= 0 )
                          {
                            v54 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                    &hstringHeader,
                                    (const WCHAR **)&off_1807F43E8,
                                    v53);
                            v56 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
                                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                                    (HSTRING)v54[1].Reserved.Reserved1,
                                    v55);
                            v5 = v56;
                            if ( v56 >= 0 )
                            {
                              if ( v72 >= 4 )
                              {
                                v5 = -2147024809;
                                v11 = 2147942487LL;
                                v12 = 145LL;
                              }
                              else
                              {
                                v58 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                        &hstringHeader,
                                        (const WCHAR **)&off_1807F43D8,
                                        v57);
                                v60 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                                        (HSTRING)v58[1].Reserved.Reserved1,
                                        v59);
                                v5 = v60;
                                if ( v60 >= 0 )
                                {
                                  v62 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                          &hstringHeader,
                                          (const WCHAR **)&off_1807F43E0,
                                          v61);
                                  v64 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v71,
                                          (HSTRING)v62[1].Reserved.Reserved1,
                                          v63);
                                  v5 = v64;
                                  if ( v64 >= 0 )
                                  {
                                    v65 = CSingleViewShellExperience::Show(
                                            (__int64)this + 40,
                                            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
                                    v5 = v65;
                                    if ( v65 >= 0 )
                                    {
                                      v67 = v73;
                                      v68 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                              &hstringHeader,
                                              (const WCHAR **)&off_1807F4428,
                                              v66);
                                      v69 = ExperienceManagerUtils::RaiseReactivatedEvent(
                                              *((ExperienceManagerUtils **)this + 8),
                                              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 42),
                                              *((HSTRING *)this + 6),
                                              *((HSTRING *)this + 7),
                                              (HSTRING)v68[1].Reserved.Reserved1,
                                              v67);
                                      v5 = v69;
                                      if ( v69 >= 0 )
                                      {
                                        v5 = 0;
LABEL_41:
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v71);
                                        goto LABEL_42;
                                      }
                                      v11 = (unsigned int)v69;
                                      v12 = 153LL;
                                    }
                                    else
                                    {
                                      v11 = (unsigned int)v65;
                                      v12 = 152LL;
                                    }
                                  }
                                  else
                                  {
                                    v11 = (unsigned int)v64;
                                    v12 = 149LL;
                                  }
                                }
                                else
                                {
                                  v11 = (unsigned int)v60;
                                  v12 = 148LL;
                                }
                              }
                            }
                            else
                            {
                              v11 = (unsigned int)v56;
                              v12 = 122LL;
                            }
                          }
                          else
                          {
                            v11 = (unsigned int)PeopleBarScreenEdge;
                            v12 = 121LL;
                          }
                        }
                        else
                        {
                          v11 = (unsigned int)v51;
                          v12 = 117LL;
                        }
                      }
                      else
                      {
                        v11 = (unsigned int)v47;
                        v12 = 116LL;
                      }
                    }
                    else
                    {
                      v11 = (unsigned int)v43;
                      v12 = 115LL;
                    }
                  }
                  else
                  {
                    v11 = (unsigned int)v39;
                    v12 = 114LL;
                  }
                }
                else
                {
                  v11 = (unsigned int)v35;
                  v12 = 113LL;
                }
              }
              else
              {
                v11 = (unsigned int)v31;
                v12 = 112LL;
              }
            }
            else
            {
              v11 = (unsigned int)v27;
              v12 = 111LL;
            }
          }
          else
          {
            v11 = (unsigned int)v23;
            v12 = 110LL;
          }
        }
        else
        {
          v11 = (unsigned int)v19;
          v12 = 109LL;
        }
      }
      else
      {
        v11 = (unsigned int)v15;
        v12 = 108LL;
      }
    }
    else
    {
      v11 = (unsigned int)v9;
      v12 = 107LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)v11);
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_42:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v73);
  return v5;
}
