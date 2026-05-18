/*
 * XREFs of ??1Display@Engine@Spectre@@QEAA@XZ @ 0x1800572C4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VDisplay@Engine@Spectre@@@std@@EEAAXXZ @ 0x180038140 (-_Destroy@-$_Ref_count_obj2@VDisplay@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Check_C_return@std@@YAHH@Z @ 0x180011968 (-_Check_C_return@std@@YAHH@Z.c)
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ??1thread@std@@QEAA@XZ @ 0x180032088 (--1thread@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038548 (-_Tidy@-$vector@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCompo.c)
 *     ?_Tidy@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038590 (-_Tidy@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@VRe.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@U?$owner_less@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180057230 (--1-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Eng.c)
 *     ?DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV?$unique_lock@Vmutex@std@@@std@@@Z @ 0x1800578BC (-DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV-$unique_lock@Vmutex@std@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Spectre::Engine::Display::~Display(Spectre::Engine::Display *this)
{
  Spectre::Engine::Display *v1; // rbx
  struct _Mtx_internal_imp_t *v2; // rdi
  int v3; // ecx
  std::_Ref_count_base *v4; // rcx
  const char *v5; // rax
  const std::system_error *v6; // [rsp+20h] [rbp-28h] BYREF
  _Thrd_t v7; // [rsp+30h] [rbp-18h] BYREF
  struct _Mtx_internal_imp_t *v10; // [rsp+58h] [rbp+10h]

  try
  {
    v1 = this;
    v2 = (Spectre::Engine::Display *)((char *)this + 128);
    v10 = (Spectre::Engine::Display *)((char *)this + 128);
    std::unique_lock<std::mutex>::unique_lock<std::mutex>(
      (__int64)&v7,
      (Spectre::Engine::Display *)((char *)this + 128));
    if ( *((_DWORD *)v1 + 9) == 1 )
      Spectre::Engine::Display::DeleteRenderThread(v1, &v7);
    std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)&v7);
  }
  catch ( const std::system_error *v6 )
  {
    v5 = (const char *)(*(__int64 (__fastcall **)(const std::system_error *))(*(_QWORD *)v6 + 8LL))(v6);
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer_Display,
      3,
      "Exception in Display Destructor, message=%s",
      v5);
    v1 = this;
    v2 = v10;
  }
  if ( *((_DWORD *)v1 + 28) )
  {
    v7 = *(_Thrd_t *)((char *)v1 + 104);
    v3 = _Thrd_detach(&v7);
    std::_Check_C_return(v3);
    *(_OWORD *)((char *)v1 + 104) = 0LL;
  }
  _Cnd_destroy_in_situ((Spectre::Engine::Display *)((char *)v1 + 352));
  _Cnd_destroy_in_situ((Spectre::Engine::Display *)((char *)v1 + 280));
  _Cnd_destroy_in_situ((Spectre::Engine::Display *)((char *)v1 + 208));
  _Mtx_destroy_in_situ(v2);
  std::thread::~thread((Spectre::Engine::Display *)((char *)v1 + 104));
  std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Camera>,Spectre::Engine::Display::CameraViewport,std::owner_less<std::weak_ptr<Spectre::Engine::Camera>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>>,0>>::~_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Camera>,Spectre::Engine::Display::CameraViewport,std::owner_less<std::weak_ptr<Spectre::Engine::Camera>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>>,0>>((void **)v1 + 11);
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Tidy((__int64)v1 + 64);
  std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy((__int64)v1 + 40);
  v4 = (std::_Ref_count_base *)*((_QWORD *)v1 + 1);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
