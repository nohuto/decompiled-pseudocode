/*
 * XREFs of ??_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z @ 0x180017C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017C7C (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x180017C98 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CMicaSystemBackdropVisual *__fastcall CMicaSystemBackdropVisual::`vector deleting destructor'(
        CMicaSystemBackdropVisual *this,
        char a2)
{
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((char *)this + 272);
  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x138uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CMicaSystemBackdropVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
