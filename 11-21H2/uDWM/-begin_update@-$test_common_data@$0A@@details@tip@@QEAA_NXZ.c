/*
 * XREFs of ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18003FFFC
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
 *     <none>
 */

// Hidden C++ exception states: #wind=2
bool __fastcall tip::details::test_common_data<0>::begin_update(__int64 a1)
{
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  return *(_QWORD *)(a1 + 120) && (*(_DWORD *)(a1 + 24) & 0x100) == 0;
}
