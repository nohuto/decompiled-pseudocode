/*
 * XREFs of ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18003D050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003766C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003B7B4 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x18003C0B8 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003CF44 (-SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdev.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18003D564 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x18003D6B8 (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationSpecificEndpointInfo::SetPersistedDefaultAudioEndpoint(
        ApplicationSpecificEndpointInfo *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4)
{
  unsigned int v8; // eax
  int AppKey; // eax
  unsigned int v11; // ebx
  HKEY v12; // rcx
  int v13; // eax
  int v14; // eax
  int PersistentId; // eax
  ApplicationSpecificEndpointInfo *v16; // rcx
  void *v17; // rdi
  HKEY v18; // rbx
  int v19; // eax
  ApplicationSpecificEndpointInfo *v20; // rcx
  unsigned int v21; // esi
  int v22; // eax
  int updated; // eax
  unsigned int v24; // edi
  int refreshed; // eax
  __int64 v26; // [rsp+20h] [rbp-49h]
  HKEY hKey; // [rsp+30h] [rbp-39h] BYREF
  struct IMMDevice *v28; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  WCHAR ValueName[12]; // [rsp+48h] [rbp-21h] BYREF
  WCHAR v31[12]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v8 = RpcImpersonateClient(0LL);
  if ( v8 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             113LL,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
             (const char *)v8);
  hKey = 0LL;
  AppKey = ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x2001Fu, 1, &hKey);
  v11 = AppKey;
  if ( AppKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)AppKey);
    RpcRevertToSelf();
    v12 = hKey;
    if ( !hKey )
      return v11;
LABEL_5:
    RegCloseKey(v12);
    return v11;
  }
  v13 = StringCbPrintfW(ValueName, 0x14uLL, L"%03d_%03d", a3, a2);
  v11 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v13);
    RpcRevertToSelf();
    v12 = hKey;
    if ( !hKey )
      return v11;
    goto LABEL_5;
  }
  LODWORD(v26) = a2;
  v14 = StringCbPrintfW(v31, 0x18uLL, L"%03d_%03d_p", a3, v26);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v14);
    RpcRevertToSelf();
    v12 = hKey;
    if ( !hKey )
      return v11;
    goto LABEL_5;
  }
  if ( a4 )
  {
    v28 = 0LL;
    if ( (int)mmdDevGetMMDeviceFromInterfaceId(a4, &v28) < 0 )
    {
      v11 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x80070057LL);
      if ( v28 )
        ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
      RpcRevertToSelf();
      v12 = hKey;
      if ( !hKey )
        return v11;
      goto LABEL_5;
    }
    pv = 0LL;
    PersistentId = ApplicationSpecificEndpointInfo::GetPersistentId(v28, (unsigned __int16 **)&pv);
    v11 = PersistentId;
    if ( PersistentId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)PersistentId);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v28 )
        ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
      RpcRevertToSelf();
      v12 = hKey;
      if ( !hKey )
        return v11;
      goto LABEL_5;
    }
    v17 = pv;
    v18 = hKey;
    v19 = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v16, hKey, v31, (const unsigned __int16 *)pv);
    v21 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v19);
      if ( v17 )
        CoTaskMemFree(v17);
      if ( v28 )
        ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
      RpcRevertToSelf();
      if ( !v18 )
        return v21;
      goto LABEL_32;
    }
    v22 = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v20, v18, ValueName, a4);
    v21 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x92,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v22);
      if ( v17 )
        CoTaskMemFree(v17);
      if ( v28 )
        ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
      RpcRevertToSelf();
      if ( !v18 )
        return v21;
LABEL_32:
      RegCloseKey(v18);
      return v21;
    }
    if ( v17 )
      CoTaskMemFree(v17);
    if ( v28 )
      ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
  }
  else
  {
    v18 = hKey;
    RegDeleteValueW(hKey, ValueName);
    RegDeleteValueW(v18, v31);
    refreshed = ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification((__int64)a1, a2, a3);
    v24 = refreshed;
    if ( refreshed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)refreshed);
      RpcRevertToSelf();
      if ( v18 )
LABEL_50:
        RegCloseKey(v18);
      return v24;
    }
  }
  RpcRevertToSelf();
  updated = ApplicationSpecificEndpointInfo::UpdateState(a1, a3, a2, a4);
  v24 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)updated);
    if ( v18 )
      goto LABEL_50;
    return v24;
  }
  if ( v18 )
    RegCloseKey(v18);
  return 0LL;
}
