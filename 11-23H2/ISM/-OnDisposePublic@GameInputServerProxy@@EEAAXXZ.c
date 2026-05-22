/*
 * XREFs of ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x180118110
 * Callers:
 *     <none>
 * Callees:
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18004B9E4 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1801181EC (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 */

void __fastcall GameInputServerProxy::OnDisposePublic(RTL_SRWLOCK *this)
{
  GameInputServerProxy::UnloadGameInput(this);
  SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
  GameInputServerProxy::s_singleton = 0LL;
}
