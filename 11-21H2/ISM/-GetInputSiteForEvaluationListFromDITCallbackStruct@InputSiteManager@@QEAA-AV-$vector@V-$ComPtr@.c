/*
 * XREFs of ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18004DBD8
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180017B40 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180002FB4 (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180019210 (-_Reallocate_exactly@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInpu.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18004DE80 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x180080E88 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rdx
  unsigned __int64 v19[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h]

  v7 = *(__int64 **)(a3 + 120);
  gsl::details::extent_type<-1>::extent_type<-1>(v19, *(unsigned int *)(a3 + 128), a3, a4);
  v12 = v19[0];
  if ( v19[0] == -1LL || !v7 && v19[0] )
  {
    _o_terminate(v9, v8, v10, v11);
    __debugbreak();
    return InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct_::_1_::dtor_0();
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    if ( v12 )
    {
      if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(v9);
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate_exactly(a2, v12);
    }
    v13 = &v7[v12];
    while ( v7 != v13 )
    {
      v21 = *v7;
      InputSiteManager::GetInputSiteFromId(a1, &v20, 0, v21);
      v14 = v20;
      if ( v20 )
      {
        v15 = (__int64 *)a2[1];
        if ( v15 == (__int64 *)a2[2] )
        {
          std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
            a2,
            v15,
            &v20);
          v14 = v20;
        }
        else
        {
          *v15 = v20;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v15);
          a2[1] += 8LL;
        }
      }
      if ( v14 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      ++v7;
    }
    if ( *a2 == a2[1] && *(_QWORD *)(a3 + 24) )
    {
      InputSiteManager::GetInputSiteFromInputSinkHandle(a1, &v20);
      v16 = v20;
      if ( v20 )
      {
        v17 = (__int64 *)a2[1];
        if ( v17 == (__int64 *)a2[2] )
        {
          std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
            a2,
            v17,
            &v20);
        }
        else
        {
          *v17 = v20;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v17);
          a2[1] += 8LL;
        }
        v16 = v20;
      }
      if ( v16 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    return (__int64)a2;
  }
}
