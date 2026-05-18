/*
 * XREFs of ??1thread@std@@QEAA@XZ @ 0x180032088
 * Callers:
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     ?StartPerformanceThread@Engine@1Spectre@@IEAAXXZ @ 0x180036F10 (-StartPerformanceThread@Engine@1Spectre@@IEAAXXZ.c)
 *     ??1Display@Engine@Spectre@@QEAA@XZ @ 0x1800572C4 (--1Display@Engine@Spectre@@QEAA@XZ.c)
 *     ?CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800577F0 (-CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 *     _Spectre::dtor$28::Engine::Engine_::_1_::dtor$28 @ 0x1800E56D5 (_Spectre--dtor$28--Engine--Engine_--_1_--dtor$28.c)
 *     _Spectre::dtor$25::Engine::_Engine_::_1_::dtor$25 @ 0x1800E59D8 (_Spectre--dtor$25--Engine--_Engine_--_1_--dtor$25.c)
 *     _Spectre::Engine::Display::Display_::_1_::dtor$4 @ 0x1800E760C (_Spectre--Engine--Display--Display_--_1_--dtor$4.c)
 *     _Spectre::Engine::Display::_Display_::_1_::dtor$4 @ 0x1800E76DA (_Spectre--Engine--Display--_Display_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall std::thread::~thread(std::thread *this)
{
  if ( *((_DWORD *)this + 2) )
    abort();
}
