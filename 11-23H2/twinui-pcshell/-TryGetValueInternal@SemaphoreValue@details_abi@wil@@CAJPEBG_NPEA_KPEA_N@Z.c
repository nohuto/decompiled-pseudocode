/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800EBE88
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800EBE3C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800ECA3C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        wchar_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v5; // rax
  __int64 v6; // r11
  __int64 v7; // r14
  __int64 v8; // r8
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r8
  WCHAR v13; // r9
  WCHAR *v14; // rax
  wil::details *v15; // rax
  wil::details *v16; // rdi
  int ValueFromSemaphore; // eax
  unsigned int LastError; // esi
  __int64 v19; // rdx
  WCHAR *v20; // rax
  __int64 v21; // r8
  WCHAR *v22; // rdx
  __int64 v23; // rbx
  char *v24; // rcx
  WCHAR v25; // ax
  WCHAR *v26; // rax
  wil::details *v27; // rax
  const char *v28; // r9
  wil::details *v29; // rbx
  int v30; // eax
  void *v31; // rdx
  void *v32; // rdx
  void *v34; // rdx
  const char *v35; // r9
  int v36; // [rsp+20h] [rbp-E0h] BYREF
  int v37[3]; // [rsp+24h] [rbp-DCh] BYREF
  wchar_t Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v5 = Name;
  v6 = 260LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = 2147483646LL;
  v8 = (260 - v6) & -(__int64)(v6 != 0);
  if ( v6 )
  {
    v9 = &Name[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
  }
  v15 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v16 = v15;
  if ( !v15 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v35);
LABEL_32:
    if ( !v16 )
      return LastError;
    goto LABEL_30;
  }
  v37[0] = 0;
  v36 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, v37);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueFromSemaphore,
      v36);
    goto LABEL_32;
  }
  v19 = 260LL;
  v20 = Name;
  do
  {
    if ( !*v20 )
      break;
    ++v20;
    --v19;
  }
  while ( v19 );
  v21 = (260 - v19) & -(__int64)(v19 != 0);
  if ( v19 )
  {
    v22 = &Name[v21];
    v23 = 260 - v21;
    if ( 260 != v21 )
    {
      v24 = (char *)((char *)L"h" - (char *)v22);
      do
      {
        if ( !v7 )
          break;
        v25 = *(WCHAR *)((char *)v22 + (_QWORD)v24);
        if ( !v25 )
          break;
        *v22 = v25;
        --v7;
        ++v22;
        --v23;
      }
      while ( v23 );
    }
    v26 = v22 - 1;
    if ( v23 )
      v26 = v22;
    *v26 = 0;
  }
  v27 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v29 = v27;
  if ( v27 )
  {
    v30 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v27, &v36);
    LastError = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (unsigned int)"wil",
        (const char *)(unsigned int)v30,
        v36);
      wil::details::CloseHandle(v29, v34);
    }
    else
    {
      wil::details::CloseHandle(v29, v31);
      LastError = 0;
      *a3 = ((__int64)v36 << 31) | v37[0];
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v28);
  }
LABEL_30:
  wil::details::CloseHandle(v16, v32);
  return LastError;
}
