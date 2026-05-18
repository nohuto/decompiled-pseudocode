/*
 * XREFs of ??1Input@Engine@Spectre@@QEAA@XZ @ 0x180031F44
 * Callers:
 *     _Spectre::dtor$10::Engine::Engine_::_1_::dtor$10 @ 0x1800E5513 (_Spectre--dtor$10--Engine--Engine_--_1_--dtor$10.c)
 *     _Spectre::dtor$7::Engine::_Engine_::_1_::dtor$7 @ 0x1800E5816 (_Spectre--dtor$7--Engine--_Engine_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Input::~Input(Spectre::Engine::Input *this)
{
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)this + 56);
}
