/*
 * XREFs of ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C008ECDC
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D894 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C008E358 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026DB8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BEC80 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWmiFindInstanceName(
        struct _NDIS_CO_VC_PTR_BLOCK **a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        wchar_t *a3,
        unsigned __int16 a4)
{
  int v4; // ebx
  _LIST_ENTRY *p_WmiEnabledVcs; // r14
  _LIST_ENTRY *i; // rsi
  UNICODE_STRING String2; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  String2.Buffer = a3;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *a1 = 0LL;
  String2.MaximumLength = a4;
  String2.Length = a4;
  if ( a4 >= 0x30u && a3 && a3[5] == 58 )
  {
    p_WmiEnabledVcs = &a2->WmiEnabledVcs;
    for ( i = a2->WmiEnabledVcs.Flink; ; i = i->Flink )
    {
      if ( i == p_WmiEnabledVcs )
        goto LABEL_14;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&i[-2].Blink, &String2, 1u) )
        break;
    }
    if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&i[-20]) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0xAu,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a2);
      v4 = -1073741823;
    }
    if ( i == p_WmiEnabledVcs )
    {
LABEL_14:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)a2,
          0x12u,
          0xBu,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a2,
          &String2.Length);
      return (unsigned int)-1073741162;
    }
    if ( v4 >= 0 )
      *a1 = (struct _NDIS_CO_VC_PTR_BLOCK *)&i[-20];
  }
  else if ( !RtlEqualUnicodeString(a2->pAdapterInstanceName, &String2, 1u) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0xCu,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a2);
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v4;
}
