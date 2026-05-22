/*
 * XREFs of ?OnModuleUpdated@GameInputServerProxy@@CAXPEAX@Z @ 0x180118140
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004AE7C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 */

void __fastcall GameInputServerProxy::OnModuleUpdated(GameInputServerProxy *this)
{
  AcquireSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  if ( this && this == GameInputServerProxy::s_singleton && (int)GameInputServerProxy::LoadGameInput(this) < 0 )
    __fastfail(7u);
  ReleaseSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
}
