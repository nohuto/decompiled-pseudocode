/*
 * XREFs of ?ProcessNewResources@Engine@1Spectre@@IEAAXXZ @ 0x180035AA8
 * Callers:
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ??$_Insert_range@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@1@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@1@1Uforward_iterator_tag@1@@Z @ 0x18002F200 (--$_Insert_range@PEAV-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VR.c)
 *     ?clear@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x180038618 (-clear@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@VRe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::ProcessNewResources(Spectre::Engine::Engine *this)
{
  _BYTE v2[24]; // [rsp+30h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 808), (__int64)v2);
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Insert_range<std::weak_ptr<Spectre::Engine::RendererResource> *>(
    (__int64)this + 888,
    *((char **)this + 112),
    *((_QWORD *)this + 108),
    *((_QWORD *)this + 109));
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::clear((char *)this + 864);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v2);
}
