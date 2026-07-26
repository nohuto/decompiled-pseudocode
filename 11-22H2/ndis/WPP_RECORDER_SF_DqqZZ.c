/*
 * XREFs of WPP_RECORDER_SF_DqqZZ @ 0x1C0017268
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0148F94 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DqqZZ(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  char *v9; // [rsp+20h] [rbp-A8h]
  _DWORD v10[4]; // [rsp+A0h] [rbp-28h] BYREF

  v10[0] = 1;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v9 = &a7;
    ndisWppFastTraceMessage(&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids, 0xBu, v10);
  }
  LOWORD(v9) = 11;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids, (_DWORD)v9, v10);
}
