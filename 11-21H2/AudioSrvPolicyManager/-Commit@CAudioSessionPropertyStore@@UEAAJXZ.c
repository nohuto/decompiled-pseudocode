/*
 * XREFs of ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180033B30
 * Callers:
 *     ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x1800331B8 (--1CAudioSessionPropertyStore@@EEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x1800333B8 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800340B4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003766C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSessionPropertyStore::Commit(CAudioSessionPropertyStore *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rsi
  HRESULT v4; // eax
  unsigned int v5; // ebx
  RPC_STATUS v6; // eax
  int v7; // eax
  unsigned int v8; // r15d
  int v9; // eax
  HKEY v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // esi
  BYTE *v14; // r15
  unsigned int v15; // eax
  bool v16; // sf
  LPOLESTR lpsz; // [rsp+30h] [rbp-49h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-41h] BYREF
  BYTE *lpData; // [rsp+40h] [rbp-39h] BYREF
  DWORD cbData[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v21; // [rsp+50h] [rbp-29h] BYREF
  DWORD *v22; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v23[4]; // [rsp+60h] [rbp-19h] BYREF
  WCHAR ValueName[20]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( !*((_BYTE *)this + 88) )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v3 = *((_QWORD *)this + 4);
  while ( 1 )
  {
    if ( !v3 )
    {
      *((_BYTE *)this + 88) = 0;
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
    lpsz = 0LL;
    v4 = StringFromCLSID((const IID *const)v3, &lpsz);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23D,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v4);
      if ( lpsz )
        CoTaskMemFree(lpsz);
      if ( !v2 )
        return v5;
LABEL_67:
      LeaveCriticalSection(v2);
      return v5;
    }
    v6 = RpcImpersonateClient(0LL);
    v5 = v6;
    if ( v6 && v6 != 1725 )
    {
      v16 = v6 < 0;
      if ( v6 > 0 )
      {
        v5 = (unsigned __int16)v6 | 0x80070000;
        v16 = 1;
      }
      if ( v16 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x246,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v5);
      if ( lpsz )
        CoTaskMemFree(lpsz);
      if ( !v2 )
        return v5;
      goto LABEL_67;
    }
    hKey = 0LL;
    v7 = CreateLowRightsRegistryKey(*((HKEY *)this + 5), lpsz, 0x20006u, &hKey);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x248,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v7);
      if ( !v5 )
        RpcRevertToSelf();
      if ( hKey )
        RegCloseKey(hKey);
      if ( lpsz )
        CoTaskMemFree(lpsz);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v8;
    }
    if ( !v5 )
      RpcRevertToSelf();
    v9 = StringCbPrintfW(ValueName, 0x28uLL, L"%d", *(unsigned int *)(v3 + 16));
    v5 = v9;
    if ( v9 < 0 )
      break;
    if ( *(_WORD *)(v3 + 24) )
    {
      v22 = cbData;
      v21 = v3 + 24;
      *(_QWORD *)cbData = 0LL;
      lpData = 0LL;
      v23[0] = (char *)this - 16;
      v23[1] = &v21;
      v23[2] = &v22;
      v23[3] = &lpData;
      lambda_27a4ba88670a0d404d45da27056d59bf_::operator()((__int64)v23);
      v14 = lpData;
      if ( !lpData )
      {
        v5 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x256,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)0x8007000ELL);
        if ( hKey )
          RegCloseKey(hKey);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        if ( v2 )
          goto LABEL_67;
        return v5;
      }
      v10 = hKey;
      v15 = RegSetValueExW(hKey, ValueName, 0, 3u, lpData, cbData[0]);
      if ( v15 )
      {
        v12 = wil::details::in1diag3::Return_Win32(
                retaddr,
                600LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                (const char *)v15);
        operator delete(v14);
        if ( v10 )
          RegCloseKey(v10);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        if ( v2 )
LABEL_20:
          LeaveCriticalSection(v2);
        return v12;
      }
      operator delete(v14);
    }
    else
    {
      v10 = hKey;
      v11 = RegDeleteValueW(hKey, ValueName);
      if ( v11 )
      {
        v12 = wil::details::in1diag3::Return_Win32(
                retaddr,
                592LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                (const char *)v11);
        if ( v10 )
          RegCloseKey(v10);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        if ( v2 )
          goto LABEL_20;
        return v12;
      }
    }
    v3 = *(_QWORD *)(v3 + 48);
    if ( v10 )
      RegCloseKey(v10);
    if ( lpsz )
      CoTaskMemFree(lpsz);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24C,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
    (const char *)(unsigned int)v9);
  if ( hKey )
    RegCloseKey(hKey);
  if ( lpsz )
    CoTaskMemFree(lpsz);
  if ( v2 )
    goto LABEL_67;
  return v5;
}
