/*
 * XREFs of ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@V_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@0@V10@V10@V_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_@@@Z @ 0x1806826C4
 * Callers:
 *     ?GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBURect@Foundation@67@@Z @ 0x180683D0C (-GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$?RAEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_@@QEBA?A_PAEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180680D74 (--$-RAEAU-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 */

__int64 **__fastcall std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>>>>,_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( _lambda_ec733d4b7bc4a75c52677f9b176b6cf3_::operator()<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager> &>(
           (__int64)a1,
           (__int64)i) )
    {
      break;
    }
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_::operator()<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager> &>(
              (__int64)a1,
              (__int64)j) )
        winrt::com_ptr<winrt::impl::IWeakReference>::operator=(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
