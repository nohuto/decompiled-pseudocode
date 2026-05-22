/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18019A990
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18000235C (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180017B40 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180018430 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x1800343F4 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x18004E484 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18012443C (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180193148 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?BuildRequestForHitTestInfo@HitTestHelper@@SA?AUHitTestRequest@1@PEAUHitTestInfo@@@Z @ 0x180198DF4 (-BuildRequestForHitTestInfo@HitTestHelper@@SA-AUHitTestRequest@1@PEAUHitTestInfo@@@Z.c)
 *     ??$?4U?$default_delete@UHitTestResult@@@std@@$0A@@?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180198F8C (--$-4U-$default_delete@UHitTestResult@@@std@@$0A@@-$unique_ptr@UHitTestResult@@U-$default_delete.c)
 *     ??$_Insert_or_assign@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x180199668 (--$_Insert_or_assign@AEBKAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr.c)
 *     ??$make_unique@UHitTestResult@@U1@$0A@@std@@YA?AV?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@0@$$QEAUHitTestResult@@@Z @ 0x180199A40 (--$make_unique@UHitTestResult@@U1@$0A@@std@@YA-AV-$unique_ptr@UHitTestResult@@U-$default_delete@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  unsigned int ViewInstanceIdFromInputSiteList; // eax
  __int64 *InitialTargetFromHitTestResult; // rax
  __int64 *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v23[24]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v24[9]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26[11]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v27[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v28; // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( a5 )
  {
    HitTestHelper::BuildRequestForHitTestInfo(v24, (unsigned int *)a2);
    InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
    InputSiteManager = ISMStatics::GetInputSiteManager();
    HitTestHelper::HitTestRequestWithRetry(
      v25,
      v24,
      *((__int64 (__fastcall ****)(_QWORD, __int128 *, void *))this + 23),
      (__int64)InputSiteManager,
      (__int64)InputSiteHierarchyManager);
    if ( v25[0] )
    {
      if ( (*((_BYTE *)a2 + 32) & 4) != 0 )
      {
        ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64 *)(v28 - 24));
        InputAttemptedTargetManager::ProcessInputAttempt(
          (InputAttemptedTargetManager *)(*((_QWORD *)this + 42) + 64LL),
          ViewInstanceIdFromInputSiteList);
      }
      if ( (unsigned __int64)(v26[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        InitialTargetFromHitTestResult = DWMInputRouter::GetInitialTargetFromHitTestResult(
                                           (int)this,
                                           (__int64 *)&v22,
                                           *(_DWORD *)a2,
                                           (__int64)v25,
                                           (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a4);
        Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)a3 + 2, InitialTargetFromHitTestResult);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v22);
        if ( *(_DWORD *)a2 != 2 && *(_DWORD *)a2 != 32 )
        {
          LODWORD(v22) = *((_DWORD *)a2 + 10);
          std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long const &,Microsoft::WRL::ComPtr<IInputTarget> &>(
            (float *)a3 + 6,
            (__int64)v23,
            (unsigned __int8 *)&v22,
            (__int64 *)a3 + 2);
        }
      }
      v14 = std::make_unique<HitTestResult,HitTestResult,0>((__int64 *)&v22, (__int64)v25);
      std::unique_ptr<HitTestResult>::operator=<std::default_delete<HitTestResult>,0>(
        (__int64 **)a3 + 22,
        (__int64 **)v14);
      v15 = (__int64 *)v22;
      if ( v22 )
      {
        std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v22 + 96);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
          v15 + 1,
          v16,
          v17,
          v18);
        operator delete(v15);
      }
      if ( (int)ContextualProcessorManager::OnHitTest(*((ContextualProcessorManager **)this + 32), a2, a3, 0LL, a5, 0LL) < 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)a3 + 2);
        *a5 = (struct IInputTarget *)*((_QWORD *)a3 + 2);
      }
    }
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v27);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
      v26,
      v19,
      v20,
      v21);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
