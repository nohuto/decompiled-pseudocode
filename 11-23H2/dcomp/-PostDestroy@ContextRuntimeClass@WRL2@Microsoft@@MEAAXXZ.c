/*
 * XREFs of ?PostDestroy@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ @ 0x18001C2F0
 * Callers:
 *     ?PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x18001C73C (-PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextRuntimeClass::PostDestroy(Microsoft::WRL2::ContextRuntimeClass **this)
{
  int v2; // eax

  if ( this[3] != (Microsoft::WRL2::ContextRuntimeClass *)this && *((_DWORD *)this[3] + 26) != GetCurrentThreadId()
    || (v2 = *((_DWORD *)this + 8), (v2 & 0x10) == 0) )
  {
    Microsoft::WRL2::FailFast::Unexpected("PostDestroy preconditions");
  }
  *((_DWORD *)this + 8) = v2 & 0xFFFFFFEF;
}
