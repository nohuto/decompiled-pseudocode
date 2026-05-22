/*
 * XREFs of ?Release@GameInputServerProxy@@UEAAKXZ @ 0x1800FC4A0
 * Callers:
 *     ?Release@GameInputServerProxy@@W7EAAKXZ @ 0x180050300 (-Release@GameInputServerProxy@@W7EAAKXZ.c)
 *     ?Release@GameInputServerProxy@@WBA@EAAKXZ @ 0x180050320 (-Release@GameInputServerProxy@@WBA@EAAKXZ.c)
 *     ?Release@GameInputServerProxy@@WBI@EAAKXZ @ 0x180050340 (-Release@GameInputServerProxy@@WBI@EAAKXZ.c)
 * Callees:
 *     ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800FC588 (-ReleasePublicReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall GameInputServerProxy::Release(GameInputServerProxy *this)
{
  AcquireSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  LODWORD(this) = SharedObjectBase::ReleasePublicReference((GameInputServerProxy *)((char *)this - 16));
  ReleaseSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  return (unsigned int)this;
}
