/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1801BD1A0
 * Callers:
 *     ?Destroy@ScreenManager@@UEAAJXZ @ 0x180142F20 (-Destroy@ScreenManager@@UEAAJXZ.c)
 *     ??1ScreenManager@@UEAA@XZ @ 0x180142F68 (--1ScreenManager@@UEAA@XZ.c)
 *     wil::details::ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___::_ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___ @ 0x1805C5544 (wil--details--ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___--_ScopeExitFn__lambda_c9ed.c)
 *     ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1805C5640 (-AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z.c)
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1805C58D0 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 *     ?TabletModeChanged@ScreenManager@@UEAAJ_N@Z @ 0x1805C6250 (-TabletModeChanged@ScreenManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1CacheEntry@ScreenManager@@QEAA@XZ @ 0x1805C5570 (--1CacheEntry@ScreenManager@@QEAA@XZ.c)
 */

void __fastcall CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        ScreenManager::CacheEntry::~CacheEntry((ScreenManager::CacheEntry *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 24LL;
      }
      while ( v3 < *v1 );
    }
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
