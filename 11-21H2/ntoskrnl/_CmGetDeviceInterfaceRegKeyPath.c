/*
 * XREFs of _CmGetDeviceInterfaceRegKeyPath @ 0x140781814
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x140699B5C (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140781A70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A23A34 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCatExW @ 0x1403CB720 (RtlStringCchCatExW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14077ED0C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetDeviceInterfaceRegKeyPath(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        int a4,
        int a5,
        wchar_t *a6,
        size_t cchDest,
        _DWORD *a8)
{
  __int16 v9; // si
  unsigned int v11; // ebp
  char v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  wchar_t *Pool2; // rax
  __int64 v17; // rcx
  wchar_t *v18; // r13
  int DeviceInterfaceSubkeyPath; // ebx
  NTSTRSAFE_PWSTR *v20; // r9
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  NTSTATUS v25; // eax
  NTSTRSAFE_PWSTR *v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  size_t *dwFlags; // [rsp+20h] [rbp-E8h]
  size_t *dwFlagsa; // [rsp+20h] [rbp-E8h]
  ULONG pszFormat; // [rsp+28h] [rbp-E0h]
  ULONG pszFormata; // [rsp+28h] [rbp-E0h]
  wchar_t v34[40]; // [rsp+70h] [rbp-98h] BYREF

  v9 = a3;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    return (unsigned int)-1073741811;
  v11 = (unsigned __int8)a3;
  if ( (((unsigned __int8)a3 - 48) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned __int8)a3 == 49 )
    {
      v12 = 0;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  v12 = 1;
LABEL_5:
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( a2[v14] );
  v15 = 2 * v14 + 6;
  if ( v15 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
  v18 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  DeviceInterfaceSubkeyPath = CmGetDeviceInterfaceSubkeyPath(v17, a2, v12, v34, Pool2, (unsigned int)v15 >> 1);
  if ( DeviceInterfaceSubkeyPath < 0 )
    goto LABEL_26;
  v21 = v9 & 0x200;
  if ( v21 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        goto LABEL_50;
      v29 = -1LL;
      do
        ++v29;
      while ( v34[v29] );
      v23 = v29 + 96;
    }
    else
    {
      v28 = -1LL;
      do
        ++v28;
      while ( v34[v28] );
      v23 = v28 + 99;
    }
  }
  else
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v34[v22] );
    v23 = v22 + 48;
  }
  do
    ++v13;
  while ( v18[v13] );
  v24 = v23 + v13 + 1;
  if ( v11 < 0x30 )
    goto LABEL_50;
  if ( v11 <= 0x31 )
    goto LABEL_17;
  if ( v11 != 50 )
  {
LABEL_50:
    DeviceInterfaceSubkeyPath = -1073741811;
    goto LABEL_26;
  }
  v24 += 18LL;
LABEL_17:
  if ( v24 > 0xFFFFFFFF )
  {
    DeviceInterfaceSubkeyPath = -1073741675;
  }
  else
  {
    DeviceInterfaceSubkeyPath = 0;
    if ( a8 )
      *a8 = v24;
    if ( (unsigned int)v24 <= (unsigned int)cchDest )
    {
      if ( v21 )
      {
        if ( a4 )
        {
          if ( a4 == -1 )
            goto LABEL_24;
          v25 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%04u\\%s\\%s\\%s");
        }
        else
        {
          v25 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s\\%s");
        }
      }
      else
      {
        v25 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s");
      }
      DeviceInterfaceSubkeyPath = v25;
LABEL_24:
      if ( DeviceInterfaceSubkeyPath >= 0 && v11 == 50 )
      {
        DeviceInterfaceSubkeyPath = RtlStringCchCatExW(a6, (unsigned int)cchDest, L"\\", v20, dwFlags, pszFormat);
        if ( DeviceInterfaceSubkeyPath >= 0 )
          DeviceInterfaceSubkeyPath = RtlStringCchCatExW(
                                        a6,
                                        (unsigned int)cchDest,
                                        L"Device Parameters",
                                        v27,
                                        dwFlagsa,
                                        pszFormata);
      }
      goto LABEL_26;
    }
    DeviceInterfaceSubkeyPath = -1073741789;
  }
LABEL_26:
  ExFreePoolWithTag(v18, 0);
  return (unsigned int)DeviceInterfaceSubkeyPath;
}
