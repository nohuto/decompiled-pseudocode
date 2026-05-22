/*
 * XREFs of ??_GDebugPropertyRegistration@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18016B010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DebugPropertyRegistration@Composition@UI@Windows@@UEAA@XZ @ 0x18016AC54 (--1DebugPropertyRegistration@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::DebugPropertyRegistration *__fastcall Windows::UI::Composition::DebugPropertyRegistration::`scalar deleting destructor'(
        Windows::UI::Composition::DebugPropertyRegistration *this,
        char a2)
{
  Windows::UI::Composition::DebugPropertyRegistration::~DebugPropertyRegistration(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
