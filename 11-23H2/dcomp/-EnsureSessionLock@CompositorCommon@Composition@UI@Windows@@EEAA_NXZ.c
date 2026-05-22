/*
 * XREFs of ?EnsureSessionLock@CompositorCommon@Composition@UI@Windows@@EEAA_NXZ @ 0x180073C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

char __fastcall Windows::UI::Composition::CompositorCommon::EnsureSessionLock(
        Windows::UI::Composition::CompositorCommon *this)
{
  int v1; // edi
  int v4; // ecx

  v1 = *((_DWORD *)this - 24);
  if ( v1 == GetCurrentThreadId() )
    return 0;
  if ( *((_DWORD *)this - 11) )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession RIP");
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 112));
  v4 = *((_DWORD *)this - 18);
  if ( v4 != *((_DWORD *)this - 16) + *((_DWORD *)this - 17) )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession begin counts");
  *((_DWORD *)this - 18) = v4 + 1;
  return 1;
}
