/*
 * XREFs of ??1?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAA@XZ @ 0x1800127D4
 * Callers:
 *     ??_EGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180012790 (--_EGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ @ 0x18008A69C (--1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::Desktop::GlobalDesktopWindowTargetImpl<Windows::UI::Composition::Desktop::DesktopWindowTarget>::~GlobalDesktopWindowTargetImpl<Windows::UI::Composition::Desktop::DesktopWindowTarget>(
        Windows::UI::Composition::Desktop::DesktopWindowTarget *this)
{
  void *v1; // rdi

  v1 = (void *)*((_QWORD *)this + 28);
  if ( v1 )
  {
    Windows::UI::Composition::SystemBackdropHelper::~SystemBackdropHelper(*((Windows::UI::Composition::SystemBackdropHelper **)this
                                                                          + 28));
    operator delete(v1, 0x20uLL);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 216);
  Windows::UI::Composition::Desktop::DesktopWindowTarget::~DesktopWindowTarget(this);
}
