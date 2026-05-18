/*
 * XREFs of ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@$$QEAV10@QEB_W@Z @ 0x18002DA80
 * Callers:
 *     ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C (-UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001F718 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

_QWORD *__fastcall std::operator+<wchar_t>(_QWORD *a1, void **a2, _WORD *a3)
{
  unsigned __int64 v4; // r8
  void **v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v6 = std::wstring::append(a2, a3, v4);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *((_OWORD *)a1 + 1) = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = (void *)7;
  *(_WORD *)v6 = 0;
  return a1;
}
