/*
 * XREFs of ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003A96C
 * Callers:
 *     ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18003BD70 (-GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003766C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003B7B4 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x18003C0B8 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18003CC2C (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18003D564 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x18003D6B8 (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId(
        ApplicationSpecificEndpointInfo *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // rsi
  unsigned int v5; // r15d
  WCHAR *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int AppKey; // eax
  HKEY v14; // rbx
  unsigned int Key; // edi
  HRESULT v16; // eax
  __int64 v17; // rax
  int v18; // eax
  WCHAR *v19; // rcx
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // esi
  int PersistentId; // eax
  WCHAR *v26; // rsi
  LPVOID v27; // rax
  int InterfaceIdFromMMDevice; // eax
  unsigned int v29; // r14d
  int v30; // eax
  HKEY v31; // r14
  int v32; // eax
  ApplicationSpecificEndpointInfo *v33; // rcx
  unsigned int v34; // r15d
  int v35; // eax
  int updated; // eax
  LPVOID *ppv; // [rsp+20h] [rbp-89h]
  LPVOID pv; // [rsp+30h] [rbp-79h] BYREF
  __int64 *v40; // [rsp+38h] [rbp-71h] BYREF
  struct IMMDevice *v41; // [rsp+40h] [rbp-69h] BYREF
  LPVOID v42; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-59h] BYREF
  PCNZWCH lpString2; // [rsp+58h] [rbp-51h] BYREF
  char v45; // [rsp+61h] [rbp-48h]
  unsigned int v46; // [rsp+64h] [rbp-45h]
  HKEY v47; // [rsp+68h] [rbp-41h] BYREF
  PCNZWCH lpString1; // [rsp+70h] [rbp-39h] BYREF
  HKEY hKey; // [rsp+78h] [rbp-31h] BYREF
  _QWORD *v50; // [rsp+80h] [rbp-29h]
  unsigned __int16 v51[12]; // [rsp+88h] [rbp-21h] BYREF
  WCHAR Value[12]; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = a4;
  v50 = a4;
  v5 = a3;
  v46 = a3;
  *a4 = 0LL;
  v8 = 0LL;
  lpString2 = 0LL;
  pv = 0LL;
  v9 = StringCbPrintfW(Value, 0x18uLL, L"%03d_%03d_p", a3, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x373,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  v11 = RpcImpersonateClient(0LL);
  if ( v11 )
    return (unsigned int)wil::details::in1diag3::Return_Win32(
                           retaddr,
                           887LL,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           (const char *)v11);
  v45 = 1;
  hKey = 0LL;
  AppKey = ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x20019u, 0, &hKey);
  v14 = hKey;
  if ( AppKey < 0 )
  {
LABEL_52:
    v27 = pv;
    pv = 0LL;
    *v4 = v27;
    RpcRevertToSelf();
    if ( v14 )
      RegCloseKey(v14);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v8 )
      CoTaskMemFree(v8);
    return 0LL;
  }
  Key = ApplicationSpecificEndpointInfo::ReadKey(hKey, Value, (unsigned __int16 **)&lpString2);
  if ( (Key & 0x80000000) != 0 )
  {
    RpcRevertToSelf();
    if ( v14 )
      RegCloseKey(v14);
    if ( lpString2 )
      CoTaskMemFree((LPVOID)lpString2);
    return Key;
  }
  v42 = 0LL;
  v16 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &v42);
  Key = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x380,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v16);
    if ( v42 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
    RpcRevertToSelf();
    if ( v14 )
      RegCloseKey(v14);
    if ( lpString2 )
      CoTaskMemFree((LPVOID)lpString2);
    return Key;
  }
  v40 = 0LL;
  v17 = *(_QWORD *)v42;
  v40 = 0LL;
  v18 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 **))(v17 + 24))(v42, a2, 1LL, &v40);
  Key = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x383,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v18);
    if ( v40 )
      (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
    if ( v42 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
    RpcRevertToSelf();
    if ( v14 )
      RegCloseKey(v14);
    v19 = (WCHAR *)lpString2;
    if ( !lpString2 )
      return Key;
    goto LABEL_28;
  }
  v43 = 0;
  v20 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v40 + 24))(v40, &v43);
  Key = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x386,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v20);
    if ( v40 )
      (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
    if ( v42 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
    RpcRevertToSelf();
    if ( v14 )
      RegCloseKey(v14);
    v19 = (WCHAR *)lpString2;
    if ( !lpString2 )
      return Key;
LABEL_28:
    CoTaskMemFree(v19);
    return Key;
  }
  v21 = 0;
  v8 = (WCHAR *)lpString2;
  if ( !v43 )
  {
LABEL_48:
    if ( v40 )
      (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
    if ( v42 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
    goto LABEL_52;
  }
  while ( 1 )
  {
    v41 = 0LL;
    v22 = *v40;
    v41 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IMMDevice **))(v22 + 32))(v40, v21, &v41);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v23);
      if ( v41 )
        ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
      if ( v40 )
        (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
      if ( v42 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
      RpcRevertToSelf();
      if ( v14 )
        RegCloseKey(v14);
      if ( !v8 )
        return v24;
LABEL_157:
      CoTaskMemFree(v8);
      return v24;
    }
    lpString1 = 0LL;
    PersistentId = ApplicationSpecificEndpointInfo::GetPersistentId(v41, (unsigned __int16 **)&lpString1);
    v24 = PersistentId;
    if ( PersistentId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)PersistentId);
      if ( lpString1 )
        CoTaskMemFree((LPVOID)lpString1);
      if ( v41 )
        ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
      if ( v40 )
        (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
      if ( v42 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
      RpcRevertToSelf();
      if ( v14 )
        RegCloseKey(v14);
      if ( !v8 )
        return v24;
      goto LABEL_157;
    }
    v26 = (WCHAR *)lpString1;
    if ( CompareStringW(0x7Fu, 1u, lpString1, -1, v8, -1) == 2 )
      break;
    if ( v26 )
      CoTaskMemFree(v26);
    if ( v41 )
      ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
    if ( ++v21 >= v43 )
      goto LABEL_47;
  }
  InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(v41, &pv);
  v29 = InterfaceIdFromMMDevice;
  if ( InterfaceIdFromMMDevice >= 0 )
  {
    v47 = 0LL;
    v30 = ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x2001Fu, 0, &v47);
    v31 = v47;
    if ( v30 >= 0 )
    {
      LODWORD(ppv) = a2;
      v32 = StringCbPrintfW(v51, 0x14uLL, L"%03d_%03d", v5, ppv);
      v34 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v32);
        if ( v31 )
          RegCloseKey(v31);
        if ( v26 )
          CoTaskMemFree(v26);
        if ( v41 )
          ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
        if ( v40 )
          (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
        if ( v42 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
        RpcRevertToSelf();
        if ( v14 )
          RegCloseKey(v14);
        if ( pv )
          CoTaskMemFree(pv);
        if ( !v8 )
          return v34;
        goto LABEL_92;
      }
      v35 = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v33, v31, v51, (const unsigned __int16 *)pv);
      v34 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v35);
        if ( v31 )
          RegCloseKey(v31);
        if ( v26 )
          CoTaskMemFree(v26);
        if ( v41 )
          ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
        if ( v40 )
          (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
        if ( v42 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
        RpcRevertToSelf();
        if ( v14 )
          RegCloseKey(v14);
        if ( pv )
          CoTaskMemFree(pv);
        if ( !v8 )
          return v34;
        goto LABEL_92;
      }
      v5 = v46;
    }
    updated = ApplicationSpecificEndpointInfo::UpdateState(a1, v5, a2, pv);
    v34 = updated;
    if ( updated >= 0 )
    {
      if ( v31 )
        RegCloseKey(v31);
      if ( v26 )
        CoTaskMemFree(v26);
      if ( v41 )
        ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
LABEL_47:
      v4 = v50;
      goto LABEL_48;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)updated);
    if ( v31 )
      RegCloseKey(v31);
    if ( v26 )
      CoTaskMemFree(v26);
    if ( v41 )
      ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
    if ( v40 )
      (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
    if ( v42 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
    RpcRevertToSelf();
    if ( v14 )
      RegCloseKey(v14);
    if ( pv )
      CoTaskMemFree(pv);
    if ( !v8 )
      return v34;
LABEL_92:
    CoTaskMemFree(v8);
    return v34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x393,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)(unsigned int)InterfaceIdFromMMDevice);
  if ( v26 )
    CoTaskMemFree(v26);
  if ( v41 )
    ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
  if ( v40 )
    (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
  if ( v42 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
  RpcRevertToSelf();
  if ( v14 )
    RegCloseKey(v14);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v8 )
    CoTaskMemFree(v8);
  return v29;
}
