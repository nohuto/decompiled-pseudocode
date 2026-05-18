/*
 * XREFs of ?GetDeviceName@RenderDevice@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180026548
 * Callers:
 *     ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C (-UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::RenderDevice::GetDeviceName(__int64 a1, _QWORD *a2)
{
  std::wstring::wstring(a2, a1 + 80);
  return a2;
}
