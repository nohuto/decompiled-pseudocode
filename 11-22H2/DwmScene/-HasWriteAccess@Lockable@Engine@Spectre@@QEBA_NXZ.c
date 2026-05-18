/*
 * XREFs of ?HasWriteAccess@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A2C4
 * Callers:
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 * Callees:
 *     ?GetThreadingMode@Lockable@Engine@Spectre@@QEBA?AW4ThreadingMode@123@XZ @ 0x18002A254 (-GetThreadingMode@Lockable@Engine@Spectre@@QEBA-AW4ThreadingMode@123@XZ.c)
 *     ?HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A260 (-HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 */

char __fastcall Spectre::Engine::Lockable::HasWriteAccess(Spectre::Engine::Lockable *this)
{
  Spectre::Engine::Lockable *v1; // rcx
  bool HasExclusiveLock; // al
  char v3; // cl

  if ( (unsigned int)Spectre::Engine::Lockable::GetThreadingMode((__int64)this) != 1 )
    return 1;
  HasExclusiveLock = Spectre::Engine::Lockable::HasExclusiveLock(v1);
  v3 = 0;
  if ( HasExclusiveLock )
    return 1;
  return v3;
}
