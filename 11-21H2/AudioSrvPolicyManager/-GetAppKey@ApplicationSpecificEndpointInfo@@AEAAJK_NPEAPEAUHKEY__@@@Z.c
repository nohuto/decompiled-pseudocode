/*
 * XREFs of ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003B7B4
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003A96C (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003C4AC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18003D050 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003766C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18003CC2C (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18004006C (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180040564 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800408C8 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ApplicationSpecificEndpointInfo::GetAppKey(
        ApplicationSpecificEndpointInfo *this,
        REGSAM a2,
        char a3,
        HKEY *a4)
{
  char v4; // si
  char v6; // r14
  int v7; // r12d
  _WORD *v8; // rcx
  int v9; // r15d
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  __int64 result; // rax
  HKEY v14; // rdi
  DWORD LastError; // ebx
  int Key; // eax
  unsigned int v17; // ebx
  void *v18; // rbx
  HKEY v19; // rsi
  DWORD v20; // edi
  HKEY v21; // rdi
  DWORD v22; // ebx
  signed int v23; // eax
  unsigned int v24; // r8d
  unsigned __int16 *v25; // r9
  signed int v26; // edi
  bool v27; // cc
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  const BYTE *v30; // r8
  __int64 v31; // rcx
  _WORD *v32; // rax
  unsigned int v33; // ebx
  unsigned int v34; // eax
  unsigned int v35; // ebx
  PHKEY phkResult; // [rsp+20h] [rbp-2C8h]
  __int64 cchCount2; // [rsp+28h] [rbp-2C0h]
  unsigned int *v38; // [rsp+40h] [rbp-2A8h]
  HKEY hKey; // [rsp+50h] [rbp-298h] BYREF
  char v40; // [rsp+58h] [rbp-290h]
  REGSAM samDesired[2]; // [rsp+60h] [rbp-288h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-280h] BYREF
  struct _SECURITY_ATTRIBUTES lpMem; // [rsp+70h] [rbp-278h] BYREF
  HKEY *v44; // [rsp+88h] [rbp-260h]
  WCHAR SubKey[264]; // [rsp+90h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  try
  {
    v44 = a4;
    v4 = a3;
    v40 = a3;
    samDesired[0] = a2;
    v6 = 0;
    v7 = 0;
    hKey = 0LL;
    v8 = (_WORD *)*((_QWORD *)this + 10);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = 0;
    while ( *v8 )
      v9 = (unsigned __int16)*v8++ + 33 * v9;
    while ( 1 )
    {
      LODWORD(cchCount2) = v7;
      LODWORD(phkResult) = v9;
      v10 = StringCbPrintfW(
              SubKey,
              0x20AuLL,
              L"%s\\%x_%x",
              L"Software\\Microsoft\\Multimedia\\Audio\\DefaultEndpoint",
              phkResult,
              cchCount2);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x221,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v10);
        if ( hKey )
          RegCloseKey(hKey);
        return v11;
      }
      v14 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v14);
        SetLastError(LastError);
      }
      hKey = 0LL;
      if ( RegOpenKeyExW(HKEY_CURRENT_USER, SubKey, 0, samDesired[0], &hKey) )
        break;
      pv = 0LL;
      Key = ApplicationSpecificEndpointInfo::ReadKey(hKey, 0LL, (unsigned __int16 **)&pv);
      v17 = Key;
      if ( Key < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x229,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)Key);
        if ( pv )
          CoTaskMemFree(pv);
        if ( hKey )
          RegCloseKey(hKey);
        return v17;
      }
      v18 = pv;
      if ( CompareStringW(0x7Fu, 1u, *((PCNZWCH *)this + 10), -1, (PCNZWCH)pv, -1) == 2 )
      {
        v6 = 0;
      }
      else
      {
        ++v7;
        v6 = 1;
        v19 = hKey;
        if ( hKey )
        {
          v20 = GetLastError();
          RegCloseKey(v19);
          SetLastError(v20);
        }
        hKey = 0LL;
        v4 = v40;
      }
      if ( v18 )
        CoTaskMemFree(v18);
LABEL_58:
      if ( !v6 )
        goto LABEL_59;
    }
    if ( !v4 )
      goto LABEL_58;
    v21 = hKey;
    if ( hKey )
    {
      v22 = GetLastError();
      RegCloseKey(v21);
      SetLastError(v22);
    }
    hKey = 0LL;
    memset(&lpMem, 0, sizeof(lpMem));
    lpMem.nLength = 24;
    v23 = DetermineLowRightsKeySecurityDescriptor(HKEY_CURRENT_USER, &lpMem.lpSecurityDescriptor);
    v26 = v23;
    v27 = v23 <= 0;
    if ( !v23 )
    {
      v23 = SafeRegCreateKeyEx(
              HKEY_CURRENT_USER,
              SubKey,
              v24,
              v25,
              (unsigned int)phkResult,
              0xA001Fu,
              &lpMem,
              &hKey,
              v38);
      v26 = v23;
      v27 = v23 <= 0;
      if ( !v23 )
      {
        *(_QWORD *)samDesired = 0LL;
        if ( ConvertStringSidToSidW(L"LW", (PSID *)samDesired) )
        {
          v26 = SetRegistryKeyIntegrityLevel(hKey, *(PSID *)samDesired);
          if ( v26 < 0 )
            v26 = SetRegistryHandleIntegrityLevel(hKey, *(PSID *)samDesired);
          if ( *(_QWORD *)samDesired )
            LocalFree(*(HLOCAL *)samDesired);
          goto LABEL_39;
        }
        v23 = GetLastError();
        v26 = v23;
        v27 = v23 <= 0;
      }
    }
    if ( !v27 )
      v26 = (unsigned __int16)v23 | 0x80070000;
LABEL_39:
    lpSecurityDescriptor = lpMem.lpSecurityDescriptor;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpSecurityDescriptor);
    lpMem.lpSecurityDescriptor = 0LL;
    if ( v26 < 0 )
    {
      if ( hKey )
      {
        RegCloseKey(hKey);
        hKey = 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v26);
      if ( hKey )
        RegCloseKey(hKey);
      return (unsigned int)v26;
    }
    v30 = (const BYTE *)*((_QWORD *)this + 10);
    if ( v30 )
    {
      v31 = 261LL;
      v32 = (_WORD *)*((_QWORD *)this + 10);
      do
      {
        if ( !*v32 )
          break;
        ++v32;
        --v31;
      }
      while ( v31 );
      v33 = v31 == 0 ? 0x80070057 : 0;
      if ( v31 )
      {
        v34 = RegSetValueExW(hKey, 0LL, 0, 1u, v30, v31 != 0 ? 2 * (261 - v31) + 2 : 2);
        if ( !v34 )
        {
LABEL_59:
          if ( !hKey )
            return 2147943568LL;
          *v44 = hKey;
          return 0LL;
        }
        v35 = wil::details::in1diag3::Return_Win32(
                retaddr,
                589LL,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)v34);
        if ( hKey )
          RegCloseKey(hKey);
        return v35;
      }
    }
    else
    {
      v33 = -2147024809;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)v33);
    if ( hKey )
      RegCloseKey(hKey);
    result = v33;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25F,
                           (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecifi"
                                "cendpointinfo.cpp",
                           v12);
  }
  return result;
}
