/*
 * XREFs of ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x1800FC350
 * Callers:
 *     <none>
 * Callees:
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x180034164 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800FC4EC (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 */

void __fastcall GameInputServerProxy::OnDisposePublic(RTL_SRWLOCK *this)
{
  GameInputServerProxy::UnloadGameInput(this);
  SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
  GameInputServerProxy::s_singleton = 0LL;
}
