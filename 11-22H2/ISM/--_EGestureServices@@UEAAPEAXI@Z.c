/*
 * XREFs of ??_EGestureServices@@UEAAPEAXI@Z @ 0x1801612A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1GestureServices@@UEAA@XZ @ 0x180161090 (--1GestureServices@@UEAA@XZ.c)
 */

GestureServices *__fastcall GestureServices::`vector deleting destructor'(GestureServices *this, char a2)
{
  GestureServices::~GestureServices(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
