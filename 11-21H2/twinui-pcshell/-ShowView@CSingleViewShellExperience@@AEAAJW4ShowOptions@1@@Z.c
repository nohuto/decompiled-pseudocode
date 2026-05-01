/*
 * XREFs of ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18000DAE0
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18000B96C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18000D7A0 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18009C8B4 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800C9254 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::ShowView(__int64 a1, char a2)
{
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // edi
  int v9; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = a1;
  v4 = a2 & 2;
  if ( (a2 & 2) == 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v7 < 0 )
      goto LABEL_11;
  }
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
  }
  else
  {
    v5 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(a1 + 72, *(_QWORD *)(a1 + 24), 4LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80,
        (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v5,
        v10);
      goto LABEL_5;
    }
  }
  v6 = 0;
LABEL_5:
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x38B,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6,
      v10);
  if ( (a2 & 1) != 0
    || (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)) >= 0
    || (a2 & 4) == 0 )
  {
    if ( !v4 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
      if ( v7 < 0 )
        goto LABEL_11;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88), a1);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), a1);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x391,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9,
        v10);
  }
  v7 = 0;
LABEL_11:
  CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
  return (unsigned int)v7;
}
