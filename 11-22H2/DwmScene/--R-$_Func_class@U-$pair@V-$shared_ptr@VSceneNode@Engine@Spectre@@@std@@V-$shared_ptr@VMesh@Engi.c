/*
 * XREFs of ??R?$_Func_class@U?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@$$V@std@@QEBA?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@1@XZ @ 0x180097DC0
 * Callers:
 *     ?SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@V?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@V?$function@$$A6A?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@XZ@5@V?$shared_ptr@VMaterial@Engine@Spectre@@@5@@Z @ 0x180097EB0 (-SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV-$shared_ptr@VImageProcessingCamera@En.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>,>::operator()(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a2;
}
