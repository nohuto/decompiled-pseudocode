/*
 * XREFs of ??1SamplerState@Engine@Spectre@@UEAA@XZ @ 0x18009E394
 * Callers:
 *     ??_GSamplerState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009E420 (--_GSamplerState@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall Spectre::Engine::SamplerState::~SamplerState(Spectre::Engine::SamplerState *this)
{
  *(_QWORD *)this = &Spectre::Engine::SamplerState::`vftable';
  `eh vector destructor iterator'(
    (char *)this + 3080,
    256LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::~array<std::shared_ptr<Spectre::Engine::Sampler>,16>);
  `eh vector destructor iterator'(
    (char *)this + 1544,
    256LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::~array<std::shared_ptr<Spectre::Engine::Sampler>,16>);
  `eh vector destructor iterator'(
    (char *)this + 8,
    256LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::~array<std::shared_ptr<Spectre::Engine::Sampler>,16>);
}
