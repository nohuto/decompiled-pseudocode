/*
 * XREFs of ?AddRef@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEAAKXZ @ 0x180133740
 * Callers:
 *     ?AddRef@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@W7EAAKXZ @ 0x1801F6E90 (-AddRef@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Window_ea_1801F6E90.c)
 *     ?AddRef@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@WBA@EAAKXZ @ 0x1801F6EA0 (-AddRef@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Window_ea_1801F6EA0.c)
 *     ?AddRef@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@WBI@EAAKXZ @ 0x1801F6EB0 (-AddRef@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Window_ea_1801F6EB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::immersive_shell_component,IPenMenuSystemTrayManager>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v3; // zf
  signed __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 48);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v1 + 1, v1);
    v3 = v1 == v4;
    v1 = v4;
    if ( v3 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
