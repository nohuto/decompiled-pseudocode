/*
 * XREFs of ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009F794
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0028030 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C0027EA8 (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

char __fastcall ndisSetMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  char v6; // r15
  UINT InformationBufferLength; // r14d
  int v8; // ebx
  unsigned __int16 v9; // r9
  _BYTE *InformationBuffer; // rbp
  UINT v11; // eax
  unsigned __int8 v12; // cl
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // r9
  int v15; // eax
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // r9
  int v19; // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Du,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
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
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
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
            &v20);
    v8 = v15;
    if ( v15 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v16 = 130;
      v19 = v15;
      goto LABEL_23;
    }
    if ( *((_WORD *)InformationBuffer + 6) <= 0x200u )
    {
      if ( *((_WORD *)InformationBuffer + 10) == 40 || (InformationBuffer[4] & 0x10) != 0 || !InformationBuffer[8] )
      {
        v8 = 0;
        if ( InformationBufferLength >= v20 )
        {
          v6 = 0;
          goto LABEL_38;
        }
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v20;
        v8 = -1073676268;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_38;
        v16 = 133;
        v19 = -1073676268;
LABEL_23:
        WPP_RECORDER_SF_qqL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          v16,
          (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
          (char)a1,
          (char)a2,
          v19);
        goto LABEL_38;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = 132;
        goto LABEL_27;
      }
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = 131;
LABEL_27:
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v17,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
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
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a2,
      -1073676268);
  }
LABEL_38:
  *a3 = v8;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x86u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a2,
      v6,
      v8);
  if ( v8 && (byte_1C00EE584 & 4) != 0 )
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
