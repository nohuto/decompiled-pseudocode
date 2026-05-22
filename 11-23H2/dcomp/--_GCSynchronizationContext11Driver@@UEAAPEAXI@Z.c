/*
 * XREFs of ??_GCSynchronizationContext11Driver@@UEAAPEAXI@Z @ 0x1801AEA40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CSynchronizationContext11Driver@@UEAA@XZ @ 0x1801AE988 (--1CSynchronizationContext11Driver@@UEAA@XZ.c)
 */

CSynchronizationContext11Driver *__fastcall CSynchronizationContext11Driver::`scalar deleting destructor'(
        CSynchronizationContext11Driver *this,
        char a2)
{
  CSynchronizationContext11Driver::~CSynchronizationContext11Driver(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
