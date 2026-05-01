/*
 * XREFs of ??_E?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18041E160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18041DBB8 (--1RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::`vector deleting destructor'(
        volatile signed __int32 **a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::~RemoteSystemDisplayInfoChangedEventArgs(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
