/*
 * XREFs of ??_E?$_Ref_count_obj2@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@UEAAPEAXI@Z @ 0x18071D770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
