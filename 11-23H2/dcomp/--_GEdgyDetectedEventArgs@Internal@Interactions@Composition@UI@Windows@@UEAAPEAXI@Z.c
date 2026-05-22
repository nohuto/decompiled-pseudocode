/*
 * XREFs of ??_GEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180130EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x180130E60 (--1EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 */

HSTRING *__fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::`scalar deleting destructor'(
        HSTRING *this,
        char a2)
{
  Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::~EdgyDetectedEventArgs(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
