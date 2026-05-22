/*
 * XREFs of ??_EInteropCursorVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015C320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ @ 0x1800A3E64 (--1-$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ.c)
 *     ??1Visual@Composition@UI@Windows@@UEAA@XZ @ 0x1801116FC (--1Visual@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::InteropCursorVisual *__fastcall Windows::UI::Composition::InteropCursorVisual::`vector deleting destructor'(
        Windows::UI::Composition::InteropCursorVisual *this,
        char a2)
{
  InteropProxyRef<IDCompositionVisualRestricted>::~InteropProxyRef<IDCompositionVisualRestricted>((volatile __int64 *)this + 39);
  Windows::UI::Composition::Visual::~Visual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
