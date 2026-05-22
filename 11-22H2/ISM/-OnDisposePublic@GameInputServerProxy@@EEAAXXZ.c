/*
 * XREFs of ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x1801261A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18004C380 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18012627C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 */

void __fastcall GameInputServerProxy::OnDisposePublic(RTL_SRWLOCK *this)
{
  GameInputServerProxy::UnloadGameInput(this);
  SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
  GameInputServerProxy::s_singleton = 0LL;
}
