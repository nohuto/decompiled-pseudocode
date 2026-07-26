/*
 * XREFs of ?ndisSetRemoveWakeUpPattern@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099F54
 * Callers:
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096C80 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisSetRemoveWakeUpPattern(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  UINT InformationBufferLength; // r8d
  UINT v5; // eax
  _DWORD *InformationBuffer; // rcx
  unsigned int v7; // ebx
  int v8; // edx
  UINT v9; // r9d
  UINT v10; // edx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x29u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      a1);
  InformationBufferLength = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
  v5 = 24;
  *a2 = 1;
  if ( InformationBufferLength >= 0x18 )
  {
    InformationBuffer = a1->DATA.QUERY_INFORMATION.InformationBuffer;
    v7 = 0;
    v8 = InformationBuffer[2];
    if ( !v8
      || (v9 = v8 + 24, (unsigned int)(v8 + 24) < 0x18)
      || (v10 = InformationBuffer[3], v10 < v9)
      || (v5 = v10 + InformationBuffer[4], v5 < v10) )
    {
      v7 = -1073676267;
      goto LABEL_13;
    }
    if ( InformationBufferLength >= v5 )
    {
      *a2 = 0;
      goto LABEL_13;
    }
  }
  v7 = -1073676268;
  a1->DATA.QUERY_INFORMATION.BytesNeeded = v5;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return v7;
  WPP_RECORDER_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    0xBu,
    0x2Au,
    (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
    a1);
LABEL_13:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Bu,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      a1);
  return v7;
}
