/*
 * XREFs of ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x18001E080
 * Callers:
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1800182B4 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180018300 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasEntry::NotifyOwner(CAtlasEntry *this)
{
  void (***v2)(void); // rcx
  void (**v3)(void); // rdx

  v2 = (void (***)(void))*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *v2;
    if ( *(_QWORD *)this )
      (*v3)();
    else
      v3[1]();
  }
}
