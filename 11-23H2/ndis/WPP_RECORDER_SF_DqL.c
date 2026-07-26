/*
 * XREFs of WPP_RECORDER_SF_DqL @ 0x1C000F9C0
 * Callers:
 *     ndisIfQueryFilterObject @ 0x1C010DCC0 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryObject @ 0x1C010DFB0 (ndisIfQueryObject.c)
 *     ndisIfQueryMiniportObjectNotPresent @ 0x1C010E0C0 (ndisIfQueryMiniportObjectNotPresent.c)
 *     ndisIfQueryLoopbackObject @ 0x1C010E880 (ndisIfQueryLoopbackObject.c)
 *     ndisIfQueryMiniportObject @ 0x1C01103CC (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DqL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids, a4, va, 4LL, va1, 8LL, va2, 4LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids, v8, (__int64 *)va);
}
