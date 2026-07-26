/*
 * XREFs of NdisLWMRegisterMiniportDriver @ 0x1C005EBC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001C000 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002AB44 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     WPP_RECORDER_SF_d @ 0x1C00331FC (WPP_RECORDER_SF_d_ea_1C00331FC.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C005D700 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C012C464 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x1C012CFB0 (-ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEA.c)
 */

__int64 __fastcall NdisLWMRegisterMiniportDriver(
        void *a1,
        struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a2,
        _NDIS_M_DRIVER_BLOCK **a3)
{
  unsigned int v6; // edi
  bool v7; // zf
  unsigned int v8; // ecx
  int (__fastcall *v9)(void *, void *); // rax
  int (__fastcall *v10)(void *, _NDIS_OID_REQUEST *); // rax
  int v11; // eax
  _NDIS_M_DRIVER_BLOCK *v12; // rbx
  PVOID v14; // rbx
  struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS v15; // [rsp+38h] [rbp-59h] BYREF
  PVOID P; // [rsp+108h] [rbp+77h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x80u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids);
  *a3 = 0LL;
  LOBYTE(P) = 0;
  v6 = ndisValidateLWMiniportDriverCharacteristicsHeader(a2, (unsigned __int8 *)&P);
  if ( v6 )
    goto LABEL_12;
  memset(&v15, 0, sizeof(v15));
  v15.Header.Type = -118;
  v15.Header.Revision = (unsigned __int8)P;
  if ( (_BYTE)P != 3 )
  {
    v6 = -1073676283;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x81u,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids);
LABEL_12:
    v12 = *a3;
    if ( *a3 )
    {
      _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(*a3);
      ExFreePoolWithTag(v12, 0);
      *a3 = 0LL;
    }
    goto LABEL_14;
  }
  v7 = (*((_BYTE *)a2 + 8) & 0x10) == 0;
  v8 = 32;
  v15.MajorNdisVersion = *((_BYTE *)a2 + 4);
  v15.MinorNdisVersion = *((_BYTE *)a2 + 5);
  v15.MajorDriverVersion = *((_BYTE *)a2 + 6);
  v15.MinorDriverVersion = *((_BYTE *)a2 + 7);
  if ( !v7 )
    v8 = 48;
  v15.Header.Size = 160;
  v9 = (int (__fastcall *)(void *, void *))*((_QWORD *)a2 + 4);
  P = 0LL;
  v15.SetOptionsHandler = v9;
  v15.PauseHandler = (int (__fastcall *)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *))*((_QWORD *)a2 + 5);
  v15.RestartHandler = (int (__fastcall *)(void *, _NDIS_MINIPORT_RESTART_PARAMETERS *))*((_QWORD *)a2 + 6);
  v15.OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 7);
  v15.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)a2 + 8);
  v15.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)a2 + 9);
  v15.CancelSendHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 10);
  v15.CancelOidRequestHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 11);
  v15.DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 12);
  v15.CancelDirectOidRequestHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 13);
  v10 = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 14);
  v15.Flags = v8;
  v15.SynchronousOidRequestHandler = v10;
  v11 = ndisLWMGetServiceKeyFromServiceName((unsigned __int8)a2 + 16);
  v6 = NdisConvertNtStatusToNdisStatus(v11);
  if ( v6 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_12;
  }
  v14 = P;
  v6 = ndisInternalRegisterMiniportDriver(0LL, (struct _UNICODE_STRING *)P, a1, &v15, (void **)a3);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v6 )
    goto LABEL_12;
LABEL_14:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x82u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      v6);
  return v6;
}
