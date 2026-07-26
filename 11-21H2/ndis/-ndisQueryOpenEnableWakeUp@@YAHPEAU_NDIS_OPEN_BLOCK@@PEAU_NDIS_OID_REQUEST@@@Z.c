/*
 * XREFs of ?ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0092910
 * Callers:
 *     ?ndisQueryEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00928A4 (-ndisQueryEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisQueryOpenEnableWakeUp(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int v4; // ebx
  UINT v5; // eax
  char v7[4]; // [rsp+38h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAu,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      a2);
  v4 = 0;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = a1->WakeUpEnable;
    v5 = 0;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
  }
  else
  {
    v4 = -1073676268;
    v5 = 4;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = v5;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v7);
  }
  return v4;
}
