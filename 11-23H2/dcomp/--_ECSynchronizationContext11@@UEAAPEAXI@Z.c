/*
 * XREFs of ??_ECSynchronizationContext11@@UEAAPEAXI@Z @ 0x1801AEA00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CSynchronizationContext11@@UEAA@XZ @ 0x1801AE920 (--1CSynchronizationContext11@@UEAA@XZ.c)
 */

CSynchronizationContext11 *__fastcall CSynchronizationContext11::`vector deleting destructor'(
        CSynchronizationContext11 *this,
        char a2)
{
  CSynchronizationContext11::~CSynchronizationContext11(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
