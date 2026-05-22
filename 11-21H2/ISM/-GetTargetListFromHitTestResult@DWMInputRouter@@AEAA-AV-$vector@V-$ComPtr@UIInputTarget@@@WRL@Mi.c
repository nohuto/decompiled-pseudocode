/*
 * XREFs of ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18004E6D0
 * Callers:
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x18004E484 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180001B80 (--$_Emplace_reallocate@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIInputTarge.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180002840 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall DWMInputRouter::GetTargetListFromHitTestResult(
        _QWORD *a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD **v11; // rdi
  _QWORD **v12; // rbp
  _QWORD *v13; // r14
  struct IInputTarget **TargetFromInputSite; // rax
  struct IInputTarget **v15; // rdx
  struct IInputTarget *v17; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0LL;
  v9 = *(_QWORD *)(a4 + 8);
  if ( v9 )
    NtQueryCompositionInputSinkLuid(v9, &v18);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v10 = *(_QWORD *)(a4 + 104);
  v11 = *(_QWORD ***)(v10 - 24);
  v12 = *(_QWORD ***)(v10 - 16);
  if ( v11 != v12 )
  {
    v13 = a5;
    do
    {
      TargetFromInputSite = DWMInputRouter::GetTargetFromInputSite(a1, &v17, v11, a3, a4, (__int64)&v18, v13);
      v15 = (struct IInputTarget **)a2[1];
      if ( v15 == (struct IInputTarget **)a2[2] )
      {
        std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputTarget>>(
          a2,
          v15,
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
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v17);
      ++v11;
    }
    while ( v11 != v12 );
  }
  return a2;
}
