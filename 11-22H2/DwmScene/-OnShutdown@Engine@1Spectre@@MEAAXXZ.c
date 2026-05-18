/*
 * XREFs of ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ?CheckAllLoadersDestroyed@Engine@1Spectre@@IEAAXXZ @ 0x180032A64 (-CheckAllLoadersDestroyed@Engine@1Spectre@@IEAAXXZ.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?GetDeviceCount@Engine@1Spectre@@QEBAIXZ @ 0x1800341E4 (-GetDeviceCount@Engine@1Spectre@@QEBAIXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@U?$owner_less@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800385D8 (-clear@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VScene@Engine@Spectre@@@std@@V-$vector@V-$shared_ptr@.c)
 *     ?join@thread@std@@QEAAXXZ @ 0x180038800 (-join@thread@std@@QEAAXXZ.c)
 *     ?Release@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800504D0 (-Release@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::OnShutdown(Spectre::Engine::Engine *this)
{
  int DeviceCount; // eax
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5[2]; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Engine *)((char *)this + 8));
  while ( (unsigned int)Spectre::Engine::Engine::GetDeviceCount(this) )
  {
    DeviceCount = Spectre::Engine::Engine::GetDeviceCount(this);
    Spectre::Engine::Engine::GetDevice(this, v5, DeviceCount - 1);
    Spectre::Engine::Engine::DeleteDevice(this, v5);
    if ( v5[1] )
      std::_Ref_count_base::_Decref(v5[1]);
  }
  Spectre::Engine::ShaderManager::Release(*((Spectre::Engine::ShaderManager **)this + 64));
  *(_OWORD *)v5 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 64, (__int64 *)v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  Spectre::Engine::Engine::CheckAllLoadersDestroyed(this);
  std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>,0>>::clear((char *)this + 728);
  *((_QWORD *)this + 60) = 0LL;
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 61);
  *((_QWORD *)this + 61) = 0LL;
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  *((_QWORD *)this + 62) = 0LL;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 63);
  *((_QWORD *)this + 63) = 0LL;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear((__int64 *)this + 88);
  if ( *((_DWORD *)this + 298) )
  {
    std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)v5, (Spectre::Engine::Engine *)((char *)this + 1280));
    *((_BYTE *)this + 1360) = 1;
    _Cnd_signal((Spectre::Engine::Engine *)((char *)this + 1208));
    std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v5);
    std::thread::join((Spectre::Engine::Engine *)((char *)this + 1184));
  }
}
