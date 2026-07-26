/*
 * XREFs of WPP_RECORDER_SF_LZq @ 0x1C00702B8
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01129FC (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0113224 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0113794 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C0116700 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C011694C (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LZq(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        unsigned __int16 *a7,
        ...)
{
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rax
  int v13; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va, a7);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a7 )
  {
    v9 = 8LL;
    goto LABEL_7;
  }
  v9 = *a7;
  if ( !*a7 )
  {
LABEL_7:
    v10 = L"NULL";
    goto LABEL_8;
  }
  v10 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_8:
  v11 = a7;
  if ( !a7 )
    v11 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 4LL, v11, 2LL, v10, v9, va, 8LL, 0LL);
LABEL_11:
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 4LL, 28LL, a5, v13, &a6);
}
