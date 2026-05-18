/*
 * XREFs of ??_GHighPerfClock@Tweening@Utils@Spectre@@UEAAPEAXI@Z @ 0x180032680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Utils::Tweening::HighPerfClock *__fastcall Spectre::Utils::Tweening::HighPerfClock::`scalar deleting destructor'(
        Spectre::Utils::Tweening::HighPerfClock *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
