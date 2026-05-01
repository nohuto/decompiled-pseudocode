/*
 * XREFs of ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002F0C4 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@2@XZ @ 0x1800489D0 (-start_and_watch_errors@-$tip_test@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@tip@@QE.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180098F3C (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@2@XZ @ 0x18010FE94 (-start_and_watch_errors@-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA-AV-.c)
 *     ??$start@V?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@@tip@@YA?AV?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@0@XZ @ 0x180206268 (--$start@V-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip.c)
 *     ??$start@V?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@tip@@@tip@@YA?AV?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@0@XZ @ 0x1802062A0 (--$start@V-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@tip@.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18050D570 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_QuickSwitchTest@@@tip@@QEAA?AV?$test_watcher@U_tip_QuickSwitchTest@@@2@XZ @ 0x180551030 (-start_and_watch_errors@-$tip_test@U_tip_QuickSwitchTest@@@tip@@QEAA-AV-$test_watcher@U_tip_Quic.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x18060A4A0 (--$start_and_watch_errors@V-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@@tip.c)
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x180654770 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE4E4 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     TestCreate @ 0x180098EA4 (TestCreate.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BD634 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     TestClose @ 0x180182A80 (TestClose.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

_OWORD *__fastcall tip::details::test_common_data<0>::start(__int64 a1, _OWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  char v4; // bp
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 *v14; // rax
  DWORD LastError; // ebx
  void *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  void *v19; // [rsp+38h] [rbp-60h] BYREF
  void *v20; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v4 = 0;
  LODWORD(v18) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( (*(_DWORD *)(a1 + 56) & 0x800) != 0 )
  {
    v14 = (__int64 *)tip::details::test_common_data<0>::data(a1, &v20, 1LL);
    v8 = (__int64)v14;
    if ( (unsigned __int64)v14[3] >= 0x10 )
      v8 = *v14;
    v4 = 1;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 8);
  LOBYTE(v7) = *(_BYTE *)(v9 + 16);
  v10 = TestCreate(*(_DWORD *)v9, v6, v7, *(_DWORD *)(v9 + 4), v8, a1 + 112);
  v11 = *(_QWORD *)(a1 + 152);
  v12 = v10;
  if ( v11 )
  {
    LastError = GetLastError();
    TestClose(v11);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 152) = v12;
  if ( (v4 & 1) != 0 && v21 >= 0x10 )
  {
    v16 = v20;
    v17 = v21 + 1;
    v18 = v21 + 1;
    v19 = v20;
    if ( v21 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v19, &v18);
      v17 = v18;
      v16 = v19;
    }
    operator delete(v16, v17);
  }
  *(_DWORD *)(a1 + 160) = 1;
  *a2 = *(_OWORD *)(a1 + 112);
  if ( v2 )
    LeaveCriticalSection(v2);
  return a2;
}
