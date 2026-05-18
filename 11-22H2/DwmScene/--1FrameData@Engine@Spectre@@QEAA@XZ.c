/*
 * XREFs of ??1FrameData@Engine@Spectre@@QEAA@XZ @ 0x1800743B0
 * Callers:
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     _Spectre::dtor$13::Engine::Engine_::_1_::dtor$13 @ 0x1800E555E (_Spectre--dtor$13--Engine--Engine_--_1_--dtor$13.c)
 *     _Spectre::dtor$10::Engine::_Engine_::_1_::dtor$10 @ 0x1800E5861 (_Spectre--dtor$10--Engine--_Engine_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::FrameData::~FrameData(Spectre::Engine::FrameData *this)
{
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)this + 64);
}
