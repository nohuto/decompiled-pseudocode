/*
 * XREFs of WPP_RECORDER_SF_i_guid_ @ 0x1C00B8054
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A3F8 (ndisIfCreateInterfaceFromPersistentStore.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_i_guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, __int64 a7)
{
  int v9; // [rsp+20h] [rbp-38h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(&WPP_3bc756b3e3313898ba315478217523d2_Traceguids, 0xDu, &a6, 8LL, a7, 16LL, 0LL);
  LOWORD(v9) = 13;
  return WppAutoLogTrace(a1, 3LL, 22LL, &WPP_3bc756b3e3313898ba315478217523d2_Traceguids, v9, &a6);
}
