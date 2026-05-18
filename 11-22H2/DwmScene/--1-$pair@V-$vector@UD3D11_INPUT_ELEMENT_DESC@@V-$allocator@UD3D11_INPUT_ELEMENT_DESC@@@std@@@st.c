/*
 * XREFs of ??1?$pair@V?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@std@@QEAA@XZ @ 0x1800D39F0
 * Callers:
 *     ?CreateInternal@VertexLayoutD3D11@D3D11@Engine@Spectre@@MEAAXAEAVRenderDevice@34@AEBVShaderProgram@34@@Z @ 0x1800D4350 (-CreateInternal@VertexLayoutD3D11@D3D11@Engine@Spectre@@MEAAXAEAVRenderDevice@34@AEBVShaderProgr.c)
 *     _Spectre::Engine::D3D11::VertexLayoutD3D11::CreateInternal_::_1_::dtor$2 @ 0x1800F1A9C (_Spectre--Engine--D3D11--VertexLayoutD3D11--CreateInternal_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::pair<std::vector<D3D11_INPUT_ELEMENT_DESC>,std::string>::~pair<std::vector<D3D11_INPUT_ELEMENT_DESC>,std::string>(
        __int64 a1)
{
  std::string::_Tidy_deallocate(a1 + 24);
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy(a1);
}
