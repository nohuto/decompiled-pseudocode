/*
 * XREFs of ?IsSupportedAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@AEBW4DragDropSimulatorDropPoint@34567@@Z @ 0x180219308
 * Callers:
 *     ?IsSupportedAsync@?$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@@impl@winrt@@UEAAHPEAXHPEAPEAX@Z @ 0x18062BB10 (-IsSupportedAsync@-$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@I.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_InitCoro$2 @ 0x180218F88 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180218F88.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // rax
  int v10; // [rsp+158h] [rbp+10h] BYREF

  v8 = operator new(0xF9uLL);
  v10 = 0;
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync__InitCoro_2(
    &v10,
    (__int64)v8 + 112,
    a2,
    a3,
    a4,
    a1);
  return a2;
}
