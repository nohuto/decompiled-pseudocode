/*
 * XREFs of ??0CompositionDiagnosticsInterop@Composition@UI@Windows@@QEAA@XZ @ 0x180100A8C
 * Callers:
 *     CreateCompositionInteropDiagnostics @ 0x1801016E0 (CreateCompositionInteropDiagnostics.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::CompositionDiagnosticsInterop *__fastcall Windows::UI::Composition::CompositionDiagnosticsInterop::CompositionDiagnosticsInterop(
        Windows::UI::Composition::CompositionDiagnosticsInterop *this)
{
  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::UI::Composition::ICompositionDrawingSurfaceDiagnostics,Windows::UI::Composition::ICompositionInteropDiagnostics>::`vftable'{for `Windows::UI::Composition::ICompositionDrawingSurfaceDiagnostics'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::UI::Composition::ICompositionDrawingSurfaceDiagnostics,Windows::UI::Composition::ICompositionInteropDiagnostics>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Windows::UI::Composition::ICompositionInteropDiagnostics>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionDiagnosticsInterop::`vftable'{for `Windows::UI::Composition::ICompositionDrawingSurfaceDiagnostics'};
  *((_QWORD *)this + 1) = &Windows::UI::Composition::CompositionDiagnosticsInterop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Windows::UI::Composition::ICompositionInteropDiagnostics>'};
  return this;
}
