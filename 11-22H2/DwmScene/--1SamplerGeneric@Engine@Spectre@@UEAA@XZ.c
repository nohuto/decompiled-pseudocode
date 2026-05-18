/*
 * XREFs of ??1SamplerGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B534
 * Callers:
 *     ??_ESamplerGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052DE0 (--_ESamplerGeneric@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::SamplerGeneric::~SamplerGeneric(Spectre::Engine::SamplerGeneric *this)
{
  *(_QWORD *)this = &Spectre::Engine::SamplerGeneric::`vftable';
  Spectre::Engine::DeviceSampler::~DeviceSampler(this);
}
