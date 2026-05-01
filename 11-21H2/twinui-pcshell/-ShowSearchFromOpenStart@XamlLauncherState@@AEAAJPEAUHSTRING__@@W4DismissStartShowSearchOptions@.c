/*
 * XREFs of ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x1801ADAEC
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800257B0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800359E0 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180044D40 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?BeginStartToFindInStartAnimation@XamlLauncherState@@UEAAXXZ @ 0x1801AD5C0 (-BeginStartToFindInStartAnimation@XamlLauncherState@@UEAAXXZ.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180451C00 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180452290 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180044C00 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3750 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C5858 (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x18012E740 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801571A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x1801ADAB0 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1803A57D8 (CortanaHelpers--AllowCortanaAboveLock.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowSearchFromOpenStart(__int64 a1, HSTRING a2, int a3)
{
  int v6; // r12d
  char v7; // r14
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  const struct _tlgProvider_t *v18; // rax
  __int64 v19; // r9
  _BYTE v21[4]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v22[3]; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  char v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v26; // [rsp+90h] [rbp+40h] BYREF
  HSTRING v27; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A8h] [rbp+58h] BYREF

  v27 = a2;
  v6 = *(_DWORD *)(a1 + 64);
  v22[1] = v6;
  v23 = a1;
  v7 = 1;
  v24 = 1;
  v26 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 80) + 136LL))(*(_QWORD *)(a1 + 80), &v26);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 1056)
      && ((*(int (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 88) + 440LL))(*(_QWORD *)(a1 + 88), v21) < 0
       || !v21[0])
      || !(unsigned __int8)CortanaHelpers::AllowCortanaAboveLock()
      || !XamlLauncherState::IsStartVisible((XamlLauncherState *)(a1 + 24)) )
    {
      v7 = 0;
    }
    WindowsGetStringRawBuffer(a2, 0LL);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::GetImpl'::`2'::impl,
      0,
      v11,
      v12);
    if ( v26 || v7 )
    {
      v9 = XamlLauncherState::ShowSearch((XamlLauncherState *)a1, a2);
      if ( v9 < 0 )
        goto LABEL_37;
      if ( v7 )
      {
LABEL_36:
        v9 = 0;
        goto LABEL_37;
      }
    }
    else
    {
      LOBYTE(v28) = 0;
      v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), &v28);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 2670LL;
        goto LABEL_32;
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
        0,
        v13,
        v14);
      if ( (_BYTE)v28 )
      {
        if ( a2 )
        {
          v8 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 1080), &v27);
          v9 = v8;
          if ( v8 < 0 )
          {
            v10 = 2742LL;
            goto LABEL_32;
          }
        }
        *(_DWORD *)(a1 + 64) = 12;
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), 2LL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 2745LL;
          goto LABEL_32;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 112LL))(*(_QWORD *)(a1 + 80));
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 2746LL;
          goto LABEL_32;
        }
        goto LABEL_35;
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
      {
        if ( a3 != 2 )
        {
          *(_DWORD *)(a1 + 64) = 14;
          v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80), 7LL);
          v9 = v8;
          if ( v8 < 0 )
          {
            v10 = 2775LL;
            goto LABEL_32;
          }
          XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)a1, 0, *(HMONITOR *)(a1 + 1064));
          v8 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(
                 *(_QWORD *)(a1 + 88),
                 a2,
                 7LL);
          v9 = v8;
          if ( v8 < 0 )
          {
            v10 = 2777LL;
            goto LABEL_32;
          }
          goto LABEL_35;
        }
        *(_DWORD *)(a1 + 64) = 22;
      }
      else
      {
        *(_DWORD *)(a1 + 64) = 14;
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80), 8LL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 2785LL;
          goto LABEL_32;
        }
      }
      v9 = XamlLauncherState::ShowSearch((XamlLauncherState *)a1, a2);
      if ( v9 < 0 )
        goto LABEL_37;
    }
LABEL_35:
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 112LL))(*(_QWORD *)(a1 + 88));
    if ( v9 < 0 )
      goto LABEL_37;
    goto LABEL_36;
  }
  v10 = 2651LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v8);
LABEL_37:
  v18 = LauncherTelemetryLogging::Provider(v16, v15, v17);
  if ( *(_DWORD *)v18 > 5u && tlgKeywordOn((__int64)v18, 0x200000000000LL) )
  {
    v28 = *(_DWORD *)(a1 + 64);
    v22[0] = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      byte_1806B582B,
      0LL,
      v19,
      (__int64)v22,
      (__int64)&v28);
  }
  return (unsigned int)v9;
}
