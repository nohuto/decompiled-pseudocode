/*
 * XREFs of ?AddRef@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@UEAAKXZ @ 0x1800D9E90
 * Callers:
 *     ?AddRef@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@W7EAAKXZ @ 0x18028E2F0 (-AddRef@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal.c)
 *     ?AddRef@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@WBA@EAAKXZ @ 0x18028E310 (-AddRef@-$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchGestureComponent,winrt::immersive_shell_component>::AddRef(__int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v3; // zf
  signed __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 40);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 + 1, v1);
    v3 = v1 == v4;
    v1 = v4;
    if ( v3 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
