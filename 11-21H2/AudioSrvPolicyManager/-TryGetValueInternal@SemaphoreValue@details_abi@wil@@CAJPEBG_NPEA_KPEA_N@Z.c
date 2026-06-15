/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000748C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800051DC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005410 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180005D8C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180007294 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
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
  wil::details *v11; // rbx
  int ValueFromSemaphore; // eax
  __int64 v13; // rdx
  unsigned int LastError; // edi
  void *v15; // rdx
  wil::details *v17; // rax
  const char *v18; // r9
  wil::details *v19; // rdi
  int v20; // eax
  void *v21; // rdx
  unsigned int v22; // esi
  void *v23; // rdx
  void *v24; // rdx
  void *v25; // rdx
  void *v26; // rdx
  const char *v27; // r9
  int v28; // [rsp+28h] [rbp-E0h] BYREF
  int v29[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

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
  if ( v10 )
  {
    v29[0] = 0;
    v28 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, v29);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      wil::details::CloseHandle(v11, v15);
      return LastError;
    }
    StringCchCatW(Name, v13, (char *)L"h");
    v17 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v19 = v17;
    if ( !v17 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (int)"wil", v18);
      wil::details::CloseHandle(v11, v26);
      return LastError;
    }
    v20 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v17, &v28);
    v22 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v20);
      wil::details::CloseHandle(v19, v23);
      wil::details::CloseHandle(v11, v24);
      return v22;
    }
    wil::details::CloseHandle(v19, v21);
    *a3 = ((__int64)v28 << 31) | v29[0];
    wil::details::CloseHandle(v11, v25);
    return 0LL;
  }
  if ( GetLastError() == 2 )
    return 0LL;
  return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (int)"wil", v27);
}
