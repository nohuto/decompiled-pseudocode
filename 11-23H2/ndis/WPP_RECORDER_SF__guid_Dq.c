/*
 * XREFs of WPP_RECORDER_SF__guid_Dq @ 0x1C001C790
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010F918 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0110704 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0116428 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C011658C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_Dq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, __int64 a6, ...)
{
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v10 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids, a4, a6, 16LL, va, 4LL, va1, 8LL, 0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, 4LL, 28LL, &WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids, v9, a6);
}
