/*
 * XREFs of ?SimulateDrop@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@W4DragDropSimulatorDropPoint@34567@_N@Z @ 0x180219E20
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1 @ 0x180218CC0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180218CC0.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1 @ 0x1802190C0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802190C0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$2 @ 0x180219388 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180219388.c)
 */

winrt::Windows::Foundation::IUnknown *winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3,
        int a4,
        ...)
{
  void *v7; // rax
  int v9; // [rsp+698h] [rbp+10h] BYREF
  int v10; // [rsp+6A8h] [rbp+20h] BYREF
  va_list va; // [rsp+6B0h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  v7 = operator new(0x629uLL);
  v9 = 0;
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__InitCoro_2(
    &v9,
    (__int64)v7 + 112,
    a2,
    a3,
    &v10,
    va,
    a1);
  return a2;
}
