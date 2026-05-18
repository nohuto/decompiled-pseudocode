/*
 * XREFs of ??0GeometryProcessingException@Framework@Spectre@@QEAA@AEBU012@@Z @ 0x1800E1A54
 * Callers:
 *     <none>
 * Callees:
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x180017890 (--0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Framework::GeometryProcessingException *__fastcall Spectre::Framework::GeometryProcessingException::GeometryProcessingException(
        Spectre::Framework::GeometryProcessingException *this,
        const struct Spectre::Framework::GeometryProcessingException *a2)
{
  Spectre::Utils::SpectreException::SpectreException(this, a2);
  *(_QWORD *)this = &Spectre::Framework::GeometryProcessingException::`vftable';
  return this;
}
