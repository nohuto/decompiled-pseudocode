/*
 * XREFs of WPP_RECORDER_SF_qZZ @ 0x1C0020854
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8)
{
  __int64 v11; // rcx
  const wchar_t *v12; // r10
  const wchar_t *v13; // r9
  __int64 v14; // rdx
  const wchar_t *v15; // r8
  const wchar_t *v16; // rax
  int v17; // [rsp+20h] [rbp-88h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a8 )
  {
    v11 = *a8;
    if ( *a8 )
    {
      v12 = (const wchar_t *)*((_QWORD *)a8 + 1);
      goto LABEL_9;
    }
  }
  else
  {
    v11 = 8LL;
  }
  v12 = L"NULL";
LABEL_9:
  v13 = a8;
  if ( !a8 )
    v13 = L"\b";
  if ( !a7 )
  {
    v14 = 8LL;
    goto LABEL_15;
  }
  v14 = *a7;
  if ( !*a7 )
  {
LABEL_15:
    v15 = L"NULL";
    goto LABEL_16;
  }
  v15 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_16:
  v16 = a7;
  if ( !a7 )
    v16 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
    a4,
    &a6,
    8LL,
    v16,
    2LL,
    v15,
    v14,
    v13,
    2LL,
    v12,
    v11,
    0LL);
LABEL_2:
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids, v17, &a6);
}
