/*
 * XREFs of ?SetTextureAsync@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@_KPEAVResourceManager@23@@Z @ 0x18004499C
 * Callers:
 *     ?SetTextureAsync@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KPEAVResourceManager@23@@Z @ 0x180044924 (-SetTextureAsync@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$_Try_emplace@AEBW4ShaderProperty@Engine@Spectre@@$$V@?$map@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@std@@_N@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043664 (--$_Try_emplace@AEBW4ShaderProperty@Engine@Spectre@@$$V@-$map@W4ShaderProperty@Engine@Spectre@@W.c)
 *     ??$make_shared@VTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@V?$shared_ptr@VMaterial@Engine@Spectre@@@std@@AEAW4ShaderProperty@34@AEA_K@std@@YA?AV?$shared_ptr@VTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VMaterial@Engine@Spectre@@@0@AEAW4ShaderProperty@Engine@Spectre@@AEA_K@Z @ 0x180043828 (--$make_shared@VTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@V-$shared_ptr@VMa.c)
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Material::SetTextureAsync(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        Spectre::Engine::ResourceManager *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v10; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  std::_Ref_count_base *v12; // [rsp+58h] [rbp-8h]
  unsigned __int16 v13; // [rsp+88h] [rbp+28h] BYREF

  v13 = a2;
  *(_DWORD *)(*(_QWORD *)std::map<enum Spectre::Engine::ShaderProperty,enum Spectre::Engine::Material::ETextureState>::_Try_emplace<enum Spectre::Engine::ShaderProperty const &,>(
                           (__int64 *)(a1 + 200),
                           (__int64)&v11,
                           &v13)
            + 32LL) = 1;
  v6 = (_QWORD *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 96, &v11);
  v7 = std::make_shared<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler,std::shared_ptr<Spectre::Engine::Material>,enum Spectre::Engine::ShaderProperty &,unsigned __int64 &>(
         &v9,
         v6);
  *v7 = 0LL;
  v7[1] = 0LL;
  Spectre::Engine::ResourceManager::Request(a4);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
