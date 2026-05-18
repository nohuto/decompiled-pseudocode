/*
 * XREFs of ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z @ 0x180097454
 * Callers:
 *     ?Add@ResourceManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x180070160 (-Add@ResourceManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 *     ??0?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@_KAEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180097334 (--0-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VR.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Engine::ResourceData::ResourceData(__int64 a1, __int64 a2, _QWORD *a3)
{
  std::_Ref_count_base *v6; // rcx

  std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>(
    (_QWORD *)a1,
    a2);
  *(_QWORD *)(a1 + 24) = a2;
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)(a1 + 32),
    a3);
  _Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 48));
  std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear((__int64 *)a1);
  _Mtx_unlock((_Mtx_t)(a1 + 48));
  v6 = (std::_Ref_count_base *)a3[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
