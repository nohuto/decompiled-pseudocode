/*
 * XREFs of ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180017478
 * Callers:
 *     ?SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x180016F08 (-SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@U.c)
 *     ?ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180017148 (-ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F32E8 (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?log_message@?$test_common_data@$0A@@details@tip@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z @ 0x1800F338C (-log_message@-$test_common_data@$0A@@details@tip@@QEAAXV-$basic_string_view@DU-$char_traits@D@st.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5B60 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2BC4 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800F4168 (-update_from_test_info@-$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     TestUnlockData @ 0x1800F46BC (TestUnlockData.c)
 */

void __fastcall tip::details::test_common_data<0>::end_update(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-68h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-58h]
  __int128 v7; // [rsp+40h] [rbp-48h]
  _QWORD v8[3]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 56) | 0x800;
  *(_DWORD *)(a1 + 56) = v2;
  if ( *(_QWORD *)(a1 + 152) && (v2 & 0x100) == 0 )
  {
    v5 = 0LL;
    *(_OWORD *)pv = 0LL;
    v7 = 0LL;
    v3 = (_QWORD *)tip::details::test_common_data<0>::data(a1, v8, 1LL);
    if ( v3[3] >= 0x10uLL )
      v3 = (_QWORD *)*v3;
    TestUnlockData(*(_QWORD *)(a1 + 152), v4, v3, &v5);
    if ( v9 >= 0x10 )
      std::_Deallocate<16,0>(v8[0], v9 + 1);
    tip::details::test_common_data<0>::update_from_test_info(a1, &v5);
    CoTaskMemFree(pv[1]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
