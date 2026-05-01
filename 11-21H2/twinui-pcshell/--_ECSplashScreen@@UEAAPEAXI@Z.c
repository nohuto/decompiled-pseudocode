/*
 * XREFs of ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x18003B000
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSplashScreen@@UEAA@XZ @ 0x18003B03C (--1CSplashScreen@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CSplashScreen *__fastcall CSplashScreen::`vector deleting destructor'(CSplashScreen *this, char a2)
{
  CSplashScreen::~CSplashScreen(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xB0uLL);
  return this;
}
