/*
 * XREFs of ??_GCompositorController@Core@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180010150
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositorController@Core@Composition@UI@Windows@@UEAA@XZ @ 0x180010194 (--1CompositorController@Core@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::Core::CompositorController *__fastcall Windows::UI::Composition::Core::CompositorController::`scalar deleting destructor'(
        Windows::UI::Composition::Core::CompositorController *this,
        char a2)
{
  Windows::UI::Composition::Core::CompositorController::~CompositorController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x68uLL);
    else
      operator delete(this);
  }
  return this;
}
