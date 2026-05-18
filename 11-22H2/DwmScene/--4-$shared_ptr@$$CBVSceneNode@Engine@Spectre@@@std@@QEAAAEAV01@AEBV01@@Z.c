/*
 * XREFs of ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558
 * Callers:
 *     ?UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006B21C (-UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engin.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CloneInternal@Aimer@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x180096770 (-CloneInternal@Aimer@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 *     ??0VertexLayoutState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009D7E0 (--0VertexLayoutState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ?Reset@VertexLayoutState@Engine@Spectre@@UEAAXXZ @ 0x18009D8E0 (-Reset@VertexLayoutState@Engine@Spectre@@UEAAXXZ.c)
 *     ?Set@VertexLayoutState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009D910 (-Set@VertexLayoutState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?SetVertexLayout@VertexLayoutState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18009D9C0 (-SetVertexLayout@VertexLayoutState@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VVertexLayout@Engine@Sp.c)
 *     ??4?$array@V?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@$0M@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009DCC8 (--4-$array@V-$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@$0M@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Set@ConstantBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009DDD0 (-Set@ConstantBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?SetShaderConstantBuffer@ConstantBufferState@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@I@Z @ 0x18009DECC (-SetShaderConstantBuffer@ConstantBufferState@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV-$shared_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::SceneNode const>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v4 = a2[1];
  *a1 = *a2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
