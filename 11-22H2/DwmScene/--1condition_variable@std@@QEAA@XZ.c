/*
 * XREFs of ??1condition_variable@std@@QEAA@XZ @ 0x180032034
 * Callers:
 *     _Spectre::dtor$29::Engine::Engine_::_1_::dtor$29 @ 0x1800E56EE (_Spectre--dtor$29--Engine--Engine_--_1_--dtor$29.c)
 *     _Spectre::dtor$26::Engine::_Engine_::_1_::dtor$26 @ 0x1800E59F1 (_Spectre--dtor$26--Engine--_Engine_--_1_--dtor$26.c)
 *     _Spectre::Engine::Display::Display_::_1_::dtor$6 @ 0x1800E763B (_Spectre--Engine--Display--Display_--_1_--dtor$6.c)
 *     _Spectre::Engine::Display::Display_::_1_::dtor$7 @ 0x1800E7654 (_Spectre--Engine--Display--Display_--_1_--dtor$7.c)
 *     _Spectre::Engine::Display::Display_::_1_::dtor$8 @ 0x1800E766D (_Spectre--Engine--Display--Display_--_1_--dtor$8.c)
 *     _Spectre::Engine::Display::_Display_::_1_::dtor$6 @ 0x1800E7709 (_Spectre--Engine--Display--_Display_--_1_--dtor$6.c)
 *     _Spectre::Engine::Display::_Display_::_1_::dtor$7 @ 0x1800E7722 (_Spectre--Engine--Display--_Display_--_1_--dtor$7.c)
 *     _Spectre::Engine::Display::_Display_::_1_::dtor$8 @ 0x1800E773B (_Spectre--Engine--Display--_Display_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::condition_variable::~condition_variable(_Cnd_t a1)
{
  _Cnd_destroy_in_situ(a1);
}
