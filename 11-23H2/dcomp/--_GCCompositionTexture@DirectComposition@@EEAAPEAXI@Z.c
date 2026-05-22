/*
 * XREFs of ??_GCCompositionTexture@DirectComposition@@EEAAPEAXI@Z @ 0x18009FD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompositionTexture@DirectComposition@@EEAA@XZ @ 0x18009FCA4 (--1CCompositionTexture@DirectComposition@@EEAA@XZ.c)
 */

DirectComposition::CCompositionTexture *__fastcall DirectComposition::CCompositionTexture::`scalar deleting destructor'(
        DirectComposition::CCompositionTexture *this,
        char a2)
{
  DirectComposition::CCompositionTexture::~CCompositionTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
