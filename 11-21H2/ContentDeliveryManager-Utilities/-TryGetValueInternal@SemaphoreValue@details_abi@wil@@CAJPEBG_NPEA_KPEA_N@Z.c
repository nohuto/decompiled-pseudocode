/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800467B0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002F7A4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002FAE8 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180030AC0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180039260 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044550 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180045E04 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
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
  unsigned int LastError; // edi
  void *v14; // rdx
  wil::details *v16; // rax
  const char *v17; // r9
  wil::details *v18; // rdi
  int v19; // eax
  void *v20; // rdx
  unsigned int v21; // esi
  void *v22; // rdx
  void *v23; // rdx
  void *v24; // rdx
  void *v25; // rdx
  const char *v26; // r9
  int v27; // [rsp+28h] [rbp-E0h] BYREF
  int v28[3]; // [rsp+2Ch] [rbp-DCh] BYREF
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
  StringCchCatW(Name, 260LL, (char *)L"_p0");
  v10 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v11 = v10;
  if ( v10 )
  {
    v28[0] = 0;
    v27 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, v28);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      wil::details::CloseHandle(v11, v14);
      return LastError;
    }
    StringCchCatW(Name, 260LL, (char *)L"h");
    v16 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v18 = v16;
    if ( !v16 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (int)"wil", v17);
      wil::details::CloseHandle(v11, v25);
      return LastError;
    }
    v19 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, &v27);
    v21 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v19);
      wil::details::CloseHandle(v18, v22);
      wil::details::CloseHandle(v11, v23);
      return v21;
    }
    wil::details::CloseHandle(v18, v20);
    *a3 = ((__int64)v27 << 31) | v28[0];
    wil::details::CloseHandle(v11, v24);
    return 0LL;
  }
  if ( GetLastError() == 2 )
    return 0LL;
  return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (int)"wil", v26);
}
