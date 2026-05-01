/*
 * XREFs of ??4?$com_ptr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801616EC
 * Callers:
 *     ?unsubscribe_from_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E2870 (-unsubscribe_from_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E2D80 (-subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     _lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator() @ 0x1800F4C08 (_lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator().c)
 *     _lambda_92c90ed01b0d8642303ed5be6c53eb36_::operator() @ 0x1801615DC (_lambda_92c90ed01b0d8642303ed5be6c53eb36_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 *__fastcall winrt::com_ptr<Windows::Internal::Shell::Experience::IBaseExperienceManager>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
