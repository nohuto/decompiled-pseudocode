/*
 * XREFs of ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x18016409C
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI8888@Z @ 0x180162ED8 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x180163E48 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z @ 0x1801640E4 (-ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z.c)
 */

__int64 __fastcall HnsToBlocksRU(unsigned __int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ULongLongMultDivToUlongRU(a1, a2, (unsigned int)(10000000 * a3), a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\packetsizeconstraintsutil.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
