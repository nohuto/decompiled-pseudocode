/*
 * XREFs of ?_Tidy@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18007E75C
 * Callers:
 *     ??1VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@XZ @ 0x18007CC3C (--1VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x1800867D0 (--1-$_Tidy_guard@V-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVer.c)
 *     ??1ShaderPipeline@Engine@Spectre@@QEAA@XZ @ 0x180086854 (--1ShaderPipeline@Engine@Spectre@@QEAA@XZ.c)
 *     ??4?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008693C (--4-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementDesc@.c)
 *     ?SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z @ 0x180087BBC (-SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z.c)
 *     ??1DeviceVertexLayout@Engine@Spectre@@UEAA@XZ @ 0x18008BD8C (--1DeviceVertexLayout@Engine@Spectre@@UEAA@XZ.c)
 *     ??1VertexLayout@Engine@Spectre@@UEAA@XZ @ 0x18008BDBC (--1VertexLayout@Engine@Spectre@@UEAA@XZ.c)
 *     ?Create@DeviceVertexLayout@Engine@Spectre@@QEAAXAEAVRenderDevice@23@VVertexLayoutDesc@VertexLayoutBase@23@AEBVShaderProgram@23@@Z @ 0x18008C120 (-Create@DeviceVertexLayout@Engine@Spectre@@QEAAXAEAVRenderDevice@23@VVertexLayoutDesc@VertexLayo.c)
 *     ?Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008C1B0 (-Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x18007C980 (--$_Destroy_range@V-$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@Y.c)
 */

void __fastcall std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
