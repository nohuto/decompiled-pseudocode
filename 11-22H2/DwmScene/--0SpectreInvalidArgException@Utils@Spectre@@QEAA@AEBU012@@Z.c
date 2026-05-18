/*
 * XREFs of ??0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x18001E37C
 * Callers:
 *     <none>
 * Callees:
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x180017890 (--0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Utils::SpectreInvalidArgException *__fastcall Spectre::Utils::SpectreInvalidArgException::SpectreInvalidArgException(
        Spectre::Utils::SpectreInvalidArgException *this,
        const struct Spectre::Utils::SpectreInvalidArgException *a2)
{
  Spectre::Utils::SpectreException::SpectreException(this, a2);
  *(_QWORD *)this = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return this;
}
