/*
 * XREFs of WPP_RECORDER_SF_ZLqL @ 0x1C00801B0
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01477A0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZLqL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v8; // rax
  const wchar_t *v9; // rcx
  const wchar_t *v10; // r8
  int v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+D0h] [rbp+38h] BYREF
  va_list va; // [rsp+D0h] [rbp+38h]
  __int64 v15; // [rsp+D8h] [rbp+40h] BYREF
  va_list va1; // [rsp+D8h] [rbp+40h]
  va_list va2; // [rsp+E0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v6 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a6 )
  {
    v8 = 8LL;
    goto LABEL_7;
  }
  v8 = *a6;
  if ( !*a6 )
  {
LABEL_7:
    v9 = L"NULL";
    goto LABEL_8;
  }
  v9 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_8:
  v10 = a6;
  if ( !a6 )
    v10 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
    0x11u,
    v10,
    2LL,
    v9,
    v8,
    va,
    4LL,
    va1,
    8LL,
    va2,
    4LL,
    0LL);
LABEL_11:
  if ( !a6 )
    v6 = L"\b";
  LOWORD(v12) = 17;
  return WppAutoLogTrace(a1, 4LL, 13LL, &WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids, v12, v6);
}
