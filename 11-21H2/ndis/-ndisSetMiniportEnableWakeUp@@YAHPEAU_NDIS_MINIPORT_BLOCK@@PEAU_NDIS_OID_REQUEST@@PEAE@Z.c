/*
 * XREFs of ?ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00939FC
 * Callers:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092664 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00936B8 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisSetMiniportEnableWakeUp(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  unsigned int v6; // edi
  int *InformationBuffer; // rdx
  int v8; // ecx
  char v10[4]; // [rsp+38h] [rbp-20h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      a2);
  v6 = 0;
  *a3 = 1;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    InformationBuffer = (int *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v8 = *InformationBuffer;
    if ( (a1->PnPCapabilities & 0x100) != 0 )
      v8 &= ~2u;
    *a3 = 0;
    *InformationBuffer = v8 & 0xFFFFFFFB;
  }
  else
  {
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    v6 = -1073676268;
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v6;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v10);
  }
  return v6;
}
