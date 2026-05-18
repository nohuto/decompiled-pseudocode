/*
 * XREFs of ?SetResource@ResourceData@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z @ 0x180097728
 * Callers:
 *     ?Add@ResourceManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x180070160 (-Add@ResourceManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 *     ??4?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800975E4 (--4-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ResourceData::SetResource(__int64 *a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 i; // rbx
  _QWORD *v6; // rax
  void (__fastcall *v7)(__int64, _BYTE *, _QWORD *); // r9
  __int64 v8; // r11
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 6);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 6));
  std::shared_ptr<Spectre::Engine::Light>::operator=(a1 + 4, a2);
  std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::operator=((__int64 *)&v13, a1);
  std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear(a1);
  _Mtx_unlock(v4);
  for ( i = v13; i != *((_QWORD *)&v13 + 1); i += 16LL )
  {
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v10,
           a2);
    v7(v8, v11, v6);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v13);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
