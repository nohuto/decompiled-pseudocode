/*
 * XREFs of WPP_RECORDER_SF_qcL @ 0x1C007D208
 * Callers:
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0119C84 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qcL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids, 0xCu, va, 8LL, va1, 1LL, va2, 4LL, 0LL);
  LOWORD(v7) = 12;
  return WppAutoLogTrace(a1, 4LL, 29LL, &WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids, v7, (__int64 *)va);
}
