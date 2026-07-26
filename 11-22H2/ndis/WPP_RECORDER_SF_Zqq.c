/*
 * XREFs of WPP_RECORDER_SF_Zqq @ 0x1C00205F0
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C010FAA0 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011097C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01129FC (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ndisFindRootDevice @ 0x1C0156700 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Zqq(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6,
        char a7,
        ...)
{
  const wchar_t *v7; // rbx
  unsigned __int64 v10; // r11
  int v12; // eax
  __int64 v14; // rax
  const wchar_t *v15; // rcx
  const wchar_t *v16; // r8
  int v17; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a6;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v12, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) < 4u )
    goto LABEL_2;
  if ( !a6 )
  {
    v14 = 8LL;
    goto LABEL_10;
  }
  v14 = *a6;
  if ( !*a6 )
  {
LABEL_10:
    v15 = L"NULL";
    goto LABEL_11;
  }
  v15 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_11:
  v16 = a6;
  if ( !a6 )
    v16 = L"\b";
  ndisWppFastTraceMessage(a5, a4, v16, 2LL, v15, v14, &a7, 8LL, va, 8LL, 0LL);
LABEL_2:
  if ( !a6 )
    v7 = L"\b";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v17, v7);
}
