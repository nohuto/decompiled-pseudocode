/*
 * XREFs of ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BFC4 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075FA0 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreIovVPortParameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r15
  char v2; // di
  __int64 v3; // rsi
  char v4; // r12
  __int64 v5; // rbp
  int v7; // eax
  _DWORD *v8; // rbx
  struct _NDIS_MINIPORT_BLOCK *v9; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  int v11; // eax
  char v12; // al
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rdx
  int v14; // eax
  _BYTE *OidSourceHandle; // rax
  __int64 v16; // rdx
  int v17; // eax
  UCHAR Revision; // al
  __int64 v19; // rcx
  _NDIS_NIC_SWITCH_VPORT_PARAMETERS *p_VPortParams; // rdx
  __int64 v21; // r8
  __int128 v22; // xmm1
  __int64 v23; // rcx
  _NDIS_NIC_SWITCH_VPORT_PARAMETERS *v24; // rdx
  __int64 v25; // r8
  __int128 v26; // xmm1

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x37u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v1,
      v3);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = (_DWORD *)((char *)a1 + 40);
  if ( (v7 & 0xFFFFFFFD) != 0 && v7 != 1 )
  {
    v2 = 1;
    *v8 = -1073741637;
    goto LABEL_47;
  }
  *v8 = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0x23Cu )
  {
    if ( !v1 )
      goto LABEL_47;
    if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      SriovCurrentCapabilities = v1->SriovCurrentCapabilities;
      if ( !SriovCurrentCapabilities
        || !v1->NicSwitchCurrentCapabilities
        || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
      {
LABEL_13:
        *v8 = -1073741637;
        goto LABEL_46;
      }
    }
    v11 = *(_DWORD *)(v3 + 4);
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      if ( v11 == 1 )
      {
        v5 = *(_QWORD *)(v3 + 40);
        if ( !v5 )
          goto LABEL_17;
        v12 = *(_BYTE *)(v5 + 1);
        if ( v12 == 1 )
        {
          *(_DWORD *)(v3 + 52) = 572;
        }
        else if ( v12 == 2 )
        {
          *(_DWORD *)(v3 + 52) = 748;
        }
      }
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 40);
      *(_DWORD *)(v3 + 52) = 0;
      if ( !v5 )
        goto LABEL_17;
    }
    VPortByVPortId = ndisIovFindVPortByVPortId(v9, *(_DWORD *)(v5 + 12));
    if ( VPortByVPortId )
    {
      v14 = *(_DWORD *)(v3 + 4);
      if ( (v14 & 0xFFFFFFFD) == 0 )
      {
        *v8 = 0;
        Revision = VPortByVPortId->VPortParams.Header.Revision;
        if ( Revision == 1 )
        {
          v19 = *(_QWORD *)(v3 + 40);
          p_VPortParams = &VPortByVPortId->VPortParams;
          v21 = 4LL;
          do
          {
            *(_OWORD *)v19 = *(_OWORD *)&p_VPortParams->Header.Type;
            *(_OWORD *)(v19 + 16) = *(_OWORD *)&p_VPortParams->VPortName.Length;
            *(_OWORD *)(v19 + 32) = *(_OWORD *)&p_VPortParams->VPortName.String[7];
            *(_OWORD *)(v19 + 48) = *(_OWORD *)&p_VPortParams->VPortName.String[15];
            *(_OWORD *)(v19 + 64) = *(_OWORD *)&p_VPortParams->VPortName.String[23];
            *(_OWORD *)(v19 + 80) = *(_OWORD *)&p_VPortParams->VPortName.String[31];
            *(_OWORD *)(v19 + 96) = *(_OWORD *)&p_VPortParams->VPortName.String[39];
            v19 += 128LL;
            v22 = *(_OWORD *)&p_VPortParams->VPortName.String[47];
            p_VPortParams = (_NDIS_NIC_SWITCH_VPORT_PARAMETERS *)((char *)p_VPortParams + 128);
            *(_OWORD *)(v19 - 16) = v22;
            --v21;
          }
          while ( v21 );
          *(_OWORD *)v19 = *(_OWORD *)&p_VPortParams->Header.Type;
          *(_OWORD *)(v19 + 16) = *(_OWORD *)&p_VPortParams->VPortName.Length;
          *(_OWORD *)(v19 + 32) = *(_OWORD *)&p_VPortParams->VPortName.String[7];
          *(_QWORD *)(v19 + 48) = *(_QWORD *)&p_VPortParams->VPortName.String[15];
          *(_DWORD *)(v19 + 56) = *(_DWORD *)&p_VPortParams->VPortName.String[19];
          *(_DWORD *)(v3 + 52) = 572;
        }
        else if ( Revision == 2 )
        {
          v23 = *(_QWORD *)(v3 + 40);
          v24 = &VPortByVPortId->VPortParams;
          v25 = 5LL;
          do
          {
            *(_OWORD *)v23 = *(_OWORD *)&v24->Header.Type;
            *(_OWORD *)(v23 + 16) = *(_OWORD *)&v24->VPortName.Length;
            *(_OWORD *)(v23 + 32) = *(_OWORD *)&v24->VPortName.String[7];
            *(_OWORD *)(v23 + 48) = *(_OWORD *)&v24->VPortName.String[15];
            *(_OWORD *)(v23 + 64) = *(_OWORD *)&v24->VPortName.String[23];
            *(_OWORD *)(v23 + 80) = *(_OWORD *)&v24->VPortName.String[31];
            *(_OWORD *)(v23 + 96) = *(_OWORD *)&v24->VPortName.String[39];
            v23 += 128LL;
            v26 = *(_OWORD *)&v24->VPortName.String[47];
            v24 = (_NDIS_NIC_SWITCH_VPORT_PARAMETERS *)((char *)v24 + 128);
            *(_OWORD *)(v23 - 16) = v26;
            --v25;
          }
          while ( v25 );
          *(_OWORD *)v23 = *(_OWORD *)&v24->Header.Type;
          *(_OWORD *)(v23 + 16) = *(_OWORD *)&v24->VPortName.Length;
          *(_OWORD *)(v23 + 32) = *(_OWORD *)&v24->VPortName.String[7];
          *(_OWORD *)(v23 + 48) = *(_OWORD *)&v24->VPortName.String[15];
          *(_OWORD *)(v23 + 64) = *(_OWORD *)&v24->VPortName.String[23];
          *(_OWORD *)(v23 + 80) = *(_OWORD *)&v24->VPortName.String[31];
          *(_QWORD *)(v23 + 96) = *(_QWORD *)&v24->VPortName.String[39];
          *(_DWORD *)(v23 + 104) = *(_DWORD *)&v24->VPortName.String[43];
          *(_DWORD *)(v3 + 52) = 748;
        }
        goto LABEL_46;
      }
      if ( v14 != 1 )
        goto LABEL_47;
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
      if ( !OidSourceHandle )
        goto LABEL_13;
      if ( *OidSourceHandle != 18 )
        goto LABEL_13;
      v4 = (char)OidSourceHandle;
      if ( *(_DWORD *)(v5 + 12) )
      {
        if ( *(_BYTE **)(v16 + 80) != OidSourceHandle )
          goto LABEL_13;
      }
      v17 = *(_DWORD *)(v5 + 4);
      if ( (v17 & 0xFFFF0000) != 0
        && ((v17 & 0x20000) == 0 || *(_WORD *)(v5 + 16) <= 0x200u)
        && ((v17 & 0x80000) == 0
         || (*(_DWORD *)(v16 + 64) & 3) == 0 && *(_DWORD *)(v5 + 544) == 1 && *(_DWORD *)(v16 + 656) != 1) )
      {
        *(_QWORD *)(v3 + 152) = v16;
        goto LABEL_47;
      }
    }
LABEL_17:
    *v8 = -1073741811;
    goto LABEL_46;
  }
  *(_DWORD *)(v3 + 56) = 572;
  *v8 = -1073676268;
LABEL_46:
  v2 = 1;
LABEL_47:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x38u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v1,
      v4,
      v2,
      *v8);
  return v2;
}
