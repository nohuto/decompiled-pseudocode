/*
 * XREFs of ??1Lockable@Engine@Spectre@@QEAA@XZ @ 0x180025B30
 * Callers:
 *     ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0 (--1RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     ??1IRenderOutput@Engine@Spectre@@UEAA@XZ @ 0x18002B8F0 (--1IRenderOutput@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     ??1Scene@Engine@Spectre@@QEAA@XZ @ 0x18003FFBC (--1Scene@Engine@Spectre@@QEAA@XZ.c)
 *     _Spectre::Engine::RenderDevice::RenderDevice_::_1_::dtor$2 @ 0x1800E4BBB (_Spectre--Engine--RenderDevice--RenderDevice_--_1_--dtor$2.c)
 *     _Spectre::dtor$3::Engine::Engine_::_1_::dtor$3 @ 0x1800E5473 (_Spectre--dtor$3--Engine--Engine_--_1_--dtor$3.c)
 *     _Spectre::dtor$7::Engine::Engine_::_1_::dtor$7 @ 0x1800E54CB (_Spectre--dtor$7--Engine--Engine_--_1_--dtor$7.c)
 *     _Spectre::dtor$12::Engine::Engine_::_1_::dtor$12 @ 0x1800E5545 (_Spectre--dtor$12--Engine--Engine_--_1_--dtor$12.c)
 *     _Spectre::dtor$21::Engine::Engine_::_1_::dtor$21 @ 0x1800E5626 (_Spectre--dtor$21--Engine--Engine_--_1_--dtor$21.c)
 *     _Spectre::dtor$27::Engine::Engine_::_1_::dtor$27 @ 0x1800E56BC (_Spectre--dtor$27--Engine--Engine_--_1_--dtor$27.c)
 *     _Spectre::dtor$0::Engine::_Engine_::_1_::dtor$0 @ 0x1800E5776 (_Spectre--dtor$0--Engine--_Engine_--_1_--dtor$0.c)
 *     _Spectre::dtor$4::Engine::_Engine_::_1_::dtor$4 @ 0x1800E57CE (_Spectre--dtor$4--Engine--_Engine_--_1_--dtor$4.c)
 *     _Spectre::dtor$9::Engine::_Engine_::_1_::dtor$9 @ 0x1800E5848 (_Spectre--dtor$9--Engine--_Engine_--_1_--dtor$9.c)
 *     _Spectre::dtor$18::Engine::_Engine_::_1_::dtor$18 @ 0x1800E5929 (_Spectre--dtor$18--Engine--_Engine_--_1_--dtor$18.c)
 *     _Spectre::dtor$24::Engine::_Engine_::_1_::dtor$24 @ 0x1800E59BF (_Spectre--dtor$24--Engine--_Engine_--_1_--dtor$24.c)
 *     _Spectre::Engine::Scene::Scene_::_1_::dtor$1 @ 0x1800E65F8 (_Spectre--Engine--Scene--Scene_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$weak_ptr@VLockable@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLockable@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x1800277CC (-_Tidy@-$vector@V-$weak_ptr@VLockable@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@VLockable@E.c)
 */

void __fastcall Spectre::Engine::Lockable::~Lockable(Spectre::Engine::Lockable *this)
{
  std::vector<std::weak_ptr<Spectre::Engine::Lockable>>::_Tidy((char *)this + 32);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)this + 8);
  Spectre::Utils::SharedMutex::~SharedMutex(this);
}
