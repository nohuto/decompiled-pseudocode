/*
 * XREFs of ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x1801C5CD0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180020500 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x1801529A0 (-GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ??$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@XZ @ 0x1801C48C4 (--$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSi.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList(__int64 a1, __int64 **a2, _DWORD *a3)
{
  bool v4; // di
  __int64 *v5; // rsi
  __int64 *v6; // rbp
  __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v4 = 0;
  v5 = *a2;
  v6 = a2[1];
  while ( v5 != v6 )
  {
    InputSite::GetAttachedObject<IVirtualTouchpadControllerProxy,VirtualTouchpadControllerProxy>(*v5, &v10);
    v7 = v10;
    if ( v10 )
    {
      if ( BamoVirtualTouchpadControllerProxy::GetIsActive((BamoVirtualTouchpadControllerProxy *)(v10 + 8)) )
        v8 = *(_DWORD *)(v7 + 248);
      else
        v8 = 0;
      *a3 = v8;
      v4 = v8 != 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 8LL))(v7 + 16);
      return v4;
    }
    ++v5;
  }
  return v4;
}
