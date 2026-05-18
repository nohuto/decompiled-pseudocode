/*
 * XREFs of ?to_string@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z @ 0x18008C81C
 * Callers:
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD130 (-Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z.c)
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::to_string(_QWORD *a1, int a2)
{
  std::string::string(a1, (__int64)off_180100690[a2]);
  return a1;
}
