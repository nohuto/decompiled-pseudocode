/*
 * XREFs of ?Request@ResourceData@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x180097654
 * Callers:
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x180097208 (--$_Emplace_reallocate@AEBV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@-$vector@V-$sh.c)
 *     ?GetCompletedTaskHandler@Utils@Spectre@@YA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@XZ @ 0x1800DF714 (-GetCompletedTaskHandler@Utils@Spectre@@YA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::ResourceData::Request(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  void (__fastcall *v9)(__int64, __int64, _QWORD *); // r9
  __int64 v10; // r11
  _QWORD *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  _QWORD v14[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 48));
  if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(a1 + 32)) )
  {
    v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v14,
           v7);
    v9(v10, a2, v8);
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 8);
    if ( v11 == *(_QWORD **)(a1 + 16) )
    {
      std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> const &>(
        (char **)a1,
        *(char **)(a1 + 8),
        a3);
    }
    else
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v11, a3);
      *(_QWORD *)(a1 + 8) += 16LL;
    }
    Spectre::Utils::GetCompletedTaskHandler(a2);
  }
  _Mtx_unlock(v6);
  v12 = (std::_Ref_count_base *)a3[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return a2;
}
