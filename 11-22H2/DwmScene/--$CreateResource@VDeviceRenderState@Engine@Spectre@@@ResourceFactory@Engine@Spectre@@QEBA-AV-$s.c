/*
 * XREFs of ??$CreateResource@VDeviceRenderState@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceRenderState@Engine@Spectre@@@std@@XZ @ 0x180087F5C
 * Callers:
 *     ??$CreateResource@VDeviceRenderState@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceRenderState@Engine@Spectre@@@std@@XZ @ 0x180087EE4 (--$CreateResource@VDeviceRenderState@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@QEBA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@1@XZ @ 0x180011060 (--R-$_Func_class@V-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@QEBA-AV-$shared_.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180011C00 (-find@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6A-AV-$shared_ptr@VRendererResource@Engine@Spectr.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$dynamic_pointer_cast@VDeviceRenderState@Engine@Spectre@@VRendererResource@23@@std@@YA?AV?$shared_ptr@VDeviceRenderState@Engine@Spectre@@@0@AEBV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@@Z @ 0x180088024 (--$dynamic_pointer_cast@VDeviceRenderState@Engine@Spectre@@VRendererResource@23@@std@@YA-AV-$sha.c)
 */

_QWORD *__fastcall Spectre::Engine::ResourceFactory::CreateResource<Spectre::Engine::DeviceRenderState>(
        __int64 *a1,
        _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  _QWORD v6[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v11; // [rsp+88h] [rbp+20h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v11 = a1 + 2;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 2));
  v9 = __std_type_info_hash(&qword_1801C95F8);
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>,0>>::find(
    a1,
    (__int64)&v10,
    (unsigned __int64 *)&v9);
  if ( v10 == *a1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::_Func_class<std::shared_ptr<Spectre::Engine::RendererResource>,>::operator()(v10 + 40, (__int64)v7);
    std::dynamic_pointer_cast<Spectre::Engine::DeviceRenderState,Spectre::Engine::RendererResource>(v6, v7);
    *a2 = v6[0];
    a2[1] = v6[1];
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  _Mtx_unlock(v4);
  return a2;
}
