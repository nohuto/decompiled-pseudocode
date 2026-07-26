/*
 * XREFs of WPP_RECORDER_SF_ZZL @ 0x1C0020720
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B80 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0137B08 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZZL(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rdi
  bool v10; // zf
  __int64 v12; // rax
  const wchar_t *v13; // r11
  const wchar_t *v14; // r10
  __int64 v15; // rcx
  const wchar_t *v16; // r9
  const wchar_t *v17; // r8
  int v18; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a7 )
  {
    v12 = *a7;
    if ( *a7 )
    {
      v13 = (const wchar_t *)*((_QWORD *)a7 + 1);
      goto LABEL_13;
    }
  }
  else
  {
    v12 = 8LL;
  }
  v13 = L"NULL";
LABEL_13:
  v14 = a7;
  if ( !a7 )
    v14 = L"\b";
  if ( !a6 )
  {
    v15 = 8LL;
    goto LABEL_19;
  }
  v15 = *a6;
  if ( !*a6 )
  {
LABEL_19:
    v16 = L"NULL";
    goto LABEL_20;
  }
  v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_20:
  v17 = a6;
  if ( !a6 )
    v17 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
    a4,
    v17,
    2LL,
    v16,
    v15,
    v14,
    2LL,
    v13,
    v12,
    va,
    4LL,
    0LL);
LABEL_2:
  v10 = a6 == 0LL;
  if ( a6 )
    v10 = 0;
  if ( v10 )
    v7 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids, v18, v7);
}
