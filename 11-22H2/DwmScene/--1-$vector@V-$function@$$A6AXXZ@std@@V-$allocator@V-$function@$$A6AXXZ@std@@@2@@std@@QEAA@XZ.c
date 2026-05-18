/*
 * XREFs of ??1?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x180025A8C
 * Callers:
 *     _Spectre::Engine::RenderDevice::RenderDevice_::_1_::dtor$18 @ 0x1800E4D42 (_Spectre--Engine--RenderDevice--RenderDevice_--_1_--dtor$18.c)
 *     _Spectre::Engine::RenderOutput::RenderOutput_::_1_::dtor$5 @ 0x1800E503A (_Spectre--Engine--RenderOutput--RenderOutput_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<std::function<void (void)>>::~vector<std::function<void (void)>>()
{
  return std::vector<std::function<void (void)>>::_Tidy();
}
