/*
 * XREFs of ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x1803CABC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CSplashScreen@@UEAA@XZ @ 0x1803CAA08 (--1CSplashScreen@@UEAA@XZ.c)
 */

CSplashScreen *__fastcall CSplashScreen::`vector deleting destructor'(CSplashScreen *this, char a2)
{
  CSplashScreen::~CSplashScreen(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
