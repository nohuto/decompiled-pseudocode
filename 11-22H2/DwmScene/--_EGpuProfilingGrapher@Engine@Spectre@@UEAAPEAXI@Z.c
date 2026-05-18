/*
 * XREFs of ??_EGpuProfilingGrapher@Engine@Spectre@@UEAAPEAXI@Z @ 0x18002BB60
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VGpuProfilingGrapher@Engine@Spectre@@@std@@EEAAXXZ @ 0x18002D4C0 (-_Destroy@-$_Ref_count_obj2@VGpuProfilingGrapher@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1GpuProfilingGrapher@Engine@Spectre@@UEAA@XZ @ 0x180074054 (--1GpuProfilingGrapher@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::GpuProfilingGrapher *__fastcall Spectre::Engine::GpuProfilingGrapher::`vector deleting destructor'(
        Spectre::Engine::GpuProfilingGrapher *this,
        char a2)
{
  Spectre::Engine::GpuProfilingGrapher::~GpuProfilingGrapher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
