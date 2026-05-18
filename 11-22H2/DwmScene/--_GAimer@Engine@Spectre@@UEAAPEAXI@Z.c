/*
 * XREFs of ??_GAimer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180096690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Aimer@Engine@Spectre@@UEAA@XZ @ 0x180096658 (--1Aimer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Aimer *__fastcall Spectre::Engine::Aimer::`scalar deleting destructor'(
        Spectre::Engine::Aimer *this,
        char a2)
{
  Spectre::Engine::Aimer::~Aimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
