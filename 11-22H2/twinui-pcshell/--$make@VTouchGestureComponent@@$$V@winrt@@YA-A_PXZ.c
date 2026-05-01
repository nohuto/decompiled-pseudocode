/*
 * XREFs of ??$make@VTouchGestureComponent@@$$V@winrt@@YA?A_PXZ @ 0x18008C1F8
 * Callers:
 *     ?CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008BAC0 (-CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x18008A290 (--0TouchGestureComponent@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<TouchGestureComponent,>(_QWORD *a1)
{
  _QWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x70uLL);
  memset_0(v3, 0, 0x70uLL);
  TouchGestureComponent::TouchGestureComponent((TouchGestureComponent *)v3);
  *v3 = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v3[1] = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v3[2] = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v3[4] = &TouchGestureComponent::`vftable';
  *a1 = v3;
  return a1;
}
