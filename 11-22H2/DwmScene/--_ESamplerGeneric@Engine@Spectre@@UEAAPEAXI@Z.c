/*
 * XREFs of ??_ESamplerGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052DE0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSamplerGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x180053BE0 (-_Destroy@-$_Ref_count_obj2@VSamplerGeneric@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SamplerGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B534 (--1SamplerGeneric@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::SamplerGeneric *__fastcall Spectre::Engine::SamplerGeneric::`vector deleting destructor'(
        Spectre::Engine::SamplerGeneric *this,
        char a2)
{
  Spectre::Engine::SamplerGeneric::~SamplerGeneric(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
