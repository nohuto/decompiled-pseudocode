/*
 * XREFs of ??1TextureState@Engine@Spectre@@UEAA@XZ @ 0x18009DFE8
 * Callers:
 *     ??_ETextureState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009E0D0 (--_ETextureState@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::CommandListState::CommandListState_::_1_::dtor$3 @ 0x1800EB157 (_Spectre--Engine--CommandListState--CommandListState_--_1_--dtor$3.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall Spectre::Engine::TextureState::~TextureState(Spectre::Engine::TextureState *this)
{
  *(_QWORD *)this = &Spectre::Engine::TextureState::`vftable';
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
