/*
 * XREFs of ??_EWindowEventDispatcher@@UEAAPEAXI@Z @ 0x1803DFD2C
 * Callers:
 *     ??_EWindowEventDispatcher@@WIA@EAAPEAXI@Z @ 0x1801F97A0 (--_EWindowEventDispatcher@@WIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1WindowEventDispatcher@@UEAA@XZ @ 0x1803DF348 (--1WindowEventDispatcher@@UEAA@XZ.c)
 */

WindowEventDispatcher *__fastcall WindowEventDispatcher::`vector deleting destructor'(
        WindowEventDispatcher *this,
        char a2)
{
  WindowEventDispatcher::~WindowEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
