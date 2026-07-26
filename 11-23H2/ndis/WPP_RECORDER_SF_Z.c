/*
 * XREFs of WPP_RECORDER_SF_Z @ 0x1C0026ED8
 * Callers:
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C001E870 (NdisOpenProtocolConfiguration.c)
 *     NdisRegisterProtocolDriver @ 0x1C002FBC0 (NdisRegisterProtocolDriver.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C0030074 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1C00306C0 (NdisFRegisterFilterDriver.c)
 *     NdisWdfReadConfiguration @ 0x1C005D380 (NdisWdfReadConfiguration.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00745A0 (ndisHandleProtocolUnloadNotification.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C009CF98 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     NdisRegisterProtocol @ 0x1C009D850 (NdisRegisterProtocol.c)
 *     NdisOpenFile @ 0x1C00C37E0 (NdisOpenFile.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0BC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisHandleBindNotification @ 0x1C012EAE0 (ndisHandleBindNotification.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C013C90C (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C013D57C (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C013D6FC (-ReferenceWdi@@YA_NXZ.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C013E824 (ndisIfUpdateStringIfNeeded.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1C0141E7C (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C0156158 (ndisHandleProtocolReconfigNotification.c)
 *     ndisFindRootDevice @ 0x1C0156700 (ndisFindRootDevice.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C01569CC (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Z(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6)
{
  const wchar_t *v6; // rbx
  unsigned __int64 v9; // rsi
  unsigned int v10; // r14d
  int v12; // eax
  bool v13; // zf
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  const wchar_t *v17; // r8
  int v18; // [rsp+20h] [rbp-58h]

  v6 = a6;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v12, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) < a2 )
    goto LABEL_2;
  if ( !a6 )
  {
    v15 = 8LL;
    goto LABEL_12;
  }
  v15 = *a6;
  if ( !*a6 )
  {
LABEL_12:
    v16 = L"NULL";
    goto LABEL_13;
  }
  v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_13:
  v17 = a6;
  if ( !a6 )
    v17 = L"\b";
  ndisWppFastTraceMessage(a5, a4, v17, 2LL, v16, v15, 0LL);
LABEL_2:
  v13 = a6 == 0LL;
  if ( a6 )
    v13 = 0;
  if ( v13 )
    v6 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v18, v6);
}
