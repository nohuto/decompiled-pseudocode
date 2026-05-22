/*
 * XREFs of ??_EUIContext@UI@Windows@@UEAAPEAXI@Z @ 0x1800101F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UIContext@UI@Windows@@UEAA@XZ @ 0x18001022C (--1UIContext@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Windows::UI::UIContext *__fastcall Windows::UI::UIContext::`vector deleting destructor'(
        Windows::UI::UIContext *this,
        char a2)
{
  Windows::UI::UIContext::~UIContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
