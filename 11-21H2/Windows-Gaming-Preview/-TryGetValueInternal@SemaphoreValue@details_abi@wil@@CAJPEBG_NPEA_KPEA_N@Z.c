/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003B88
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180008358 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180008784 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001A6C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800036C0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003750 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180003A00 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v5; // r9
  WCHAR *v6; // rdx
  signed __int64 v7; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  wil::details *v10; // rax
  wil::details *v11; // rdi
  bool v12; // r12
  void *v13; // rdx
  const char *v14; // r9
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v17; // rdx
  wil::details *v18; // rax
  const char *v19; // r9
  wil::details *v20; // rbx
  bool v21; // r14
  int v22; // eax
  int v24; // [rsp+28h] [rbp-E0h] BYREF
  int v25[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  *a3 = 0LL;
  v5 = 260LL;
  v6 = Name;
  v7 = a1 - (char *)Name;
  do
  {
    if ( v5 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v6 + v7);
    if ( !v8 )
      break;
    *v6++ = v8;
    --v5;
  }
  while ( v5 );
  v9 = v6 - 1;
  if ( v5 )
    v9 = v6;
  *v9 = 0;
  StringCchCatW(Name, (__int64)v6, (char *)L"_p0");
  v10 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v11 = v10;
  v12 = v10 != 0LL;
  if ( !v10 )
  {
    if ( GetLastError() != 2 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (int)"wil", v14);
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v25[0] = 0;
  v24 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, v25);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, (int)"wil", (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_22;
  }
  StringCchCatW(Name, v17, (char *)L"h");
  v18 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v20 = v18;
  v21 = v18 != 0LL;
  if ( v18 )
  {
    v22 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v18, &v24);
    LastError = v22;
    if ( v22 >= 0 )
    {
      if ( v21 )
        wil::details::CloseHandle(v20, v13);
      *a3 = ((__int64)v24 << 31) | v25[0];
LABEL_21:
      LastError = 0;
      goto LABEL_22;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (int)"wil", (const char *)(unsigned int)v22);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (int)"wil", v19);
  }
  if ( v21 )
    wil::details::CloseHandle(v20, v13);
LABEL_22:
  if ( v12 )
    wil::details::CloseHandle(v11, v13);
  return LastError;
}
