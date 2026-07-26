/*
 * XREFs of WPP_RECORDER_SF_ZqD @ 0x1C0020D68
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01129BC (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C01131E4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZqD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  const wchar_t *v12; // r8
  int v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v14 = va_arg(va1, _QWORD);
  v6 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( !a6 )
  {
    v10 = 8LL;
    goto LABEL_10;
  }
  v10 = *a6;
  if ( !*a6 )
  {
LABEL_10:
    v11 = L"NULL";
    goto LABEL_11;
  }
  v11 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_11:
  v12 = a6;
  if ( !a6 )
    v12 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
    a4,
    v12,
    2LL,
    v11,
    v10,
    va,
    8LL,
    va1,
    4LL,
    0LL);
LABEL_2:
  if ( !a6 )
    v6 = L"\b";
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 4LL, 28LL, &WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids, v13, v6);
}
