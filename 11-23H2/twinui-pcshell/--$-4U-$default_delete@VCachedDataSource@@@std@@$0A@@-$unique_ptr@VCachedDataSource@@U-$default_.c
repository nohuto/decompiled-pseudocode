/*
 * XREFs of ??$?4U?$default_delete@VCachedDataSource@@@std@@$0A@@?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1807619DC
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CachedDataSource@@QEAA@XZ @ 0x180762BD0 (--1CachedDataSource@@QEAA@XZ.c)
 */

CachedDataSource **__fastcall std::unique_ptr<CachedDataSource>::operator=<std::default_delete<CachedDataSource>,0>(
        __int64 a1,
        CachedDataSource **a2)
{
  CachedDataSource *v2; // r8
  CachedDataSource *v3; // rbx

  if ( &XamlAltTabViewHost::s_cachedDataSource != a2 )
  {
    v2 = *a2;
    *a2 = 0LL;
    v3 = XamlAltTabViewHost::s_cachedDataSource;
    XamlAltTabViewHost::s_cachedDataSource = v2;
    if ( v3 )
    {
      CachedDataSource::~CachedDataSource(v3);
      operator delete(v3);
    }
  }
  return &XamlAltTabViewHost::s_cachedDataSource;
}
