/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18003685C
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x180036A20 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x18001F818 (ReconsiderSpatialOnComboEndpoints.c)
 *     GetContainerId @ 0x18001FDF0 (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x18001FF00 (GetEndpointFormFactor.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180040B6C (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A08C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialPolicy::OnPropertyChange(
        const struct _tlgProvider_t *a1,
        struct IMMDevice *a2,
        const struct _tagpropertykey *a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int ContainerId; // eax
  unsigned int v11; // ebx
  int EndpointFormFactor; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-28h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-20h] BYREF
  __int128 v21; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v7 = qword_1801CFE38 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( qword_1801CFE38 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v7 = qword_1801CFE40 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v7 )
    GetSpatialSettingsMonitoringPKey(&qword_1801CFE38);
  if ( dword_1801CEA84 == -1 )
  {
    dword_1801CEA84 = 1;
    if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1, a2, a3, a4)
      || (unsigned int)IsSpatialSpeakerProtectionCheckRequired() )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_1801CEA84,
        &pcbData);
    }
  }
  if ( dword_1801CEA84 )
    return 0LL;
  v8 = *(_QWORD *)&a3->fmtid.Data1 - qword_1801CFE38;
  if ( *(_QWORD *)&a3->fmtid.Data1 == qword_1801CFE38 )
    v8 = *(_QWORD *)a3->fmtid.Data4 - qword_1801CFE40;
  if ( v8 || a3->pid != dword_1801CFE48 )
    return 0LL;
  v19 = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 **))a2->lpVtbl->OpenPropertyStore)(
                  a2,
                  0LL,
                  &v19);
  v11 = ContainerId;
  if ( ContainerId < 0 )
  {
    v17 = 408LL;
    goto LABEL_28;
  }
  EndpointFormFactor = GetEndpointFormFactor((__int64)v19);
  v13 = (unsigned int)(EndpointFormFactor - 1);
  if ( (v13 & 0xFFFFFFFD) == 0 )
  {
    ContainerId = GetContainerId(v13, v19, &v21);
    v11 = ContainerId;
    if ( ContainerId >= 0 )
    {
      v14 = v21;
      if ( !(_QWORD)v21 )
        v14 = *((_QWORD *)&v21 + 1) + 1LL;
      if ( !v14 )
      {
        pv = 0LL;
        GetId = a2->lpVtbl->GetId;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v16 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a2, &pv);
        v11 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1AB,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v16);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
          goto LABEL_22;
        }
        ReconsiderSpatialOnComboEndpoints((__int64)a1, EndpointFormFactor, (__int64)pv);
        if ( pv )
          CoTaskMemFree(pv);
      }
      goto LABEL_21;
    }
    v17 = 418LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId);
    goto LABEL_22;
  }
LABEL_21:
  v11 = 0;
LABEL_22:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v19);
  return v11;
}
