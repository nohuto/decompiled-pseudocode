/*
 * XREFs of ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5B74
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3380 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C009EE3C (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 */

char __fastcall ndisSetMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  char v6; // r14
  UINT InformationBufferLength; // ebp
  int v8; // ebx
  unsigned __int16 v9; // r9
  _BYTE *InformationBuffer; // r11
  UINT v11; // eax
  unsigned __int8 v12; // cl
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // r9
  int v15; // eax
  __int64 v16; // r11
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // r9
  int v20; // [rsp+38h] [rbp-40h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF

  v21 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Du,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v6 = 1;
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v8 = -1073676268;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_38;
    v9 = 126;
    goto LABEL_6;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v11 = 40;
  v12 = InformationBuffer[1];
  if ( v12 < 2u )
    goto LABEL_20;
  v13 = *((_WORD *)InformationBuffer + 1);
  if ( v13 < 0x28u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_12:
      v8 = -1073676268;
      goto LABEL_38;
    }
    v14 = 127;
LABEL_11:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v14,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      a2);
    goto LABEL_12;
  }
  if ( v12 >= 3u )
  {
    v11 = 44;
    if ( v13 < 0x2Cu )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v14 = 128;
      goto LABEL_11;
    }
  }
  if ( InformationBufferLength >= v11 )
  {
LABEL_20:
    v15 = ndisCalculateRssParametersSize(
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
            &v21);
    v8 = v15;
    if ( v15 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v17 = 130;
      v20 = v15;
      goto LABEL_23;
    }
    if ( *(_WORD *)(v16 + 12) <= 0x200u )
    {
      if ( *(_WORD *)(v16 + 20) == 40 || (*(_BYTE *)(v16 + 4) & 0x10) != 0 || !*(_BYTE *)(v16 + 8) )
      {
        v8 = 0;
        if ( InformationBufferLength >= v21 )
        {
          v6 = 0;
          goto LABEL_38;
        }
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v21;
        v8 = -1073676268;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_38;
        v17 = 133;
        v20 = -1073676268;
LABEL_23:
        WPP_RECORDER_SF_qqL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          v17,
          (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
          (char)a1,
          (char)a2,
          v20);
        goto LABEL_38;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = 132;
        goto LABEL_27;
      }
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = 131;
LABEL_27:
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v18,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)a1,
        (char)a2,
        0);
    }
    v8 = -1073676267;
    goto LABEL_38;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = v11;
  v8 = -1073676268;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = 129;
LABEL_6:
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v9,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)a2,
      -1073676268);
  }
LABEL_38:
  *a3 = v8;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x86u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)a2,
      v6,
      v8);
  if ( v8 && (byte_1C00F7644 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      a1->IfIndex,
      &SetMiniportRSSCapsFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      v8,
      2,
      (char)a2);
  return v6;
}
