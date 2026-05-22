/*
 * XREFs of ?DestroyResources@CompositionIslandSite@Composition@UI@Windows@@AEAAXXZ @ 0x180010628
 * Callers:
 *     ?Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800105AC (-Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@PEAPEAV1234@PEAV1234@PEA_NPEAPEAX@Z @ 0x1801119D8 (-Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICom.c)
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandSite::DestroyResources(
        Windows::UI::Composition::CompositionIslandSite *this)
{
  char *v1; // rdi
  Microsoft::WRL2::ContextRuntimeClass *v3; // rcx

  v1 = (char *)this + 200;
  v3 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 25);
  if ( v3 )
  {
    if ( *((_QWORD *)v3 + 17) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(v1);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 208,
    0LL);
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
}
