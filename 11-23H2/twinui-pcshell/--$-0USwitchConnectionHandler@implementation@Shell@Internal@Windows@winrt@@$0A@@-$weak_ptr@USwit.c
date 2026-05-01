/*
 * XREFs of ??$?0USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$0A@@?$weak_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18071CE5C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     ??$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18071D03C (--$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2[1] )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a1;
}
