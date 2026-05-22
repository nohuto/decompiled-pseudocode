/*
 * XREFs of ??1ExclusiveSrwLock@@QEAA@XZ @ 0x180125E68
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18004B640 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExclusiveSrwLock::~ExclusiveSrwLock(PSRWLOCK *this)
{
  ReleaseSRWLockExclusive(*this);
}
