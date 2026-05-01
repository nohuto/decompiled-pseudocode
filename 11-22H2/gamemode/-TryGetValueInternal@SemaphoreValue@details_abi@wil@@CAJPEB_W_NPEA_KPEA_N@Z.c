/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x1800029F0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800036E8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEA_W_KPEB_W@Z @ 0x1800012B4 (-StringCchCatW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800027A8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800027D0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800027F0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180002870 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        const wchar_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v4; // rdx
  signed __int64 v5; // rcx
  __int64 v7; // r9
  WCHAR v8; // ax
  WCHAR *v9; // rax
  HANDLE v10; // rax
  void *v11; // rdi
  __int64 v12; // r8
  const char *v13; // r9
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v16; // rdx
  HANDLE v18; // rax
  __int64 v19; // r8
  const char *v20; // r9
  void *v21; // rbx
  int v22; // eax
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // r8
  const char *v26; // r9
  __int64 v27; // r8
  const char *v28; // r9
  int v29; // [rsp+28h] [rbp-E0h] BYREF
  int v30[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  v4 = Name;
  v5 = (char *)a1 - (char *)Name;
  v7 = 260LL;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v4 + v5);
    if ( !v8 )
      break;
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v4 - 1;
  if ( v7 )
    v9 = v4;
  *v9 = 0;
  StringCchCatW(Name, (__int64)v4, L"_p0");
  v10 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v11 = v10;
  if ( !v10 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, v12, v13);
LABEL_13:
    if ( !v11 )
      return LastError;
    goto LABEL_22;
  }
  v29 = 0;
  v30[0] = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, &v29);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, (int)"wil", (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_13;
  }
  StringCchCatW(Name, v16, L"h");
  v18 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v21 = v18;
  if ( v18 )
  {
    v22 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v18, v30);
    LastError = v22;
    if ( v22 >= 0 )
    {
      if ( !CloseHandle(v21) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x937, v25, v26);
      LastError = 0;
      *a3 = v29 | (unsigned __int64)((__int64)v30[0] << 31);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (int)"wil", (const char *)(unsigned int)v22);
      if ( !CloseHandle(v21) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x937, v23, v24);
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, v19, v20);
  }
LABEL_22:
  if ( !CloseHandle(v11) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x937, v27, v28);
  return LastError;
}
