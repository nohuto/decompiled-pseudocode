/*
 * XREFs of WPP_RECORDER_SF_DDDDD @ 0x1C00B221C
 * Callers:
 *     ndisMEmitTraceRundown @ 0x1C00B1CC4 (ndisMEmitTraceRundown.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DDDDD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-68h]
  __int64 v8; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v10; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  __int64 v12; // [rsp+C8h] [rbp+40h] BYREF
  va_list va2; // [rsp+C8h] [rbp+40h]
  __int64 v14; // [rsp+D0h] [rbp+48h] BYREF
  va_list va3; // [rsp+D0h] [rbp+48h]
  va_list va4; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) )
    ndisWppFastTraceMessage(
      &WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids,
      0xFu,
      va,
      4LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      va4,
      4LL,
      0LL);
  LOWORD(v7) = 15;
  return WppAutoLogTrace(a1, 1LL, 2LL, &WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids, v7, (__int64 *)va);
}
