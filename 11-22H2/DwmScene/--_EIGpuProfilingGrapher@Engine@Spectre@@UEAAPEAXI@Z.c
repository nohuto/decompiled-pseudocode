/*
 * XREFs of ??_EIGpuProfilingGrapher@Engine@Spectre@@UEAAPEAXI@Z @ 0x180074160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Engine::IGpuProfilingGrapher *__fastcall Spectre::Engine::IGpuProfilingGrapher::`vector deleting destructor'(
        Spectre::Engine::IGpuProfilingGrapher *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
