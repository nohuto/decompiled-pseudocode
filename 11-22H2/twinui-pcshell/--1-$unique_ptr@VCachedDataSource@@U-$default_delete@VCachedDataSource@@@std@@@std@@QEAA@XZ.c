/*
 * XREFs of ??1?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ @ 0x1801BF460
 * Callers:
 *     _dynamic_atexit_destructor_for__XamlAltTabViewHost::s_cachedDataSource__ @ 0x1802C8320 (_dynamic_atexit_destructor_for__XamlAltTabViewHost--s_cachedDataSource__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CachedDataSource@@QEAA@XZ @ 0x180762BD0 (--1CachedDataSource@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CachedDataSource>::~unique_ptr<CachedDataSource>(CachedDataSource **a1)
{
  CachedDataSource *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CachedDataSource::~CachedDataSource(*a1);
    operator delete(v1, 0x38uLL);
  }
}
