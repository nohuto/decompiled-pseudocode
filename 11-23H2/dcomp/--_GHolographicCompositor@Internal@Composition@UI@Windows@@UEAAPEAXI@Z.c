/*
 * XREFs of ??_GHolographicCompositor@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180115B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HolographicCompositor@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x1801156E4 (--1HolographicCompositor@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Internal::HolographicCompositor *__fastcall Windows::UI::Composition::Internal::HolographicCompositor::`scalar deleting destructor'(
        Windows::UI::Composition::Internal::HolographicCompositor *this,
        char a2)
{
  Windows::UI::Composition::Internal::HolographicCompositor::~HolographicCompositor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
