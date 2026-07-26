/*
 * XREFs of WPP_RECORDER_SF_qqZ @ 0x1C002442C
 * Callers:
 *     ndisMEmitTraceRundown @ 0x1C00B1CC4 (ndisMEmitTraceRundown.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZ(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  unsigned __int64 v10; // rdi
  unsigned int v11; // ebp
  int v13; // eax
  __int64 v15; // rcx
  const wchar_t *v16; // rdx
  const wchar_t *v17; // rax
  int v18; // [rsp+20h] [rbp-78h]

  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v13, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) < a2 )
    goto LABEL_2;
  if ( !a8 )
  {
    v15 = 8LL;
    goto LABEL_8;
  }
  v15 = *a8;
  if ( !*a8 )
  {
LABEL_8:
    v16 = L"NULL";
    goto LABEL_9;
  }
  v16 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_9:
  v17 = a8;
  if ( !a8 )
    v17 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, v17, 2LL, v16, v15, 0LL);
LABEL_2:
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v18, &a6);
}
