/*
 * XREFs of ??_ECGlyphButtonElement@@UEAAPEAXI@Z @ 0x180583210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CGlyphButtonElement@@UEAA@XZ @ 0x1802E4D3E (--1CGlyphButtonElement@@UEAA@XZ.c)
 */

CGlyphButtonElement *__fastcall CGlyphButtonElement::`vector deleting destructor'(CGlyphButtonElement *this, char a2)
{
  CGlyphButtonElement::~CGlyphButtonElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
