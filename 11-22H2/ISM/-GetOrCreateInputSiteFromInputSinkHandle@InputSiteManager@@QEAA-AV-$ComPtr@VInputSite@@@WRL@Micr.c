/*
 * XREFs of ?GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x1800714F8
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x1800209E0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180071148 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::GetOrCreateInputSiteFromInputSinkHandle(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-D8h] BYREF
  char v9; // [rsp+30h] [rbp-D0h]
  char v10; // [rsp+3Ch] [rbp-C4h]
  char v11; // [rsp+41h] [rbp-BFh]
  char v12; // [rsp+4Ch] [rbp-B4h]
  char v13; // [rsp+88h] [rbp-78h]
  char v14; // [rsp+C8h] [rbp-38h]
  char v15; // [rsp+108h] [rbp+8h]
  char v16; // [rsp+148h] [rbp+48h]
  char v17; // [rsp+188h] [rbp+88h]
  char v18; // [rsp+1D0h] [rbp+D0h]

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
  InputSiteManager::GetInputSiteFromInputSinkData(a1, a2, (LegacyInputSinkData *)&v8, 1);
  if ( v9 != -1LL && v9 && (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v8, v4, v5, v6);
  return a2;
}
