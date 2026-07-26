/*
 * XREFs of ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120468
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C0059820 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0022160 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00296A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C0033D30 (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x1C0058348 (WPP_RECORDER_SF_q_guid_d.c)
 *     WPP_RECORDER_SF_q_guid_ @ 0x1C005BAA8 (WPP_RECORDER_SF_q_guid_.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0111478 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C01209F0 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisLWMCreateMiniport(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_BLOCK **a3)
{
  struct _GUID v6; // xmm0
  int InterfaceAddDeviceParameters; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned __int16 v10; // r9
  int v11; // eax
  KRegKey v13; // [rsp+40h] [rbp-69h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-59h] BYREF
  __int128 v15; // [rsp+60h] [rbp-49h] BYREF
  __int64 v16; // [rsp+70h] [rbp-39h]
  char v17; // [rsp+78h] [rbp-31h]
  __int16 v18; // [rsp+79h] [rbp-30h]
  char v19; // [rsp+7Bh] [rbp-2Eh]
  int v20; // [rsp+7Ch] [rbp-2Dh]
  __int128 v21; // [rsp+80h] [rbp-29h]
  __int64 v22; // [rsp+90h] [rbp-19h]
  __int16 v23; // [rsp+98h] [rbp-11h]
  char v24; // [rsp+9Ah] [rbp-Fh]
  int v25; // [rsp+9Bh] [rbp-Eh]
  char v26; // [rsp+9Fh] [rbp-Ah]
  __int64 v27; // [rsp+A0h] [rbp-9h]
  __int16 v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+AAh] [rbp+1h]
  __int16 v30; // [rsp+AEh] [rbp+5h]
  struct _NDIS_M_DRIVER_BLOCK *v31; // [rsp+B0h] [rbp+7h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x90u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)a1,
      (__int64)a2);
  *a3 = 0LL;
  v16 = 0LL;
  v15 = 0uLL;
  v21 = 0LL;
  v6 = *a2;
  v17 = 0;
  v18 = 0;
  v14 = v6;
  v19 = 0;
  v20 = 0;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0LL;
  InterfaceAddDeviceParameters = ndisIfReadInterfaceAddDeviceParameters(
                                   (struct NDIS_MINIPORT_CREATION_CONFIG *)&v14,
                                   0LL);
  v8 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParameters);
  if ( v8 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x91u,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        (__int64)a2);
    goto LABEL_18;
  }
  if ( (_BYTE)v29 )
  {
    v13.m_ptr = 0LL;
    v9 = ndisLWMOpenConfigurationKey(&v14, &v13);
    v8 = NdisConvertNtStatusToNdisStatus(v9);
    if ( v8 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_17:
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v13.m_ptr);
        goto LABEL_18;
      }
      v10 = 147;
    }
    else
    {
      v31 = a1;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (void **)&v15 + 1,
        v13.m_ptr);
      v13.m_ptr = 0LL;
      v11 = ndisAddDevice(&v14, (void **)a3);
      v8 = NdisConvertNtStatusToNdisStatus(v11);
      if ( !v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      v10 = 148;
    }
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      v10,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (__int64)a2);
    goto LABEL_17;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x92u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (__int64)a2);
  v8 = -1073741811;
LABEL_18:
  NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&v14);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x95u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)a1,
      (__int64)a2,
      v8);
  return v8;
}
