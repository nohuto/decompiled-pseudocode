/*
 * XREFs of ??_ECCompositionTextureBinding@DirectComposition@@UEAAPEAXI@Z @ 0x18009FD80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompositionTextureBinding@DirectComposition@@UEAA@XZ @ 0x18009FD10 (--1CCompositionTextureBinding@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCompositionTextureBinding *__fastcall DirectComposition::CCompositionTextureBinding::`vector deleting destructor'(
        DirectComposition::CCompositionTextureBinding *this,
        char a2)
{
  DirectComposition::CCompositionTextureBinding::~CCompositionTextureBinding(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
