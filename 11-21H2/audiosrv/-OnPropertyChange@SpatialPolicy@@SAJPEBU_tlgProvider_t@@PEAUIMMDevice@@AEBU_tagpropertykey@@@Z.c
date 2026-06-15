/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800535CC
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18004DF00 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x1800537D8 (ReconsiderSpatialOnComboEndpoints.c)
 *     GetContainerId @ 0x180053A60 (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x180053AF4 (GetEndpointFormFactor.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180055FD0 (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
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
  unsigned int EndpointFormFactor; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-28h] BYREF
  void *v21; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v7 = qword_1801C2FC8 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( qword_1801C2FC8 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v7 = qword_1801C2FD0 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v7 )
    GetSpatialSettingsMonitoringPKey(&qword_1801C2FC8);
  if ( dword_1801C1770 == -1 )
  {
    dword_1801C1770 = 1;
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
        &dword_1801C1770,
        &pcbData);
    }
  }
  if ( dword_1801C1770 )
    return 0LL;
  v8 = *(_QWORD *)&a3->fmtid.Data1 - qword_1801C2FC8;
  if ( *(_QWORD *)&a3->fmtid.Data1 == qword_1801C2FC8 )
    v8 = *(_QWORD *)a3->fmtid.Data4 - qword_1801C2FD0;
  if ( v8 || a3->pid != dword_1801C2FD8 )
    return 0LL;
  v19 = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(
                  a2,
                  0LL,
                  &v19);
  v11 = ContainerId;
  if ( ContainerId < 0 )
  {
    v17 = 411LL;
    goto LABEL_30;
  }
  EndpointFormFactor = GetEndpointFormFactor(v19);
  v13 = EndpointFormFactor - 1;
  if ( (v13 & 0xFFFFFFFD) == 0 )
  {
    ContainerId = GetContainerId(v13, v19, v22);
    v11 = ContainerId;
    if ( ContainerId >= 0 )
    {
      v14 = v22[0];
      if ( !v22[0] )
        v14 = v22[1] + 1LL;
      if ( !v14 )
      {
        lpVtbl = a2->lpVtbl;
        v21 = 0LL;
        v16 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))lpVtbl->GetId)(a2, &v21);
        v11 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1AE,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v16,
            v18);
        }
        else
        {
          ReconsiderSpatialOnComboEndpoints(a1, EndpointFormFactor, v21);
          v11 = 0;
        }
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v21);
        goto LABEL_21;
      }
      goto LABEL_24;
    }
    v17 = 421LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId,
      v18);
    goto LABEL_21;
  }
LABEL_24:
  v11 = 0;
LABEL_21:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return v11;
}
