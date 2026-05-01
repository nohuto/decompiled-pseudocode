/*
 * XREFs of ?InsertAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@AEBW4DragDropSimulatorDropPoint@34567@@Z @ 0x180218F08
 * Callers:
 *     ?InsertAsync@?$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@@impl@winrt@@UEAAHPEAXHPEAPEAX@Z @ 0x18062B910 (-InsertAsync@-$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Intern.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_InitCoro$2 @ 0x180218B90 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180218B90.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // rax
  int v10; // [rsp+158h] [rbp+10h] BYREF

  v8 = operator new(0xF9uLL);
  v10 = 0;
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync__InitCoro_2(
    &v10,
    (__int64)v8 + 112,
    a2,
    a3,
    a4,
    a1);
  return a2;
}
