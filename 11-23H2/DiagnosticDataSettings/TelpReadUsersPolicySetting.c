/*
 * XREFs of TelpReadUsersPolicySetting @ 0x1800024B8
 * Callers:
 *     TelpReadGroupPolicySetting @ 0x1800021B8 (TelpReadGroupPolicySetting.c)
 *     TelpReadMdmSetting @ 0x18000228C (TelpReadMdmSetting.c)
 * Callees:
 *     TelpReadRegistryDword @ 0x1800014A8 (TelpReadRegistryDword.c)
 *     TelGetLocalAllowTelemetryRegPath @ 0x1800016B0 (TelGetLocalAllowTelemetryRegPath.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800036A0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180004F10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800059BA (memset_0.c)
 */

__int64 __fastcall TelpReadUsersPolicySetting(_DWORD *a1, int *a2, const WCHAR *a3)
{
  DWORD v3; // r14d
  char v5; // r13
  int v6; // esi
  const wchar_t *LocalAllowTelemetryRegPath; // rax
  __int64 v8; // r8
  signed __int64 v9; // rax
  WCHAR *v10; // rdx
  WCHAR v11; // cx
  WCHAR *v12; // rax
  signed int v13; // ebx
  LSTATUS v14; // eax
  LSTATUS v15; // eax
  SIZE_T v16; // rbx
  HANDLE ProcessHeap; // rax
  WCHAR *v18; // r15
  LSTATUS v19; // eax
  int v20; // eax
  HANDLE v21; // rax
  int phkResult; // [rsp+20h] [rbp-E0h]
  DWORD cbMaxSubKeyLen; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cSubKeys; // [rsp+64h] [rbp-9Ch] BYREF
  int pvData; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  DWORD cchName; // [rsp+78h] [rbp-88h] BYREF
  LPCWSTR lpValue; // [rsp+80h] [rbp-80h]
  int *v30; // [rsp+88h] [rbp-78h]
  WCHAR SubKey[264]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v3 = 0;
  lpValue = a3;
  v30 = a2;
  *a1 = 1;
  hKey = 0LL;
  v5 = 0;
  v6 = 3;
  memset_0(SubKey, 0, 0x208uLL);
  LocalAllowTelemetryRegPath = TelGetLocalAllowTelemetryRegPath();
  v8 = 260LL;
  v9 = (char *)LocalAllowTelemetryRegPath - (char *)SubKey;
  v10 = SubKey;
  do
  {
    if ( v8 == -2147483386 )
      break;
    v11 = *(WCHAR *)((char *)v10 + v9);
    if ( !v11 )
      break;
    *v10++ = v11;
    --v8;
  }
  while ( v8 );
  v12 = v10 - 1;
  if ( v8 )
    v12 = v10;
  *v12 = 0;
  v13 = v8 == 0 ? 0x8007007A : 0;
  if ( !v8 )
    goto LABEL_32;
  v13 = StringCchCatW(SubKey, (unsigned __int64)v10, L"\\Users");
  if ( v13 < 0 )
    goto LABEL_32;
  v14 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey);
  v13 = (unsigned __int16)v14 | 0x80070000;
  if ( v14 <= 0 )
    v13 = v14;
  if ( v13 < 0 )
    goto LABEL_32;
  cSubKeys = 0;
  cbMaxSubKeyLen = 0;
  v15 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, &cbMaxSubKeyLen, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  v13 = (unsigned __int16)v15 | 0x80070000;
  if ( v15 <= 0 )
    v13 = v15;
  if ( v13 >= 0 )
  {
    v16 = 2LL * (cbMaxSubKeyLen + 1);
    ProcessHeap = GetProcessHeap();
    v18 = (WCHAR *)HeapAlloc(ProcessHeap, 0, v16);
    if ( v18 )
    {
      if ( !cSubKeys )
        goto LABEL_29;
      do
      {
        cchName = cbMaxSubKeyLen + 1;
        v19 = RegEnumKeyExW(hKey, v3, v18, &cchName, 0LL, 0LL, 0LL, 0LL);
        v13 = (unsigned __int16)v19 | 0x80070000;
        if ( v19 <= 0 )
          v13 = v19;
        if ( v13 != -2147024894 )
        {
          if ( v13 < 0 )
            goto LABEL_31;
          v20 = TelpReadRegistryDword(&pvData, hKey, v18, lpValue);
          v13 = v20;
          if ( v20 != -2147024894 )
          {
            if ( v20 < 0 )
              goto LABEL_31;
            v5 = 1;
            if ( pvData < v6 )
              v6 = pvData;
          }
        }
        ++v3;
      }
      while ( v3 < cSubKeys );
      if ( v5 )
        *v30 = v6;
      else
LABEL_29:
        *a1 = 0;
      v13 = 0;
LABEL_31:
      v21 = GetProcessHeap();
      HeapFree(v21, 0, v18);
    }
    else
    {
      v13 = -2147024882;
    }
  }
  else
  {
LABEL_32:
    if ( v13 == -2147024894 )
    {
      v13 = 0;
      *a1 = 0;
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x50D, v8, (const char *)(unsigned int)v13, phkResult);
  return (unsigned int)v13;
}
