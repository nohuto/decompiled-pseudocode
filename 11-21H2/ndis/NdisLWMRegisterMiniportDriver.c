/*
 * XREFs of NdisLWMRegisterMiniportDriver @ 0x1C0059970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0022160 (NdisConvertNtStatusToNdisStatus.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0031880 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C00584B4 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C01206CC (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x1C0121520 (-ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEA.c)
 */

__int64 __fastcall NdisLWMRegisterMiniportDriver(
        void *a1,
        struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a2,
        _NDIS_M_DRIVER_BLOCK **a3)
{
  unsigned int v6; // edi
  unsigned __int8 v7; // al
  int v8; // eax
  _NDIS_M_DRIVER_BLOCK *v9; // rbx
  PVOID v11; // rbx
  struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS v12; // [rsp+38h] [rbp-59h] BYREF
  PVOID P; // [rsp+108h] [rbp+77h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x81u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids);
  *a3 = 0LL;
  LOBYTE(P) = 0;
  v6 = ndisValidateLWMiniportDriverCharacteristicsHeader(a2, (unsigned __int8 *)&P);
  if ( v6 )
    goto LABEL_10;
  memset(&v12, 0, sizeof(v12));
  v12.Header.Type = -118;
  v12.Header.Revision = (unsigned __int8)P;
  if ( (_BYTE)P != 3 )
  {
    v6 = -1073676283;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x82u,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids);
LABEL_10:
    v9 = *a3;
    if ( *a3 )
    {
      _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(*a3);
      ExFreePoolWithTag(v9, 0);
      *a3 = 0LL;
    }
    goto LABEL_12;
  }
  v7 = *((_BYTE *)a2 + 4);
  P = 0LL;
  v12.MajorNdisVersion = v7;
  v12.MinorNdisVersion = *((_BYTE *)a2 + 5);
  v12.MajorDriverVersion = *((_BYTE *)a2 + 6);
  v12.MinorDriverVersion = *((_BYTE *)a2 + 7);
  v12.SetOptionsHandler = (int (__fastcall *)(void *, void *))*((_QWORD *)a2 + 4);
  v12.PauseHandler = (int (__fastcall *)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *))*((_QWORD *)a2 + 5);
  v12.RestartHandler = (int (__fastcall *)(void *, _NDIS_MINIPORT_RESTART_PARAMETERS *))*((_QWORD *)a2 + 6);
  v12.OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 7);
  v12.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)a2 + 8);
  v12.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)a2 + 9);
  v12.CancelSendHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 10);
  v12.CancelOidRequestHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 11);
  v12.DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 12);
  v12.CancelDirectOidRequestHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 13);
  v12.SynchronousOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 14);
  v12.Header.Size = 160;
  v12.Flags = 32;
  v8 = ndisLWMGetServiceKeyFromServiceName((unsigned __int8)a2 + 16);
  v6 = NdisConvertNtStatusToNdisStatus(v8);
  if ( v6 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_10;
  }
  v11 = P;
  v6 = ndisInternalRegisterMiniportDriver(0LL, (struct _UNICODE_STRING *)P, a1, &v12, (void **)a3);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v6 )
    goto LABEL_10;
LABEL_12:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x83u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      v6);
  return v6;
}
