/*
 * XREFs of ??0CancelledException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x1800DFDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x180017890 (--0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Utils::CancelledException *__fastcall Spectre::Utils::CancelledException::CancelledException(
        Spectre::Utils::CancelledException *this,
        const struct Spectre::Utils::CancelledException *a2)
{
  Spectre::Utils::SpectreException::SpectreException(this, a2);
  *(_QWORD *)this = &Spectre::Utils::CancelledException::`vftable';
  return this;
}
