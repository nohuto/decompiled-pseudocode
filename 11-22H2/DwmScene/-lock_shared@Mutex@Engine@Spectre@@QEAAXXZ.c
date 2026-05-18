/*
 * XREFs of ?lock_shared@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4FC
 * Callers:
 *     ?GetSharedLock@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A19C (-GetSharedLock@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA?AV?$set@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800609DC (-GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA-AV-$set@V-$weak_ptr@VMaterial@Engine@Spe.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::Mutex::lock_shared(Spectre::Engine::Mutex *this)
{
  Spectre::Engine::Mutex::doLock<&public: void Spectre::Utils::SharedMutex::lock_shared(void)>(this);
}
