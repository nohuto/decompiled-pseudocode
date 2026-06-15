/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x14004BA7C
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x14004D104 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140088760 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14001C758 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001DEC4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140020820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x14004EB54 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        size_t *a2,
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
  __int64 v28; // rdx
  WCHAR *v29; // rax
  __int64 v30; // r8
  WCHAR *v31; // rcx
  __int64 v32; // rbx
  char *v33; // rax
  WCHAR v34; // dx
  WCHAR *v35; // rax
  wil::details *v36; // rax
  __int64 v37; // rdx
  wil::details *v38; // rcx
  __int64 v39; // r8
  const char *v40; // r9
  signed int v41; // eax
  unsigned int v42; // ebx
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
  v28 = 260LL;
  v29 = Name;
  do
  {
    if ( !*v29 )
      break;
    ++v29;
    --v28;
  }
  while ( v28 );
  v30 = (260 - v28) & -(__int64)(v28 != 0);
  if ( v28 )
  {
    v31 = &Name[v30];
    v32 = 260 - v30;
    if ( 260 != v30 )
    {
      v33 = (char *)((char *)L"h" - (char *)v31);
      do
      {
        if ( !v9 )
          break;
        v34 = *(WCHAR *)((char *)v31 + (_QWORD)v33);
        if ( !v34 )
          break;
        *v31 = v34;
        --v9;
        ++v31;
        --v32;
      }
      while ( v32 );
    }
    v35 = v31 - 1;
    if ( v32 )
      v35 = v31;
    *v35 = 0;
  }
  if ( (_DWORD)v18 )
    v8 = v18;
  v36 = (wil::details *)CreateSemaphoreExW(0LL, v18, v8, Name, 0, 0x1F0003u);
  if ( v36 )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this + 1,
      v36);
  }
  else
  {
    v41 = wil::details::GetLastErrorFailHr(v38, v37, v39, v40);
    v42 = v41;
    if ( v41 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (unsigned int)"wil",
        (const char *)(unsigned int)v41,
        dwFlagsa);
      return v42;
    }
  }
  return 0LL;
}
