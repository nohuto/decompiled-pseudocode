/*
 * XREFs of ?HasReadAccess@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A270
 * Callers:
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 * Callees:
 *     ?GetThreadingMode@Lockable@Engine@Spectre@@QEBA?AW4ThreadingMode@123@XZ @ 0x18002A254 (-GetThreadingMode@Lockable@Engine@Spectre@@QEBA-AW4ThreadingMode@123@XZ.c)
 *     ?HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A260 (-HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasSharedLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A2B4 (-HasSharedLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 */

char __fastcall Spectre::Engine::Lockable::HasReadAccess(Spectre::Engine::Lockable *this)
{
  Spectre::Engine::Lockable *v2; // rcx
  char v3; // bl

  if ( (unsigned int)Spectre::Engine::Lockable::GetThreadingMode((__int64)this) != 1 )
    return 1;
  v3 = 0;
  if ( Spectre::Engine::Lockable::HasSharedLock(v2) || Spectre::Engine::Lockable::HasExclusiveLock(this) )
    return 1;
  return v3;
}
