/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ @ 0x10004163
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x100077B0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?ReleaseMutex@details@wil@@YGXPAX@Z @ 0x1000349C (-ReleaseMutex@details@wil@@YGXPAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@QAEXPAX@Z @ 0x10003F96 (-reset@-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@wil@@YGX0@ZU-$int.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ @ 0x10004272 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QBE?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?ReleaseMutex@details@wil@@YGX0@ZU?$integral_constant@I$01@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@@2@PAKKH@Z @ 0x1000444E (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@wil@.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 *     __EH_epilog3 @ 0x10007399 (__EH_epilog3.c)
 *     __EH_prolog3 @ 0x100073C8 (__EH_prolog3.c)
 */

void __thiscall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(
        wil::details **this)
{
  bool v2; // zf
  wil::details *v3; // esi
  DWORD LastError; // edi
  HANDLE ProcessHeap; // eax
  void *v6; // [esp+0h] [ebp-20h]
  wil::details *v7; // [esp+10h] [ebp-10h] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress
    && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress(wil::details::g_pfnDllShutdownInProgress) )
  {
    *this = (wil::details *)((char *)*this - 1);
  }
  else
  {
    _acquire___mutex_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QBE_AV__unique_any_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_ReleaseMutex_details_wil__YGX0_ZU__integral_constant_I_01_wistd__PAXPAX_0A___T_details_wil___details_wil___2_PAKKH_Z(
      this + 1,
      &v7);
    v2 = *this == (wil::details *)1;
    *this = (wil::details *)((char *)*this - 1);
    if ( v2 )
    {
      v3 = 0;
      _reset___unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__QAEXPAX_Z(
        this + 2,
        0);
      _reset___unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__QAEXPAX_Z(
        this + 3,
        0);
      if ( v7 )
      {
        LastError = GetLastError();
        v8 = 0;
        wil::details::ReleaseMutex(v7, v6);
        v8 = -1;
        SetLastError(LastError);
      }
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(v6);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
    else
    {
      v3 = v7;
    }
    if ( v3 )
    {
      v8 = 1;
      wil::details::ReleaseMutex(v3, v6);
    }
  }
}
