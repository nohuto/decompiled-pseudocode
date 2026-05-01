/*
 * XREFs of ??_EWindowSizeConverter@@UEAAPEAXI@Z @ 0x1805A18C8
 * Callers:
 *     ??_EWindowSizeConverter@@WBI@EAAPEAXI@Z @ 0x1802A54E0 (--_EWindowSizeConverter@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1WindowSizeConverter@@UEAA@XZ @ 0x1805A17AC (--1WindowSizeConverter@@UEAA@XZ.c)
 */

WindowSizeConverter *__fastcall WindowSizeConverter::`vector deleting destructor'(WindowSizeConverter *this, char a2)
{
  WindowSizeConverter::~WindowSizeConverter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
