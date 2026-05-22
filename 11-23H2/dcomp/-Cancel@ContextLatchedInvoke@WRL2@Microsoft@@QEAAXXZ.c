/*
 * XREFs of ?Cancel@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXXZ @ 0x1800875D4
 * Callers:
 *     ?PostDestroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ @ 0x180012A20 (-PostDestroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?NotifyListeners_Callback@CompositionAnchor@Composition@UI@Windows@@AEAAXXZ @ 0x180087494 (-NotifyListeners_Callback@CompositionAnchor@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextLatchedInvoke::Cancel(Microsoft::WRL2::ContextLatchedInvoke *this)
{
  _QWORD *v2; // rax
  Microsoft::WRL2::NestableRuntimeClass *v3; // rdi

  if ( *((_QWORD *)this + 8) )
  {
    v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 8);
    if ( *(_DWORD *)(*((_QWORD *)v3 + 3) + 104LL) != GetCurrentThreadId() )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    *((_QWORD *)this + 8) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v2 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    *v2 = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_BYTE *)this + 72) = 0;
}
