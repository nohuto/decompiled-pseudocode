/*
 * XREFs of ??_ECompObjectDiagnosticsPrincipal@@EEAAPEAXI@Z @ 0x18019CC90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CompObjectDiagnosticsPrincipal@@EEAA@XZ @ 0x18019C7F0 (--1CompObjectDiagnosticsPrincipal@@EEAA@XZ.c)
 */

CompObjectDiagnosticsPrincipal *__fastcall CompObjectDiagnosticsPrincipal::`vector deleting destructor'(
        CompObjectDiagnosticsPrincipal *this,
        char a2)
{
  CompObjectDiagnosticsPrincipal::~CompObjectDiagnosticsPrincipal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
