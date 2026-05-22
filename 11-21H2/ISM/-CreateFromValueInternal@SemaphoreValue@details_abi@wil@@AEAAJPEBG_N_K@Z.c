/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180030320
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800301B8 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18007C5E8 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800480B0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18007C12C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18007EE44 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rdx
  WCHAR *v8; // rcx
  signed __int64 v9; // r8
  LONG v10; // esi
  WCHAR v11; // ax
  WCHAR *v12; // rax
  __int64 v13; // rdx
  WCHAR *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rdx
  WCHAR *v18; // rcx
  __int64 v19; // rax
  char *v20; // r8
  WCHAR v21; // r9
  WCHAR *v22; // rax
  unsigned __int64 v23; // r13
  LONG v24; // r10d
  LONG v25; // r8d
  wil::details *v26; // rcx
  wil::details *Semaphore; // r12
  wil::details *v28; // rbp
  int LastErrorFailHr; // ebx
  __int64 v30; // rdx
  WCHAR *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdi
  WCHAR *v34; // rcx
  char *v35; // rax
  WCHAR v36; // dx
  WCHAR *v37; // rax
  wil::details *v38; // rcx
  wil::details *v39; // rsi
  wil::details *v40; // rdi
  __int64 v42; // rdx
  DWORD LastError; // ebx
  void *v44; // rdx
  DWORD v45; // ebx
  void *v46; // rdx
  DWORD dwFlags; // [rsp+20h] [rbp-268h]
  WCHAR Name[264]; // [rsp+30h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  v7 = 260LL;
  v8 = Name;
  v9 = a2 - (char *)Name;
  v10 = 1;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v11 = *(WCHAR *)((char *)v8 + v9);
    if ( !v11 )
      break;
    *v8++ = v11;
    --v7;
  }
  while ( v7 );
  v12 = v8 - 1;
  if ( v7 )
    v12 = v8;
  *v12 = 0;
  v13 = 260LL;
  v14 = Name;
  do
  {
    if ( !*v14 )
      break;
    ++v14;
    --v13;
  }
  while ( v13 );
  v15 = (260 - v13) & -(__int64)(v13 != 0);
  v16 = 2147483646LL;
  if ( v13 )
  {
    v17 = 260 - v15;
    v18 = &Name[v15];
    if ( v15 != 260 )
    {
      v19 = 2147483646LL;
      v20 = (char *)((char *)L"_p0" - (char *)v18);
      do
      {
        if ( !v19 )
          break;
        v21 = *(WCHAR *)((char *)v18 + (_QWORD)v20);
        if ( !v21 )
          break;
        *v18++ = v21;
        --v19;
        --v17;
      }
      while ( v17 );
    }
    v22 = v18 - 1;
    if ( v17 )
      v22 = v18;
    *v22 = 0;
  }
  v23 = a4 >> 31;
  v24 = a4 & 0x7FFFFFFF;
  v25 = 1;
  if ( v24 )
    v25 = v24;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v24, v25, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v28 = *this;
    if ( *this )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v28, v44);
      SetLastError(LastError);
    }
    *this = Semaphore;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v26);
    if ( LastErrorFailHr < 0 )
    {
      v42 = 133LL;
      goto LABEL_50;
    }
  }
  v30 = 260LL;
  v31 = Name;
  do
  {
    if ( !*v31 )
      break;
    ++v31;
    --v30;
  }
  while ( v30 );
  v32 = (260 - v30) & -(__int64)(v30 != 0);
  if ( v30 )
  {
    v33 = 260 - v32;
    v34 = &Name[v32];
    if ( 260 != v32 )
    {
      v35 = (char *)((char *)L"h" - (char *)v34);
      do
      {
        if ( !v16 )
          break;
        v36 = *(WCHAR *)((char *)v34 + (_QWORD)v35);
        if ( !v36 )
          break;
        *v34++ = v36;
        --v16;
        --v33;
      }
      while ( v33 );
    }
    v37 = v34 - 1;
    if ( v33 )
      v37 = v34;
    *v37 = 0;
  }
  if ( (_DWORD)v23 )
    v10 = v23;
  v39 = (wil::details *)CreateSemaphoreExW(0LL, v23, v10, Name, 0, 0x1F0003u);
  if ( v39 )
  {
    v40 = this[1];
    if ( v40 )
    {
      v45 = GetLastError();
      wil::details::CloseHandle(v40, v46);
      SetLastError(v45);
    }
    this[1] = v39;
    return 0LL;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v38);
  if ( LastErrorFailHr >= 0 )
    return 0LL;
  v42 = 137LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v42,
    (unsigned int)"wil",
    (const char *)(unsigned int)LastErrorFailHr,
    dwFlags);
  return (unsigned int)LastErrorFailHr;
}
