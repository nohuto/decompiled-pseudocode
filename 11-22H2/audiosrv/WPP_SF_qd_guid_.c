/*
 * XREFs of WPP_SF_qd_guid_ @ 0x180111A08
 * Callers:
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x180111520 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd_guid_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids, 12LL, (__int64 *)va);
}
