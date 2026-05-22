/*
 * XREFs of ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x18019B7F8
 * Callers:
 *     ?RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z @ 0x1801B97E0 (-RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180017B40 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x1800343F4 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIUIAHitTestInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIAHitTestInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180125508 (--$As@UIUIAHitTestInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x18019B98C (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
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
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _GUID v20; // [rsp+30h] [rbp-D0h] BYREF
  bool v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22[11]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v23[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-58h]
  __int128 v25[9]; // [rsp+C0h] [rbp-40h] BYREF

  *retstr = GUID_NULL;
  memset_0((char *)v25 + 12, 0, 0x7CuLL);
  *(_QWORD *)((char *)v25 + 4) = __PAIR64__(a4, a3);
  LODWORD(v25[0]) = 0;
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    v21,
    v25,
    *((__int64 (__fastcall ****)(_QWORD, __int128 *, void *))this + 23),
    (__int64)InputSiteManager,
    (__int64)InputSiteHierarchyManager);
  if ( v21[0] )
  {
    v10 = *(__int64 **)(v24 - 24);
    v11 = *(__int64 **)(v24 - 16);
    while ( v10 != v11 )
    {
      v12 = *v10;
      v13 = 0LL;
      *(_QWORD *)&v20.Data1 = 0LL;
      v14 = *(_QWORD *)(v12 + 488);
      v15 = *(_QWORD *)(v12 + 496);
      if ( v14 != v15 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IUIAHitTestInputObjectProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8),
                      (__int64 *)&v20) >= 0 )
            break;
          v14 += 16LL;
        }
        while ( v14 != v15 );
        v13 = *(_QWORD *)&v20.Data1;
      }
      if ( v13 )
      {
        *retstr = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v20);
        break;
      }
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v20);
      ++v10;
    }
  }
  v20 = *retstr;
  InputETW::UIAHitTest::RequestUIAHitTest(a3, a4, v21[0], &v20);
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v23);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    v22,
    v16,
    v17,
    v18);
  return retstr;
}
