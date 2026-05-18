/*
 * XREFs of ??_EGpuQuery@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800E3800
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1GpuQuery@Engine@Spectre@@UEAA@XZ @ 0x1800E37DC (--1GpuQuery@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::GpuQuery *__fastcall Spectre::Engine::GpuQuery::`vector deleting destructor'(
        Spectre::Engine::GpuQuery *this,
        char a2)
{
  Spectre::Engine::GpuQuery::~GpuQuery(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
