/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z @ 0x100039FA (-GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPA_WIPB_WZZ @ 0x1000224F (-StringCchPrintfW@@YAJPA_WIPB_WZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YGJXZ @ 0x10002B6A (-GetLastErrorFailHr@details@wil@@YGJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YGXPAX@Z @ 0x10003471 (-CloseHandle@details@wil@@YGXPAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YGXPAX@Z @ 0x1000349C (-ReleaseMutex@details@wil@@YGXPAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@QAEXPAX@Z @ 0x10003F96 (-reset@-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@wil@@YGX0@ZU-$int.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QBE?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?ReleaseMutex@details@wil@@YGX0@ZU?$integral_constant@I$01@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@@2@PAKKH@Z @ 0x1000444E (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@wil@.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     __EH_epilog3_GS @ 0x100073B3 (__EH_epilog3_GS.c)
 *     __EH_prolog3_GS @ 0x10007401 (__EH_prolog3_GS.c)
 */

void *__fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        int a1,
        _DWORD *a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // eax
  wil::details *v5; // esi
  void *LastErrorFailHr; // edi
  bool v7; // cl
  void *ValueInternal; // eax
  _DWORD *v9; // eax
  void *v11; // eax
  int v12; // [esp-Ch] [ebp-244h]
  int v13; // [esp-8h] [ebp-240h]
  int v15; // [esp-4h] [ebp-23Ch]
  wil::details *v16; // [esp+0h] [ebp-238h]
  void *v17; // [esp+0h] [ebp-238h]
  unsigned int v18; // [esp+0h] [ebp-238h]
  unsigned int v19; // [esp+0h] [ebp-238h]
  bool *v20; // [esp+4h] [ebp-234h]
  const char *v21; // [esp+4h] [ebp-234h]
  const char *v22; // [esp+4h] [ebp-234h]
  const char *v23; // [esp+4h] [ebp-234h]
  int v24; // [esp+8h] [ebp-230h]
  int v25; // [esp+8h] [ebp-230h]
  int v26; // [esp+8h] [ebp-230h]
  wchar_t v27[2]; // [esp+10h] [ebp-228h] BYREF
  int v28; // [esp+14h] [ebp-224h]
  wil::details *v29; // [esp+18h] [ebp-220h] BYREF
  wil::details *v30; // [esp+1Ch] [ebp-21Ch] BYREF
  WCHAR Name[266]; // [esp+20h] [ebp-218h] BYREF
  int v32; // [esp+234h] [ebp-4h]
  int retaddr; // [esp+23Ch] [ebp+4h]

  *a2 = 0;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104u, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 64, a1);
  v30 = 0;
  v32 = 0;
  Mutex = (wil::details *)CreateMutexExW(0, Name, 0, 0x1F0001u);
  _reset___unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__QAEXPAX_Z(
    &v30,
    Mutex);
  v5 = v30;
  if ( !v30 )
  {
    LastErrorFailHr = (void *)wil::details::GetLastErrorFailHr(v16);
    goto LABEL_11;
  }
  _acquire___mutex_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QBE_AV__unique_any_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_ReleaseMutex_details_wil__YGX0_ZU__integral_constant_I_01_wistd__PAXPAX_0A___T_details_wil___details_wil___2_PAKKH_Z(
    &v30,
    &v29,
    v12,
    v13,
    v15);
  LOBYTE(v32) = 2;
  *(_DWORD *)v27 = 0;
  v28 = 0;
  ValueInternal = (void *)wil::details_abi::SemaphoreValue::TryGetValueInternal(
                            Name,
                            v27,
                            v7,
                            (unsigned __int64 *)v16,
                            v20);
  LastErrorFailHr = ValueInternal;
  if ( (int)ValueInternal >= 0 )
  {
    v9 = (_DWORD *)(4 * *(_DWORD *)v27);
    if ( 4 * *(_DWORD *)v27 )
    {
      *a2 = v9;
      *(_DWORD *)*a2 = *v9 + 1;
    }
    else
    {
      v11 = (void *)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
                      (size_t)Name,
                      (int)a2);
      LastErrorFailHr = v11;
      if ( (int)v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(retaddr, (wil::details::in1diag3 *)"wil", v11, (unsigned int)v17, v21, v24);
        goto LABEL_8;
      }
    }
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (wil::details::in1diag3 *)"wil",
      ValueInternal,
      (unsigned int)v17,
      v21,
      v24);
    wil::details::in1diag3::Return_Hr(retaddr, (wil::details::in1diag3 *)"wil", LastErrorFailHr, v18, v22, v25);
    wil::details::in1diag3::Return_Hr(retaddr, (wil::details::in1diag3 *)"wil", LastErrorFailHr, v19, v23, v26);
  }
LABEL_8:
  if ( v29 )
  {
    LOBYTE(v32) = 7;
    wil::details::ReleaseMutex(v29, v17);
  }
  v5 = v30;
LABEL_11:
  v32 = -1;
  if ( v5 )
  {
    v32 = 8;
    wil::details::CloseHandle(v5, v17);
  }
  return LastErrorFailHr;
}
