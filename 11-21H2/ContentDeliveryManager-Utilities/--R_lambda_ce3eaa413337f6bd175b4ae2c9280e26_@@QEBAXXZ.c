/*
 * XREFs of ??R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ @ 0x18002DFC8
 * Callers:
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@@details@wil@@UEAAJXZ @ 0x180044AE0 (-Run@-$functor_wrapper_void@AEAV_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@@details@wil@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z @ 0x180025DD8 (--$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z.c)
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x180027308 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x18003A8D8 (-IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ.c)
 *     ?IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ @ 0x18003ABC0 (-IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180043D48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x180048544 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@detai.c)
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18004A7AC (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall _lambda_ce3eaa413337f6bd175b4ae2c9280e26_::operator()(_DWORD *a1)
{
  LSTATUS ValueW; // eax
  Mobility::Policy *v3; // rcx
  bool v4; // sf
  Mobility::Pinning *v5; // rcx
  Mobility::Pinning *v6; // rcx
  HRESULT v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID, __int64, HSTRING); // r14
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  HSTRING v16; // rdi
  HSTRING_HEADER *v17; // rax
  __int64 v18; // r8
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  DWORD v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  LSTATUS v25; // eax
  signed int v26; // ebx
  int ppv; // [rsp+28h] [rbp-49h]
  int ppva; // [rsp+28h] [rbp-49h]
  DWORD pdwValue; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v30[4]; // [rsp+4Ch] [rbp-25h] BYREF
  int Data; // [rsp+50h] [rbp-21h] BYREF
  __int64 v32; // [rsp+58h] [rbp-19h] BYREF
  LPVOID v33; // [rsp+60h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-9h] BYREF
  HSTRING string; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER v36; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  pdwValue = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"YourPhoneAppTaskbarIconCreated",
             0x20000010u,
             0LL,
             &Data,
             &pdwValue);
  v4 = ValueW < 0;
  if ( ValueW > 0 )
    v4 = 1;
  if ( (v4 || !Data) && !Mobility::Policy::isTaskbarIconCreationBlockedByPolicy(v3) )
  {
    pdwValue = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", &pdwValue);
    if ( pdwValue >= 2
      && Mobility::Pinning::IsSystemProductValidForTaskbarIcon(v5)
      && ((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_IsVariantEqual(&`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl)
       || !Mobility::Pinning::IsInRestrictedRegion(v6))
      && *a1 != 2
      && a1[1] != 2
      && (*a1 == 1 || a1[1] == 1 || a1[2] == 1) )
    {
      v33 = 0LL;
      v7 = CoCreateInstance(
             &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
             0LL,
             0x404u,
             &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
             &v33);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9C,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)v7,
          ppv);
      v32 = 0LL;
      v8 = *(_QWORD *)v33;
      v32 = 0LL;
      v9 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(v8 + 96))(
             v33,
             &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
             &GUID_f96b5c0d_8f3b_42bd_a71d_20081f499cb3,
             &v32);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9F,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)v9,
          ppv);
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 96LL))(v32, v30);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA2,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)v10,
          ppv);
      if ( v30[0] )
      {
        v11 = v32;
        v12 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, HSTRING))(*(_QWORD *)v32 + 48LL);
        string = 0LL;
        v13 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
        if ( v13 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
        }
        else
        {
          v16 = string;
          v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)&off_180109268, v15);
          LOBYTE(ppv) = 1;
          LOBYTE(v18) = 1;
          v19 = v12(v11, v17[1].Reserved.Reserved1, v18, v16);
          v20 = retaddr;
          if ( v19 >= 0 )
          {
            pdwValue = 0;
            if ( *a1 == 1 )
            {
              pdwValue = 1;
              v21 = 1;
            }
            else
            {
              v21 = 0;
            }
            if ( a1[1] == 1 )
            {
              v21 |= 2u;
              pdwValue = v21;
            }
            if ( a1[2] == 1 )
              pdwValue = v21 | 4;
            MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>((int *)&pdwValue);
            LOBYTE(v22) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
              v22,
              0LL);
            LOBYTE(v23) = 1;
            LOBYTE(v24) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
              v24,
              v23);
            goto LABEL_30;
          }
        }
        wil::details::in1diag3::Throw_Hr(
          v20,
          (void *)0xA9,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)v19,
          ppv);
      }
      TaskbarContentDeliveryPinningTelemetry::TaskbarOutOfSpaceForPin<unsigned short const * const &>((__int64)retaddr);
LABEL_30:
      Data = 1;
      v25 = RegSetKeyValueW(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
              L"YourPhoneAppTaskbarIconCreated",
              4u,
              &Data,
              4u);
      v26 = v25;
      if ( v25 > 0 )
        v26 = (unsigned __int16)v25 | 0x80070000;
      if ( v26 >= 0 )
        v26 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
          (const char *)(unsigned int)v26,
          ppva);
      if ( v26 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)v26,
          ppva);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      if ( v33 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
}
