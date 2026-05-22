/*
 * XREFs of ?GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x18004DFE8
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180014E30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180013370 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::GetOrCreateInputSiteFromInputSinkHandle(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-E0h] BYREF
  char v9; // [rsp+28h] [rbp-D8h]
  char v10; // [rsp+34h] [rbp-CCh]
  char v11; // [rsp+39h] [rbp-C7h]
  char v12; // [rsp+44h] [rbp-BCh]
  char v13; // [rsp+80h] [rbp-80h]
  char v14; // [rsp+C0h] [rbp-40h]
  char v15; // [rsp+100h] [rbp+0h]
  char v16; // [rsp+140h] [rbp+40h]
  char v17; // [rsp+180h] [rbp+80h]
  char v18; // [rsp+1C8h] [rbp+C8h]

  v8 = *a3;
  *a3 = 0LL;
  v9 = 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  InputSiteManager::GetInputSiteFromInputSinkData(a1, a2, &v8, 1);
  if ( v9 != -1LL && v9 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
      &v8,
      v4,
      v5,
      v6);
  return a2;
}
