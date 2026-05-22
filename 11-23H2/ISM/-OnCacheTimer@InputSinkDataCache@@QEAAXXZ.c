/*
 * XREFs of ?OnCacheTimer@InputSinkDataCache@@QEAAXXZ @ 0x18004DF40
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004DF78 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 */

void __fastcall InputSinkDataCache::OnCacheTimer(InputSinkDataCache *this)
{
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rax

  *((_BYTE *)this + 104) = 0;
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *))(*(_QWORD *)InputSiteHierarchyManager + 40LL))(InputSiteHierarchyManager);
}
