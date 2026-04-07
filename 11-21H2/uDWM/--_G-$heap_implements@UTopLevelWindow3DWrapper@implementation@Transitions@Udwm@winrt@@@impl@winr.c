/*
 * XREFs of ??_G?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800450A0
 * Callers:
 *     ??_ETopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z @ 0x180063920 (--_ETopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800450F0 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *a1,
        char a2)
{
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::~TopLevelWindow3DWrapper(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
