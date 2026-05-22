/*
 * XREFs of ?NotifyInputSiteIdentityRemoved@InputSiteManager@@QEAAXUInputSiteId@@@Z @ 0x18013F2DC
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001F960 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18005EEE0 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z @ 0x18013EF54 (-RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z.c)
 */

void __fastcall InputSiteManager::NotifyInputSiteIdentityRemoved(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v2 = *(__int64 **)(a1 + 56);
  v4 = *(__int64 **)(a1 + 64);
  while ( v2 != v4 )
  {
    InputSite::GetIdForNamespace(*v2, (__int64)&v8, *(_DWORD *)a2);
    if ( v9 )
    {
      if ( v8 == *(_QWORD *)(a2 + 8) )
        InputSite::RemoveIdForNamespace(v5, v6, v6, v7);
    }
    ++v2;
  }
}
