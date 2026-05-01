/*
 * XREFs of ?AddRegionToViewModel@SnapAssistState@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x18078B34C
 * Callers:
 *     ?InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemListViewModelArgs@3456@@Z @ 0x18078B474 (-InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compos.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0Rect@Foundation@Windows@@QEAA@MMMM@Z @ 0x180769EB0 (--0Rect@Foundation@Windows@@QEAA@MMMM@Z.c)
 *     ?GetRegionViewModelState@@YA?AW4SnapAssistRegionState@Switcher@Experiences@ComposableShell@WindowsInternal@@W41WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x18076C9D4 (-GetRegionViewModelState@@YA-AW4SnapAssistRegionState@Switcher@Experiences@ComposableShell@Windo.c)
 */

__int64 __fastcall SnapAssistState::AddRegionToViewModel(float *a1, __int64 a2, __int64 a3)
{
  float v5; // xmm6_4
  LANGID ThreadUILanguage_0; // ax
  unsigned int RegionViewModelState; // eax
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(float *)(a3 + 8) - a1[24];
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
    v5 = a1[26] - (float)(v5 + *(float *)(a3 + 16));
  Windows::Foundation::Rect::Rect(
    (Windows::Foundation::Rect *)&v10,
    v5,
    *(float *)(a3 + 12) - a1[25],
    *(float *)(a3 + 16),
    *(float *)(a3 + 20));
  RegionViewModelState = GetRegionViewModelState(*(_DWORD *)(a3 + 24));
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD))(*(_QWORD *)a2 + 48LL))(
             a2,
             *(_QWORD *)a3,
             &v10,
             RegionViewModelState);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    __debugbreak();
  }
  return result;
}
