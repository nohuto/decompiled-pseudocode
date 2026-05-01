/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800EA908
 * Callers:
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x1801B2AF4 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _lambda_b659f5b0e258593167d98b7926edc38b_::operator() @ 0x1801E5210 (_lambda_b659f5b0e258593167d98b7926edc38b_--operator().c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1804579F0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5100d895780d3f0a994794032c3713ad___::Run @ 0x18053CA90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5100d895780d3f0a994794032c3713ad___--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_12603dae6e80c2220100b0c8836f21bd_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_12603dae6e80c2220100b0c8836f21bd_@@@Z @ 0x1800EAE38 (--$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@App.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800ECCDC (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x1800ED068 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        const unsigned __int16 *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  int v9; // eax
  unsigned int v10; // r8d
  unsigned __int16 *v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ebx
  __int64 v18; // [rsp+20h] [rbp-79h] BYREF
  unsigned __int16 *v19; // [rsp+28h] [rbp-71h] BYREF
  __int64 v20; // [rsp+30h] [rbp-69h]
  __int64 v21; // [rsp+38h] [rbp-61h]
  PVOID *v22; // [rsp+40h] [rbp-59h] BYREF
  PVOID *p_Reserved1; // [rsp+48h] [rbp-51h]
  __int64 v24; // [rsp+50h] [rbp-49h]
  __int64 v25; // [rsp+58h] [rbp-41h]
  const WCHAR *v26; // [rsp+60h] [rbp-39h] BYREF
  PVOID v27; // [rsp+68h] [rbp-31h] BYREF
  PVOID Reserved1; // [rsp+70h] [rbp-29h] BYREF
  HSTRING_HEADER v29; // [rsp+78h] [rbp-21h] BYREF
  HSTRING_HEADER v30; // [rsp+98h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v22 = (PVOID *)a2;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v19);
  v20 = -1LL;
  v21 = -1LL;
  v9 = ParseAppUserModelId(a1, 0LL, &v19);
  v11 = (unsigned __int16 *)a1;
  if ( v9 >= 0 )
    v11 = v19;
  v26 = v11;
  v18 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, &v26, v10)[1].Reserved.Reserved1;
  v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&v22, v12)[1].Reserved.Reserved1;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
  v22 = &v27;
  p_Reserved1 = &Reserved1;
  v15 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_12603dae6e80c2220100b0c8836f21bd_>(
          v14,
          v13,
          &v18,
          &v22);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v15,
      v18);
  }
  else
  {
    v22 = (PVOID *)a1;
    p_Reserved1 = (PVOID *)L"Windows.Launch";
    v24 = v18;
    v25 = a6;
    v16 = ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f_(
            a3,
            a4,
            a5,
            &v22,
            v18,
            v19,
            v20,
            v21);
    if ( v16 >= 0 )
      v16 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v19);
  return (unsigned int)v16;
}
