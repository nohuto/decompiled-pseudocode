/*
 * XREFs of ??_GIGpuQueryPool@Engine@Spectre@@UEAAPEAXI@Z @ 0x180025DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Engine::IGpuQueryPool *__fastcall Spectre::Engine::IGpuQueryPool::`scalar deleting destructor'(
        Spectre::Engine::IGpuQueryPool *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Engine::IGpuQueryPool::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
