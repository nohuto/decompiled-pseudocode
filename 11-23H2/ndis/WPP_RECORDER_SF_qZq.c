/*
 * XREFs of WPP_RECORDER_SF_qZq @ 0x1C0064230
 * Callers:
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x1C0063664 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v6; // rcx
  const wchar_t *v7; // rdx
  const wchar_t *v8; // rax
  int v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  unsigned __int16 *v13; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, unsigned __int16 *);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !v13 )
  {
    v6 = 8LL;
    goto LABEL_7;
  }
  v6 = *v13;
  if ( !*v13 )
  {
LABEL_7:
    v7 = L"NULL";
    goto LABEL_8;
  }
  v7 = (const wchar_t *)*((_QWORD *)v13 + 1);
LABEL_8:
  v8 = v13;
  if ( !v13 )
    v8 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
    0x34u,
    va,
    8LL,
    v8,
    2LL,
    v7,
    v6,
    va1,
    8LL,
    0LL);
LABEL_11:
  LOWORD(v10) = 52;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids, v10, (__int64 *)va);
}
