/*
 * XREFs of ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEB_W$$QEAV10@@Z @ 0x1800C2DCC
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_KQEB_W0@Z @ 0x18001F88C (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_KQEB_W0@Z.c)
 */

_QWORD *__fastcall std::operator+<wchar_t>(_QWORD *a1, __int64 a2, void **a3)
{
  void **v4; // rax

  v4 = std::wstring::insert(a3, a2, (__int64)a3, 3uLL);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *((_OWORD *)a1 + 1) = *((_OWORD *)v4 + 1);
  v4[2] = 0LL;
  v4[3] = (void *)7;
  *(_WORD *)v4 = 0;
  return a1;
}
