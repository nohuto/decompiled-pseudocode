/*
 * XREFs of WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00A8E04
 * Callers:
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A83E4 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ndisNsiClientParameterChangeHandler @ 0x1C0117920 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DDDDDDDDDDD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        ...)
{
  unsigned __int64 v17; // rbx
  unsigned int v18; // edi
  int v20; // eax
  int v22; // [rsp+28h] [rbp-B9h]
  va_list va; // [rsp+180h] [rbp+9Fh] BYREF

  va_start(va, a15);
  v17 = (unsigned __int64)a3 >> 16;
  v18 = a2;
  v20 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v17 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v20, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v17 + 41) >= a2 )
    ndisWppFastTraceMessage(
      a5,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      4LL,
      &a12,
      4LL,
      &a13,
      4LL,
      &a14,
      4LL,
      &a15,
      4LL,
      va,
      4LL,
      0LL);
  LOWORD(v22) = a4;
  return WppAutoLogTrace(a1, v18, a3, a5, v22, &a6);
}
