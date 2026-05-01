/*
 * XREFs of ?AddRegionToViewModel@XamlSnapAssistViewHost@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@9ABI@@@Z @ 0x18060118C
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806017E0 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetRegionViewModelState@@YA?AW4SnapAssistRegionState@Switcher@Experiences@ComposableShell@WindowsInternal@@W41WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x1806026DC (-GetRegionViewModelState@@YA-AW4SnapAssistRegionState@Switcher@Experiences@ComposableShell@Windo.c)
 */

void __fastcall XamlSnapAssistViewHost::AddRegionToViewModel(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  float v6; // xmm6_4
  LANGID ThreadUILanguage_0; // ax
  int v9; // eax
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  __int64 v13; // rcx
  unsigned int RegionViewModelState; // eax
  int v15; // eax
  _DWORD v16[4]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(float *)(a4 + 8) - *a3;
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v9 = IsBiDiLocale(ThreadUILanguage_0);
  v10 = *(float *)(a4 + 16);
  if ( v9 )
    v6 = a3[2] - (float)(v10 + v6);
  if ( v10 < 0.0 || (v11 = *(float *)(a4 + 20), v11 < 0.0) )
  {
    __abi_WinRTraiseInvalidArgumentException();
    __debugbreak();
  }
  else
  {
    v12 = *(float *)(a4 + 12) - a3[1];
    v13 = *(unsigned int *)(a4 + 24);
    *(float *)v16 = v6;
    *(float *)&v16[2] = v10;
    *(float *)&v16[3] = v11;
    *(float *)&v16[1] = v12;
    RegionViewModelState = GetRegionViewModelState(v13);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)a2 + 48LL))(
            a2,
            *(_QWORD *)a4,
            v16,
            RegionViewModelState);
    if ( v15 < 0 )
    {
      __abi_WinRTraiseException(v15);
      __debugbreak();
    }
  }
}
