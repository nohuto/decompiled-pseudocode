/*
 * XREFs of ??0?$basic_string_view@GU?$char_traits@G@std@@@std@@QEAA@QEBG@Z @ 0x1801D92E8
 * Callers:
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18072DD20 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::basic_string_view<unsigned short>::basic_string_view<unsigned short,std::char_traits<unsigned short>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax

  *a1 = a2;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  a1[1] = v2;
  return a1;
}
