/*
 * XREFs of ??_EUwpWindowEventDispatcher@@UEAAPEAXI@Z @ 0x1803EB234
 * Callers:
 *     ??_EUwpWindowEventDispatcher@@WIA@EAAPEAXI@Z @ 0x1801FAD00 (--_EUwpWindowEventDispatcher@@WIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1UwpWindowEventDispatcher@@UEAA@XZ @ 0x1803EA8AC (--1UwpWindowEventDispatcher@@UEAA@XZ.c)
 */

UwpWindowEventDispatcher *__fastcall UwpWindowEventDispatcher::`vector deleting destructor'(
        UwpWindowEventDispatcher *this,
        char a2)
{
  UwpWindowEventDispatcher::~UwpWindowEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
