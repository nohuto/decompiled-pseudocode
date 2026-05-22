/*
 * XREFs of ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18017244C
 * Callers:
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180173C14 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x1800233A8 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004E794 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x180056354 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x180070B6C (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800ADC14 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800B0244 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAttachedObject@UIManualResizeAreaClientProxy@@VBamoManualResizeAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoManualResizeAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x180170C40 (--$GetAttachedObject@UIManualResizeAreaClientProxy@@VBamoManualResizeAreaClientProxy@@@InputSite.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180170D88 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
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
  __int64 *v10; // r14
  __int64 *j; // rsi
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rax
  __int64 v13; // rdi
  struct BamoResizeControllerClientProxy *v14; // rbx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  char v18; // [rsp+28h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21[3]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v22[32]; // [rsp+60h] [rbp-20h] BYREF
  struct BamoManualResizeAreaClientProxy *v23; // [rsp+B0h] [rbp+30h] BYREF

  v23 = this;
  *a3 = 0LL;
  *a4 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  std::vector<InputSite *>::vector<InputSite *>(v21, (__int64)InputSiteManager + 56);
  for ( i = (__int64 *)v21[0]; ; ++i )
  {
    if ( i == (__int64 *)v21[1] )
    {
      v10 = (__int64 *)*((_QWORD *)&v19 + 1);
      goto LABEL_9;
    }
    InputSite::GetAttachedObject<IManualResizeAreaClientProxy,BamoManualResizeAreaClientProxy>(*i, &v23);
    v9 = v23;
    if ( v23 )
    {
      if ( v23 == a2 )
        break;
    }
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(struct BamoManualResizeAreaClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  InputSite::GetIdForNamespace(*i, (__int64)&v17, 0);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  if ( !v18 )
    std::_Throw_bad_optional_access();
  v13 = (*(__int64 (__fastcall **)(struct IInputSiteHierarchyManager *, _BYTE *, __int64))(*(_QWORD *)InputSiteHierarchyManager
                                                                                         + 24LL))(
          InputSiteHierarchyManager,
          v22,
          v17);
  if ( &v19 == (__int128 *)v13 )
  {
    v10 = (__int64 *)*((_QWORD *)&v19 + 1);
  }
  else
  {
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v19);
    *(_QWORD *)&v19 = *(_QWORD *)v13;
    v10 = *(__int64 **)(v13 + 8);
    *((_QWORD *)&v19 + 1) = v10;
    v20 = *(_QWORD *)(v13 + 16);
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v22);
  (*(void (__fastcall **)(struct BamoManualResizeAreaClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_9:
  for ( j = (__int64 *)v19; j != v10; ++j )
  {
    InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*j, (__int64 *)&v23);
    v14 = v23;
    if ( v23 )
    {
      v15 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
      v16 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v14 + 1) + 64LL))((__int64)v14 + 8);
      if ( IsEqualGUID(v16, v15) )
      {
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v23);
        *a3 = v14;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(j);
        *a4 = (struct InputSite *)*j;
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v23);
        break;
      }
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v23);
  }
  std::vector<_LUID>::_Tidy((__int64)v21);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v19);
}
