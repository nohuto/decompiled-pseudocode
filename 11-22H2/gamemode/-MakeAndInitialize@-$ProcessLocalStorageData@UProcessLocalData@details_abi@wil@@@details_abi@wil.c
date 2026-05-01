/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEB_W$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003B64
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800036E8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEA_W_KPEB_W@Z @ 0x1800012B4 (-StringCchCatW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180001754 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001DE4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800027A8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002828 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180003668 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180003AFC (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 *     memset_0 @ 0x180007BE6 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned __int64 v10; // rsi
  WCHAR *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  WCHAR v14; // ax
  WCHAR *v15; // rax
  LONG v16; // r8d
  unsigned __int64 v17; // r14
  LONG v18; // esi
  HANDLE Semaphore; // rax
  wil::details *v20; // rcx
  int LastErrorFailHr; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  LONG v24; // r8d
  HANDLE v25; // rax
  wil::details *v26; // rcx
  unsigned __int64 v27; // rax
  HANDLE ProcessHeap; // rax
  __int128 v30; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v8 = v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x144, (int)"wil", (const char *)0x8007000ELL);
    return v9;
  }
  v30 = 0LL;
  if ( (v6 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
  v10 = v6 >> 2;
  v11 = Name;
  v12 = a1 - (_QWORD)Name;
  v13 = 260LL;
  do
  {
    if ( v13 == -2147483386 )
      break;
    v14 = *(WCHAR *)((char *)v11 + v12);
    if ( !v14 )
      break;
    *v11++ = v14;
    --v13;
  }
  while ( v13 );
  v15 = v11 - 1;
  if ( v13 )
    v15 = v11;
  *v15 = 0;
  StringCchCatW(Name, v13, L"_p0");
  v16 = 1;
  v17 = v8 >> 33;
  v18 = v10 & 0x7FFFFFFF;
  if ( v18 )
    v16 = v18;
  Semaphore = CreateSemaphoreExW(0LL, v18, v16, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (void **)&v30,
      Semaphore);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v20);
    v9 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v23 = 133LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(retaddr, (void *)v23, (int)"wil", (const char *)(unsigned int)LastErrorFailHr);
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x147, (int)"wil", (const char *)v9);
      goto LABEL_24;
    }
  }
  StringCchCatW(Name, v22, L"h");
  v24 = 1;
  if ( (_DWORD)v17 )
    v24 = v8 >> 33;
  v25 = CreateSemaphoreExW(0LL, v17, v24, Name, 0, 0x1F0003u);
  if ( v25 )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (void **)&v30 + 1,
      v25);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v26);
    v9 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v23 = 137LL;
      goto LABEL_21;
    }
  }
  *(_DWORD *)v8 = 1;
  *(_QWORD *)(v8 + 8) = *a2;
  v27 = v30;
  *a2 = 0LL;
  *(_OWORD *)(v8 + 16) = __PAIR128__(*((unsigned __int64 *)&v30 + 1), v27);
  v30 = 0uLL;
  memset_0((void *)(v8 + 34), 0, 0x56uLL);
  *(_WORD *)(v8 + 32) = 88;
  *(_DWORD *)(v8 + 36) = 1;
  memset_0((void *)(v8 + 40), 0, 0x50uLL);
  v9 = 0;
  *a3 = v8;
  v8 = 0LL;
LABEL_24:
  wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v30);
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)v8);
  }
  return v9;
}
