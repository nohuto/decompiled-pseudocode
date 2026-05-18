/*
 * XREFs of ??4?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008693C
 * Callers:
 *     ?SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z @ 0x180087BBC (-SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z.c)
 *     ?Create@DeviceVertexLayout@Engine@Spectre@@QEAAXAEAVRenderDevice@23@VVertexLayoutDesc@VertexLayoutBase@23@AEBVShaderProgram@23@@Z @ 0x18008C120 (-Create@DeviceVertexLayout@Engine@Spectre@@QEAAXAEAVRenderDevice@23@VVertexLayoutDesc@VertexLayo.c)
 *     ?Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008C1B0 (-Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ?_Tidy@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18007E75C (-_Tidy@-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementD.c)
 */

_QWORD *__fastcall std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::operator=(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
  {
    std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Tidy((__int64)a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
