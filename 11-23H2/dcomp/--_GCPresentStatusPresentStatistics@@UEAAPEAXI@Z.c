/*
 * XREFs of ??_GCPresentStatusPresentStatistics@@UEAAPEAXI@Z @ 0x1801AD120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

CPresentStatusPresentStatistics *__fastcall CPresentStatusPresentStatistics::`scalar deleting destructor'(
        CPresentStatusPresentStatistics *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
