/*
 * XREFs of ??_GLightProbe@Engine@Spectre@@UEAAPEAXI@Z @ 0x180051620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1LightProbe@Engine@Spectre@@UEAA@XZ @ 0x1800512BC (--1LightProbe@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::LightProbe *__fastcall Spectre::Engine::LightProbe::`scalar deleting destructor'(
        Spectre::Engine::LightProbe *this,
        char a2)
{
  Spectre::Engine::LightProbe::~LightProbe(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
