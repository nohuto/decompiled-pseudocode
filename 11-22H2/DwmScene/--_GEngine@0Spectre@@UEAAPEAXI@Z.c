/*
 * XREFs of ??_GEngine@0Spectre@@UEAAPEAXI@Z @ 0x180032600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Engine *__fastcall Spectre::Engine::Engine::`scalar deleting destructor'(
        Spectre::Engine::Engine *this,
        char a2)
{
  Spectre::Engine::Engine::~Engine(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
