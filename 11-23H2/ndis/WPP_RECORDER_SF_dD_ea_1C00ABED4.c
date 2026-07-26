/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C00ABED4
 * Callers:
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C00AB78C (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_dD(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(&WPP_40b3d572a35736b75ceff139a227553e_Traceguids, 0xFu, va, 4LL, va1, 4LL, 0LL);
  LOWORD(v7) = 15;
  return WppAutoLogTrace(a1, 2LL, 12LL, &WPP_40b3d572a35736b75ceff139a227553e_Traceguids, v7, (__int64 *)va);
}
