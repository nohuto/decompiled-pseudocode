/*
 * XREFs of ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801C757C
 * Callers:
 *     ?RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z @ 0x1801E5390 (-RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000F520 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180020ED0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x1800233A8 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004E794 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIUIAHitTestInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIAHitTestInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014E028 (--$As@UIUIAHitTestInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x1801C7720 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct _GUID *__fastcall DWMInputRouter::RequestUIAHitTest(
        DWMInputRouter *this,
        struct _GUID *__return_ptr retstr,
        unsigned int a3,
        unsigned int a4)
{
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // r9
  struct _GUID v19; // [rsp+30h] [rbp-D0h] BYREF
  bool v20[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int128 v24[9]; // [rsp+C0h] [rbp-40h] BYREF

  *retstr = GUID_NULL;
  memset_0((char *)v24 + 12, 0, 0x7CuLL);
  *(_QWORD *)((char *)v24 + 4) = __PAIR64__(a4, a3);
  LODWORD(v24[0]) = 0;
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    v20,
    v24,
    *((__int64 (__fastcall ****)(_QWORD, __int128 *, void *))this + 23),
    (__int64)InputSiteManager,
    (__int64)InputSiteHierarchyManager);
  if ( v20[0] )
  {
    v10 = *(__int64 **)(v23 - 24);
    v11 = *(__int64 **)(v23 - 16);
    while ( v10 != v11 )
    {
      v12 = *v10;
      v13 = 0LL;
      *(_QWORD *)&v19.Data1 = 0LL;
      v14 = *(_QWORD *)(v12 + 488);
      v15 = *(_QWORD *)(v12 + 496);
      if ( v14 != v15 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IUIAHitTestInputObjectProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8),
                      (__int64 *)&v19) >= 0 )
            break;
          v14 += 16LL;
        }
        while ( v14 != v15 );
        v13 = *(_QWORD *)&v19.Data1;
      }
      if ( v13 )
      {
        *retstr = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
        break;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
      ++v10;
    }
  }
  v19 = *retstr;
  InputETW::UIAHitTest::RequestUIAHitTest(a3, a4, v20[0], &v19);
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v22);
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v21, v21 - 1, v16, v17);
  return retstr;
}
