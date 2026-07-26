/*
 * XREFs of WPP_RECORDER_SF_qq_guid_ @ 0x1C0060ED0
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C005EA70 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qq_guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8)
{
  int v10; // [rsp+20h] [rbp-48h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids, 0x95u, &a6, 8LL, &a7, 8LL, a8, 16LL, 0LL);
  LOWORD(v10) = 149;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids, v10, &a6);
}
