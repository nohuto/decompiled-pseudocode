/*
 * XREFs of ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800400CC
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003EF80 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x18003F290 (-PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003F454 (-CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003FED0 (-ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F4790 (-PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F62A8 (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?log_message@?$test_common_data@$0A@@details@tip@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z @ 0x1800F6358 (-log_message@-$test_common_data@$0A@@details@tip@@QEAAXV-$basic_string_view@DU-$char_traits@D@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x180013CB4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180042334 (-update_from_test_info@-$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     TestUnlockData @ 0x180042354 (TestUnlockData.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800423D8 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip::details::test_common_data<0>::end_update(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  struct TestInfo *v5; // rdx
  _OWORD v6[3]; // [rsp+20h] [rbp-68h] BYREF
  void *v7; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+68h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 24) | 0x800;
  *(_DWORD *)(a1 + 24) = v2;
  if ( *(_QWORD *)(a1 + 120) && (v2 & 0x100) == 0 )
  {
    memset(v6, 0, sizeof(v6));
    v3 = (_QWORD *)tip::details::test_common_data<0>::data(a1, &v7, 1LL);
    if ( v3[3] >= 0x10uLL )
      v3 = (_QWORD *)*v3;
    TestUnlockData(*(_QWORD *)(a1 + 120), v4, v3, v6);
    if ( v8 >= 0x10 )
      std::_Deallocate<16,0>(v7, v8 + 1);
    tip::details::test_common_data<0>::update_from_test_info(a1, v6);
    tip::details::TestInfoDelete((LPVOID *)v6, v5);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 16));
}
