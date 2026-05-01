/*
 * XREFs of ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18003E390
 * Callers:
 *     ?StartToFindInStartAnimationCompleted@XamlLauncherState@@UEAAXXZ @ 0x180507350 (-StartToFindInStartAnimationCompleted@XamlLauncherState@@UEAAXXZ.c)
 * Callees:
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x18003E4D0 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18003E7BC (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009742C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180192B24 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncherState::OnCortanaTransitionRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // esi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // rcx
  int v9; // ecx
  int v10; // r9d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-60h]
  int v16; // [rsp+30h] [rbp-50h] BYREF
  HSTRING_HEADER string; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  void *v20; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v4 = *((_DWORD *)this + 16);
  LODWORD(string.Reserved.Reserved1) = v4;
  *(_QWORD *)&string.Reserved.Reserved2[8] = this;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)&string.Reserved.Reserved1;
  hstringHeader.Reserved.Reserved2[16] = 1;
  v5 = (unsigned int)(v4 - 1);
  if ( v4 == 1 )
  {
    *((_DWORD *)this + 16) = 18;
    goto LABEL_7;
  }
  v5 = (unsigned int)(v4 - 2);
  if ( v4 == 2 )
  {
    *((_DWORD *)this + 16) = 19;
    goto LABEL_7;
  }
  v5 = (unsigned int)(v4 - 3);
  if ( v4 == 3 )
  {
    *((_DWORD *)this + 16) = 20;
    goto LABEL_7;
  }
  v5 = (unsigned int)(v4 - 4);
  if ( v4 == 4 )
  {
    *((_DWORD *)this + 16) = 21;
    goto LABEL_7;
  }
  if ( v4 != 5 )
  {
    v5 = (unsigned int)(v4 - 7);
    if ( v4 == 7 )
    {
      string.Reserved.Reserved1 = 0LL;
      v13 = Microsoft::WRL::Wrappers::HString::Set(
              (Microsoft::WRL::Wrappers::HString *)&string,
              L"StartMode=AppTransition",
              0x17u);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v13 = XamlLauncherState::ShowSearch(this, (HSTRING)string.Reserved.Reserved1);
        v7 = v13;
        if ( v13 >= 0 )
        {
          WindowsDeleteString((HSTRING)string.Reserved.Reserved1);
          goto LABEL_7;
        }
        v14 = 2916LL;
      }
      else
      {
        v14 = 2915LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v13,
        v15);
      WindowsDeleteString((HSTRING)string.Reserved.Reserved1);
      goto LABEL_8;
    }
    if ( v4 != 12 )
      goto LABEL_7;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=AppTransition",
      0x18u,
      0x17u);
    string.Reserved.Reserved1 = v20;
    v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 134, (HSTRING *)&string);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_7;
    v12 = 2945LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v6,
      v15);
    goto LABEL_8;
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    a2);
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&string, L"StartMode=AppTransition", 0x18u, 0x17u);
  v6 = XamlLauncherState::ShowSearchFromOpenStart(this, v18, 2LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 2924LL;
    goto LABEL_23;
  }
LABEL_7:
  v7 = 0;
LABEL_8:
  v8 = *(_DWORD **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                      v5,
                      _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v8 > 5u && (unsigned __int8)tlgKeywordOn(v8, 0x200000000000LL) )
  {
    v16 = *((_DWORD *)this + 16);
    LODWORD(string.Reserved.Reserved1) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_18085C4F0,
      0,
      v10,
      (__int64)&string,
      (__int64)&v16);
  }
  return v7;
}
