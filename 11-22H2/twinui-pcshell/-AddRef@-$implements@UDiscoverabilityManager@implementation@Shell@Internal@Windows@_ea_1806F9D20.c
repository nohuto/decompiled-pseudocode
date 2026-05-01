/*
 * XREFs of ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x1806F9D20
 * Callers:
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@W7EAAKXZ @ 0x1802ACC10 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456.c)
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WBI@EAAKXZ @ 0x1802ACC30 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@_ea_1802ACC30.c)
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WCA@EAAKXZ @ 0x1802ACC50 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@_ea_1802ACC50.c)
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WCI@EAAKXZ @ 0x1802ACC70 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@_ea_1802ACC70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,winrt::Windows::Internal::Shell::DiscoverabilityManager,IApplicationViewChangeListener,IWindowSnappingEvents,winrt::immersive_shell_component>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v3; // zf
  signed __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 64);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v1 + 1, v1);
    v3 = v1 == v4;
    v1 = v4;
    if ( v3 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
