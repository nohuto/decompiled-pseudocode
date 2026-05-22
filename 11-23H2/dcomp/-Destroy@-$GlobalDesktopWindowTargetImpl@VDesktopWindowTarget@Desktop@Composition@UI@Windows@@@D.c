/*
 * XREFs of ?Destroy@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAAXXZ @ 0x180010D40
 * Callers:
 *     <none>
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ @ 0x18008A69C (--1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::Desktop::GlobalDesktopWindowTargetImpl<Windows::UI::Composition::Desktop::DesktopWindowTarget>::Destroy(
        Windows::UI::Composition::Desktop::DesktopWindowTarget *this)
{
  Windows::UI::Composition::SystemBackdropHelper *v1; // rbx
  DirectComposition::CDevice *v3; // rbx
  unsigned int v4; // eax
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx

  v1 = (Windows::UI::Composition::SystemBackdropHelper *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v1 )
  {
    Windows::UI::Composition::SystemBackdropHelper::~SystemBackdropHelper(v1);
    operator delete(v1, 0x20uLL);
  }
  if ( *((_QWORD *)this + 24) )
  {
    v3 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 40LL))(*((_QWORD *)this + 27));
    DirectComposition::CDevice::ResourceSetReferenceProperty(v3, v4, 0x34u, 0);
    DirectComposition::CDevice::TryFlushKernelCommands(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      0);
    v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 24);
    if ( v5 )
    {
      *((_QWORD *)this + 24) = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 216);
  Windows::UI::Composition::Desktop::DesktopWindowTarget::Destroy(this);
}
