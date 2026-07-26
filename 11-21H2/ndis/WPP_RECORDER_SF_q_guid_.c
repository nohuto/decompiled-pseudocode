/*
 * XREFs of WPP_RECORDER_SF_q_guid_ @ 0x1C005BAA8
 * Callers:
 *     KLoaderQueryDispatchTable @ 0x1C00CB168 (KLoaderQueryDispatchTable.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120468 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AC73C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_q_guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        __int64 a7)
{
  int v10; // [rsp+20h] [rbp-38h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, a7, 16LL, 0LL);
  LOWORD(v10) = a4;
  return WppAutoLogTrace(a1, 4LL, 1LL, a5, v10, &a6);
}
