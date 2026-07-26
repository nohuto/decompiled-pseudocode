/*
 * XREFs of WPP_RECORDER_SF_LqqZZ @ 0x1C00176B8
 * Callers:
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C014B36C (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LqqZZ(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, char a7)
{
  char *v9; // [rsp+20h] [rbp-98h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v9 = &a7;
    ndisWppFastTraceMessage(&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids, 0x19u, &a6);
  }
  LOWORD(v9) = 25;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids, (_DWORD)v9, &a6);
}
