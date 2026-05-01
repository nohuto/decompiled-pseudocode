/*
 * XREFs of ??_EWindowSizeConverter@@UEAAPEAXI@Z @ 0x1804E953C
 * Callers:
 *     ??_EWindowSizeConverter@@WBI@EAAPEAXI@Z @ 0x180209AF0 (--_EWindowSizeConverter@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1WindowSizeConverter@@UEAA@XZ @ 0x1804E9420 (--1WindowSizeConverter@@UEAA@XZ.c)
 */

WindowSizeConverter *__fastcall WindowSizeConverter::`vector deleting destructor'(WindowSizeConverter *this, char a2)
{
  WindowSizeConverter::~WindowSizeConverter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
