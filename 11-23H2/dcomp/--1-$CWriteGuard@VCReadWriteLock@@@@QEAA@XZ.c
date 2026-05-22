/*
 * XREFs of ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x180111694
 * Callers:
 *     ?GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z @ 0x18003D8D8 (-GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z.c)
 *     ?ConnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x18006BCE4 (-ConnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV12.c)
 * Callees:
 *     <none>
 */

void __fastcall CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)v1);
  }
}
