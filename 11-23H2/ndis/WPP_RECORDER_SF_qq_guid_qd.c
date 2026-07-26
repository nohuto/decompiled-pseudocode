/*
 * XREFs of WPP_RECORDER_SF_qq_guid_qd @ 0x1C0060FE0
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C005EA90 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qq_guid_qd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-68h]
  __int64 v8; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v10; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  __int64 v12; // [rsp+C8h] [rbp+40h]
  __int64 v13; // [rsp+D0h] [rbp+48h] BYREF
  va_list va2; // [rsp+D0h] [rbp+48h]
  va_list va3; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      0x97u,
      va,
      8LL,
      va1,
      8LL,
      v12,
      16LL,
      va2,
      8LL,
      va3,
      4LL,
      0LL);
  LOWORD(v7) = 151;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids, v7, (__int64 *)va);
}
