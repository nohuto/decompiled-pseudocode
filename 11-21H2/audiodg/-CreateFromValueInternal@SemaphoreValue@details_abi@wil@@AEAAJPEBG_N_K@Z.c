/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1400240A4
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140023D74 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x14007B4C0 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F6A8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140021194 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400242D8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x14004F454 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  WCHAR *v6; // rax
  __int64 v7; // r11
  LONG v8; // edi
  __int64 v9; // rbp
  __int64 v10; // r8
  WCHAR *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // r8
  WCHAR v15; // r9
  WCHAR *v16; // rax
  LONG v17; // r8d
  unsigned __int64 v18; // r14
  LONG v19; // esi
  wil::details *Semaphore; // rax
  __int64 v21; // rdx
  wil::details *v22; // rcx
  __int64 v23; // r8
  const char *v24; // r9
  signed int LastErrorFailHr; // eax
  unsigned int v26; // esi
  __int64 v27; // rdx
  WCHAR *v28; // rax
  __int64 v29; // r8
  WCHAR *v30; // rcx
  __int64 v31; // rbx
  char *v32; // rax
  WCHAR v33; // dx
  WCHAR *v34; // rax
  wil::details *v35; // rax
  __int64 v36; // rdx
  wil::details *v37; // rcx
  __int64 v38; // r8
  const char *v39; // r9
  signed int v40; // eax
  unsigned int v41; // ebx
  DWORD dwFlags; // [rsp+20h] [rbp-258h]
  DWORD dwFlagsa; // [rsp+20h] [rbp-258h]
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  StringCchCopyW(Name, 0x104uLL, a2);
  v6 = Name;
  v7 = 260LL;
  v8 = 1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = 2147483646LL;
  v10 = (260 - v7) & -(__int64)(v7 != 0);
  if ( v7 )
  {
    v11 = &Name[v10];
    v12 = 260 - v10;
    if ( v10 != 260 )
    {
      v13 = 2147483646LL;
      v14 = (char *)((char *)L"_p0" - (char *)v11);
      do
      {
        if ( !v13 )
          break;
        v15 = *(WCHAR *)((char *)v11 + (_QWORD)v14);
        if ( !v15 )
          break;
        *v11 = v15;
        --v13;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    v16 = v11 - 1;
    if ( v12 )
      v16 = v11;
    *v16 = 0;
  }
  v17 = 1;
  v18 = a4 >> 31;
  v19 = a4 & 0x7FFFFFFF;
  if ( v19 )
    v17 = v19;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v19, v17, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this,
      Semaphore);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v22, v21, v23, v24);
    v26 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (unsigned int)"wil",
        (const char *)(unsigned int)LastErrorFailHr,
        dwFlags);
      return v26;
    }
  }
  v27 = 260LL;
  v28 = Name;
  do
  {
    if ( !*v28 )
      break;
    ++v28;
    --v27;
  }
  while ( v27 );
  v29 = (260 - v27) & -(__int64)(v27 != 0);
  if ( v27 )
  {
    v30 = &Name[v29];
    v31 = 260 - v29;
    if ( 260 != v29 )
    {
      v32 = (char *)((char *)L"h" - (char *)v30);
      do
      {
        if ( !v9 )
          break;
        v33 = *(WCHAR *)((char *)v30 + (_QWORD)v32);
        if ( !v33 )
          break;
        *v30 = v33;
        --v9;
        ++v30;
        --v31;
      }
      while ( v31 );
    }
    v34 = v30 - 1;
    if ( v31 )
      v34 = v30;
    *v34 = 0;
  }
  if ( (_DWORD)v18 )
    v8 = v18;
  v35 = (wil::details *)CreateSemaphoreExW(0LL, v18, v8, Name, 0, 0x1F0003u);
  if ( v35 )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this + 1,
      v35);
    return 0LL;
  }
  v40 = wil::details::GetLastErrorFailHr(v37, v36, v38, v39);
  v41 = v40;
  if ( v40 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (unsigned int)"wil",
    (const char *)(unsigned int)v40,
    dwFlagsa);
  return v41;
}
