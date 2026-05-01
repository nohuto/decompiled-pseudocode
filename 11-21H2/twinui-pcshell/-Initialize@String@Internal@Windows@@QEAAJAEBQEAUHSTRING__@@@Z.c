/*
 * XREFs of ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3CA4
 * Callers:
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800A3C44 (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1803F0790 (-RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIV.c)
 *     _lambda_b87eacc4ab1787d6788f730647895d37_::operator() @ 0x180409F58 (_lambda_b87eacc4ab1787d6788f730647895d37_--operator().c)
 *     ?SetPersistingStateName@WindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z @ 0x18040C350 (-SetPersistingStateName@WindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z.c)
 *     _lambda_02c18762fafac8f58346267f5d28b7a5_::operator() @ 0x180410E28 (_lambda_02c18762fafac8f58346267f5d28b7a5_--operator().c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804157EC (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     ?SetPersistingStateName@UwpWindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z @ 0x1804177C0 (-SetPersistingStateName@UwpWindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::Initialize(HSTRING *this, HSTRING *a2)
{
  HRESULT v3; // ebx
  HSTRING v4; // rcx
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  v3 = WindowsDuplicateString(*a2, &newString);
  if ( v3 >= 0 )
  {
    v4 = *this;
    *this = newString;
    WindowsDeleteString(v4);
  }
  return (unsigned int)v3;
}
