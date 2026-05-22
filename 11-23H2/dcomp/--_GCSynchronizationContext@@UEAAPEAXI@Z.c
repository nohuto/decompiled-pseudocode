/*
 * XREFs of ??_GCSynchronizationContext@@UEAAPEAXI@Z @ 0x1801AEAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

CSynchronizationContext *__fastcall CSynchronizationContext::`scalar deleting destructor'(
        CSynchronizationContext *this,
        char a2)
{
  *(_QWORD *)this = &CSynchronizationContext::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
