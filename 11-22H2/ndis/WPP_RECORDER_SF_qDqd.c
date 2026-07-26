/*
 * XREFs of WPP_RECORDER_SF_qDqd @ 0x1C0009150
 * Callers:
 *     ?ndisInvokeOidRequestComplete@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00083F0 (-ndisInvokeOidRequestComplete@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00093D0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000A090 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     NdisFOidRequestComplete @ 0x1C000F4D0 (NdisFOidRequestComplete.c)
 *     NdisMOidRequestComplete @ 0x1C0040560 (NdisMOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C00B5C44 (ndisInvokeDirectOidRequestComplete.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C00B6138 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C9A0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDqd(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        ...)
{
  int v11; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, &a8, 8LL, va, 4LL, 0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 4LL, 11LL, a5, v11, &a6);
}
