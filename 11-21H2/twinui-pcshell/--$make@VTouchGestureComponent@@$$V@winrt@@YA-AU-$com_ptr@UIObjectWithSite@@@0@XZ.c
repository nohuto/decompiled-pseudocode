/*
 * XREFs of ??$make@VTouchGestureComponent@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800CDA2C
 * Callers:
 *     ?CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CDAB0 (-CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x1800CF140 (--0TouchGestureComponent@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<TouchGestureComponent,>(_QWORD *a1)
{
  _QWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x68uLL);
  memset_0(v3, 0, 0x68uLL);
  TouchGestureComponent::TouchGestureComponent((TouchGestureComponent *)v3);
  *v3 = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v3[1] = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v3[2] = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v3[4] = &TouchGestureComponent::`vftable';
  *a1 = v3;
  return a1;
}
