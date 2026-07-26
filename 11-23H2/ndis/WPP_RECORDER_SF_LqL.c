/*
 * XREFs of WPP_RECORDER_SF_LqL @ 0x1C000FA70
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1C0033D08 (ndisIfCreateCompartmentBlock.c)
 *     ndisIfQueryFilterObject @ 0x1C010DCC0 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObjectNotPresent @ 0x1C010E0C0 (ndisIfQueryMiniportObjectNotPresent.c)
 *     ndisIfQueryLoopbackObject @ 0x1C010E880 (ndisIfQueryLoopbackObject.c)
 *     ndisIfQueryMiniportObject @ 0x1C01103CC (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LqL(__int64 a1, int a2, int a3, unsigned __int16 a4, struct _GUID *a5, char a6, char a7, ...)
{
  int v10; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, &a7, 8LL, va, 4LL, 0LL);
  LOWORD(v10) = a4;
  return WppAutoLogTrace(a1, 4LL, 22LL, a5, v10, &a6);
}
