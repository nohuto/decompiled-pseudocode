/*
 * XREFs of ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801455A4
 * Callers:
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x1801471F0 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x1800343F4 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18004DA74 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180084600 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x180086B38 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180086B74 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetAttachedObject@UIManualResizeAreaClientProxy@@VBamoManualResizeAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoManualResizeAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x180143C94 (--$GetAttachedObject@UIManualResizeAreaClientProxy@@VBamoManualResizeAreaClientProxy@@@InputSite.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180143DDC (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ResizeProcessor::GetControllerForManualResize(
        ResizeProcessor *this,
        struct BamoManualResizeAreaClientProxy *a2,
        struct BamoResizeControllerClientProxy **a3,
        struct InputSite **a4)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *i; // rdi
  struct BamoManualResizeAreaClientProxy *v9; // rbx
  __int64 *v10; // rsi
  __int64 *j; // rdi
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rax
  __int64 v13; // rdi
  struct BamoResizeControllerClientProxy *v14; // rbx
  _QWORD *v15; // r12
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  char v19; // [rsp+28h] [rbp-58h]
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  _QWORD v22[3]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+60h] [rbp-20h] BYREF
  struct BamoManualResizeAreaClientProxy *v24; // [rsp+B0h] [rbp+30h] BYREF

  v24 = this;
  *a3 = 0LL;
  *a4 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  std::vector<InputSite *>::vector<InputSite *>(v22, (__int64)InputSiteManager + 56);
  for ( i = (__int64 *)v22[0]; ; ++i )
  {
    if ( i == (__int64 *)v22[1] )
    {
      v10 = (__int64 *)*((_QWORD *)&v20 + 1);
      goto LABEL_9;
    }
    InputSite::GetAttachedObject<IManualResizeAreaClientProxy,BamoManualResizeAreaClientProxy>(*i, &v24);
    v9 = v24;
    if ( v24 )
    {
      if ( v24 == a2 )
        break;
    }
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct BamoManualResizeAreaClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  InputSite::GetIdForNamespace(*i, (__int64)&v18, 0);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  if ( !v19 )
    std::_Throw_bad_optional_access();
  v13 = (*(__int64 (__fastcall **)(struct IInputSiteHierarchyManager *, _BYTE *, __int64))(*(_QWORD *)InputSiteHierarchyManager
                                                                                         + 24LL))(
          InputSiteHierarchyManager,
          v23,
          v18);
  if ( &v20 == (__int128 *)v13 )
  {
    v10 = (__int64 *)*((_QWORD *)&v20 + 1);
  }
  else
  {
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v20);
    *(_QWORD *)&v20 = *(_QWORD *)v13;
    v10 = *(__int64 **)(v13 + 8);
    *((_QWORD *)&v20 + 1) = v10;
    v21 = *(_QWORD *)(v13 + 16);
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v23);
  (*(void (__fastcall **)(struct BamoManualResizeAreaClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_9:
  for ( j = (__int64 *)v20; j != v10; ++j )
  {
    InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*j, (__int64 *)&v24);
    v14 = v24;
    if ( v24 )
    {
      v15 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
      v16 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v14 + 1) + 64LL))((__int64)v14 + 8);
      v17 = *v16 - *v15;
      if ( *v16 == *v15 )
        v17 = v16[1] - v15[1];
      if ( !v17 )
      {
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v24);
        *a3 = v14;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(j);
        *a4 = (struct InputSite *)*j;
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v24);
        break;
      }
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v24);
  }
  std::vector<_LUID>::_Tidy((__int64)v22);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v20);
}
