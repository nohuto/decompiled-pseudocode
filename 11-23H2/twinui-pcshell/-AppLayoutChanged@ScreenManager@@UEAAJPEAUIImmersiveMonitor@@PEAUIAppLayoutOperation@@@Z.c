/*
 * XREFs of ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1805C5640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1801BD1A0 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleAppToAppLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z @ 0x1805C5A7C (-HandleAppToAppLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z.c)
 *     ?HandleInPlaceCacheUpdateForLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z @ 0x1805C5CD8 (-HandleInPlaceCacheUpdateForLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z.c)
 */

__int64 __fastcall ScreenManager::AppLayoutChanged(
        ScreenManager *this,
        struct IImmersiveMonitor *a2,
        struct IAppLayoutOperation *a3)
{
  char v5; // al
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v10; // [rsp+40h] [rbp+18h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, struct IImmersiveMonitor *))(*(_QWORD *)a3 + 80LL))(
         a3,
         a2);
  if ( (v5 & 0x10) != 0 )
  {
    v6 = ScreenManager::HandleAppToAppLayoutChange((ScreenManager *)((char *)this - 16), a3, &v10);
    if ( v6 < 0 )
    {
      v7 = 201LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
LABEL_8:
    if ( !v10 )
      CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((__int64)this + 296);
    return 0LL;
  }
  if ( v5 >= 0 )
  {
    v6 = ScreenManager::HandleInPlaceCacheUpdateForLayoutChange((ScreenManager *)((char *)this - 16), a3, &v10);
    if ( v6 < 0 )
    {
      v7 = 217LL;
      goto LABEL_7;
    }
    goto LABEL_8;
  }
  return 0LL;
}
