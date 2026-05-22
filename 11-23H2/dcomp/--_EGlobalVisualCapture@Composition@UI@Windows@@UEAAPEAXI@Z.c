/*
 * XREFs of ??_EGlobalVisualCapture@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180154590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1VisualCapture@Composition@UI@Windows@@UEAA@XZ @ 0x180154454 (--1VisualCapture@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::GlobalVisualCapture *__fastcall Windows::UI::Composition::GlobalVisualCapture::`vector deleting destructor'(
        Windows::UI::Composition::GlobalVisualCapture *this,
        char a2)
{
  Windows::UI::Composition::VisualCapture::~VisualCapture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
