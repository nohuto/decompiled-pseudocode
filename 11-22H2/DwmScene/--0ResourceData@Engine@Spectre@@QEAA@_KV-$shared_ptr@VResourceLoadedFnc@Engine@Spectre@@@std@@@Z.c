/*
 * XREFs of ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z @ 0x1800974F0
 * Callers:
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x180097208 (--$_Emplace_reallocate@AEBV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@-$vector@V-$sh.c)
 *     ??0?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@_KAEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180097334 (--0-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VR.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Engine::ResourceData::ResourceData(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rcx
  std::_Ref_count_base *v7; // rcx

  std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>(
    (_QWORD *)a1,
    a2);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 48));
  std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear((__int64 *)a1);
  v6 = *(_QWORD **)(a1 + 8);
  if ( v6 == *(_QWORD **)(a1 + 16) )
  {
    std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> const &>(
      (char **)a1,
      *(char **)(a1 + 8),
      a3);
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v6, a3);
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  _Mtx_unlock((_Mtx_t)(a1 + 48));
  v7 = (std::_Ref_count_base *)a3[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
