/*
 * XREFs of WPP_RECORDER_SF_Dqqqqd @ 0x1C0009460
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Dqqqqd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-78h]
  __int64 v8; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v10; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v12; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  __int64 v14; // [rsp+E0h] [rbp+48h] BYREF
  va_list va3; // [rsp+E0h] [rbp+48h]
  __int64 v16; // [rsp+E8h] [rbp+50h] BYREF
  va_list va4; // [rsp+E8h] [rbp+50h]
  va_list va5; // [rsp+F0h] [rbp+58h] BYREF

  va_start(va5, a5);
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
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      0x10u,
      va,
      4LL,
      va1,
      8LL,
      va2,
      8LL,
      va3,
      8LL,
      va4,
      8LL,
      va5,
      4LL,
      0LL);
  LOWORD(v7) = 16;
  return WppAutoLogTrace(a1, 4LL, 11LL, &WPP_405c908af2143fed945d9a560d683c7b_Traceguids, v7, (__int64 *)va);
}
