/*
 * XREFs of ??_ESampler@Engine@Spectre@@UEAAPEAXI@Z @ 0x180018090
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSampler@Engine@Spectre@@@std@@EEAAXXZ @ 0x18001B760 (-_Destroy@-$_Ref_count_obj2@VSampler@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Sampler@Engine@Spectre@@UEAA@XZ @ 0x1800544F4 (--1Sampler@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Sampler *__fastcall Spectre::Engine::Sampler::`vector deleting destructor'(
        Spectre::Engine::Sampler *this,
        char a2)
{
  Spectre::Engine::Sampler::~Sampler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
