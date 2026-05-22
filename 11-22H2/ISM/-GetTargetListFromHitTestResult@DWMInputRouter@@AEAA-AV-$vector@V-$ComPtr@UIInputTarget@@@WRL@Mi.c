/*
 * XREFs of ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x1801C6844
 * Callers:
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x1801C6270 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801C4DF4 (--$_Emplace_reallocate@V-$ComPtr@UICursor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICursor@@@WRL@Mi.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1801C64E4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall DWMInputRouter::GetTargetListFromHitTestResult(
        DWMInputRouter *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        DWMInputRouter *a5)
{
  int v6; // r15d
  __int64 v9; // rcx
  __int64 v10; // rax
  DWMInputRouter **v11; // rdi
  DWMInputRouter **v12; // rbp
  DWMInputRouter *v13; // r14
  __int64 *TargetFromInputSite; // rax
  __int64 *v15; // rdx
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v6 = a3;
  v18 = 0LL;
  v9 = *(_QWORD *)(a4 + 8);
  if ( v9 )
    NtQueryCompositionInputSinkLuid(v9, &v18, a3);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v10 = *(_QWORD *)(a4 + 104);
  v11 = *(DWMInputRouter ***)(v10 - 24);
  v12 = *(DWMInputRouter ***)(v10 - 16);
  if ( v11 != v12 )
  {
    v13 = a5;
    do
    {
      TargetFromInputSite = DWMInputRouter::GetTargetFromInputSite(a1, &v17, v11, v6, a4, &v18, v13);
      v15 = (__int64 *)a2[1];
      if ( v15 == (__int64 *)a2[2] )
      {
        std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
          a2,
          (__int64)v15,
          TargetFromInputSite);
      }
      else
      {
        *v15 = 0LL;
        if ( v15 != TargetFromInputSite )
        {
          *v15 = *TargetFromInputSite;
          *TargetFromInputSite = 0LL;
        }
        a2[1] += 8LL;
      }
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v17);
      ++v11;
    }
    while ( v11 != v12 );
  }
  return a2;
}
