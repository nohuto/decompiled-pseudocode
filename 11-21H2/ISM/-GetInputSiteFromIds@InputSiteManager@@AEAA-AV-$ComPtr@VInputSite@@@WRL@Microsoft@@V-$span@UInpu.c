/*
 * XREFs of ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x1800018D0
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180013370 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180124860 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::GetInputSiteFromIds(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // r11
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 *v7; // r10
  __int64 *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx

  v4 = a3[1];
  v5 = v4 + 16LL * *a3;
  if ( v4 == v5 )
  {
LABEL_16:
    *a2 = 0LL;
  }
  else
  {
    v6 = *(__int64 **)(a1 + 56);
    v7 = *(__int64 **)(a1 + 64);
    while ( 1 )
    {
      v8 = v6;
      if ( v6 != v7 )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(*v8 + 24);
          v10 = *(_QWORD *)(*v8 + 16);
          if ( v10 != v9 )
          {
            do
            {
              if ( *(_DWORD *)v10 == *(_DWORD *)v4 )
                break;
              v10 += 16LL;
            }
            while ( v10 != v9 );
            if ( v10 != v9 && *(_QWORD *)(v10 + 8) == *(_QWORD *)(v4 + 8) )
              break;
          }
          if ( ++v8 == v7 )
            goto LABEL_15;
        }
      }
      if ( v8 != v7 )
        break;
LABEL_15:
      v4 += 16LL;
      if ( v4 == v5 )
        goto LABEL_16;
    }
    v11 = *v8;
    *a2 = *v8;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return a2;
}
