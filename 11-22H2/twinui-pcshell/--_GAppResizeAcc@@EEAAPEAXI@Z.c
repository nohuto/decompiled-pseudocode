/*
 * XREFs of ??_GAppResizeAcc@@EEAAPEAXI@Z @ 0x1805DD340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1AppResizeAcc@@EEAA@XZ @ 0x1805DD280 (--1AppResizeAcc@@EEAA@XZ.c)
 */

IRawElementProviderSimple *__fastcall AppResizeAcc::`scalar deleting destructor'(
        IRawElementProviderSimple *this,
        char a2)
{
  AppResizeAcc::~AppResizeAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
