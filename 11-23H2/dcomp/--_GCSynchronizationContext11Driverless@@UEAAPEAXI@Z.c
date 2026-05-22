/*
 * XREFs of ??_GCSynchronizationContext11Driverless@@UEAAPEAXI@Z @ 0x1801AEA80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CSynchronizationContext11Driverless@@UEAA@XZ @ 0x1801AE9C0 (--1CSynchronizationContext11Driverless@@UEAA@XZ.c)
 */

CSynchronizationContext11Driverless *__fastcall CSynchronizationContext11Driverless::`scalar deleting destructor'(
        CSynchronizationContext11Driverless *this,
        char a2)
{
  CSynchronizationContext11Driverless::~CSynchronizationContext11Driverless(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
