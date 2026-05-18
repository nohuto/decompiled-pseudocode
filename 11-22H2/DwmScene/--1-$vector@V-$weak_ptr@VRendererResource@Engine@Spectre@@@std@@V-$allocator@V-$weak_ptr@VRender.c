/*
 * XREFs of ??1?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x180031C14
 * Callers:
 *     _Spectre::dtor$11::Engine::Engine_::_1_::dtor$11 @ 0x1800E552C (_Spectre--dtor$11--Engine--Engine_--_1_--dtor$11.c)
 *     _Spectre::dtor$22::Engine::Engine_::_1_::dtor$22 @ 0x1800E563F (_Spectre--dtor$22--Engine--Engine_--_1_--dtor$22.c)
 *     _Spectre::dtor$23::Engine::Engine_::_1_::dtor$23 @ 0x1800E5658 (_Spectre--dtor$23--Engine--Engine_--_1_--dtor$23.c)
 *     _Spectre::dtor$8::Engine::_Engine_::_1_::dtor$8 @ 0x1800E582F (_Spectre--dtor$8--Engine--_Engine_--_1_--dtor$8.c)
 *     _Spectre::dtor$19::Engine::_Engine_::_1_::dtor$19 @ 0x1800E5942 (_Spectre--dtor$19--Engine--_Engine_--_1_--dtor$19.c)
 *     _Spectre::dtor$20::Engine::_Engine_::_1_::dtor$20 @ 0x1800E595B (_Spectre--dtor$20--Engine--_Engine_--_1_--dtor$20.c)
 *     _Spectre::RemoveExpiredLoaders::Engine::RemoveExpiredLoaders_::_1_::dtor$1 @ 0x1800E5DF7 (_Spectre--RemoveExpiredLoaders--Engine--RemoveExpiredLoaders_--_1_--dtor$1.c)
 *     _Spectre::Engine::Display::Display_::_1_::dtor$2 @ 0x1800E75E0 (_Spectre--Engine--Display--Display_--_1_--dtor$2.c)
 *     _Spectre::Engine::Display::_Display_::_1_::dtor$2 @ 0x1800E76AE (_Spectre--Engine--Display--_Display_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::~vector<std::weak_ptr<Spectre::Engine::RendererResource>>()
{
  return std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Tidy();
}
