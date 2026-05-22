/*
 * XREFs of ??1ExclusiveSrwLock@@QEAA@XZ @ 0x1800FBFA0
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18003360C (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExclusiveSrwLock::~ExclusiveSrwLock(PSRWLOCK *this)
{
  ReleaseSRWLockExclusive(*this);
}
