/*
 * XREFs of ??_EIMemoryStatsProvider@Utils@Spectre@@UEAAPEAXI@Z @ 0x18001FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Utils::IMemoryStatsProvider *__fastcall Spectre::Utils::IMemoryStatsProvider::`vector deleting destructor'(
        Spectre::Utils::IMemoryStatsProvider *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Utils::IMemoryStatsProvider::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
