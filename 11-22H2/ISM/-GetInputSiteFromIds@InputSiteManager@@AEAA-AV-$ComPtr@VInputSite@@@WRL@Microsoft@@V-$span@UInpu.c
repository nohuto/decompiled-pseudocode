/*
 * XREFs of ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x180071094
 * Callers:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180024A90 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180046810 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180071148 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x180070B6C (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 */

__int64 *__fastcall InputSiteManager::GetInputSiteFromIds(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbp
  __int64 *v7; // rsi
  __int64 *i; // r11
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v3 = a3[1];
  v6 = v3 + 16LL * *a3;
  if ( v3 == v6 )
  {
LABEL_9:
    *a2 = 0LL;
  }
  else
  {
    v7 = *(__int64 **)(a1 + 56);
    while ( 1 )
    {
      for ( i = v7; i != *(__int64 **)(a1 + 64); ++i )
      {
        InputSite::GetIdForNamespace(*i, (__int64)&v10, *(_DWORD *)v3);
        if ( v11 && v10 == *(_QWORD *)(v3 + 8) )
          break;
      }
      if ( i != *(__int64 **)(a1 + 64) )
        break;
      v3 += 16LL;
      if ( v3 == v6 )
        goto LABEL_9;
    }
    *a2 = *i;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a2);
  }
  return a2;
}
