/*
 * XREFs of ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0074690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F194 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070B7C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreIovVPortParameters(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r15
  char v2; // bl
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  char v4; // r12
  wchar_t *Buffer; // rbp
  int v7; // eax
  struct _NDIS_MINIPORT_BLOCK *v8; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  int v10; // eax
  char v11; // al
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rdx
  int v13; // eax
  _BYTE *OidSourceHandle; // rax
  __int64 v15; // rdx
  int v16; // eax
  UCHAR Revision; // al
  wchar_t *v18; // rcx
  _NDIS_NIC_SWITCH_VPORT_PARAMETERS *p_VPortParams; // rdx
  __int64 v20; // r8
  __int128 v21; // xmm1
  wchar_t *v22; // rcx
  _NDIS_NIC_SWITCH_VPORT_PARAMETERS *v23; // rdx
  __int64 v24; // r8
  __int128 v25; // xmm1

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  v4 = 0;
  Buffer = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x37u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v1,
      v3);
  v7 = *((_DWORD *)&v3->Header + 1);
  if ( (v7 & 0xFFFFFFFD) != 0 && v7 != 1 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_47;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->PcwDatapathEventMask >= 0x23Cu )
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
        *((_DWORD *)a1 + 10) = -1073741637;
        goto LABEL_46;
      }
    }
    v10 = *((_DWORD *)&v3->Header + 1);
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      if ( v10 == 1 )
      {
        Buffer = v3->Reserved4.Buffer;
        if ( !Buffer )
          goto LABEL_17;
        v11 = *((_BYTE *)Buffer + 1);
        if ( v11 == 1 )
        {
          HIDWORD(v3->Reserved28) = 572;
        }
        else if ( v11 == 2 )
        {
          HIDWORD(v3->Reserved28) = 748;
        }
      }
    }
    else
    {
      Buffer = v3->Reserved4.Buffer;
      HIDWORD(v3->Reserved28) = 0;
      if ( !Buffer )
        goto LABEL_17;
    }
    VPortByVPortId = ndisIovFindVPortByVPortId(v8, *((_DWORD *)Buffer + 3));
    if ( VPortByVPortId )
    {
      v13 = *((_DWORD *)&v3->Header + 1);
      if ( (v13 & 0xFFFFFFFD) == 0 )
      {
        *((_DWORD *)a1 + 10) = 0;
        Revision = VPortByVPortId->VPortParams.Header.Revision;
        if ( Revision == 1 )
        {
          v18 = v3->Reserved4.Buffer;
          p_VPortParams = &VPortByVPortId->VPortParams;
          v20 = 4LL;
          do
          {
            *(_OWORD *)v18 = *(_OWORD *)&p_VPortParams->Header.Type;
            *((_OWORD *)v18 + 1) = *(_OWORD *)&p_VPortParams->VPortName.Length;
            *((_OWORD *)v18 + 2) = *(_OWORD *)&p_VPortParams->VPortName.String[7];
            *((_OWORD *)v18 + 3) = *(_OWORD *)&p_VPortParams->VPortName.String[15];
            *((_OWORD *)v18 + 4) = *(_OWORD *)&p_VPortParams->VPortName.String[23];
            *((_OWORD *)v18 + 5) = *(_OWORD *)&p_VPortParams->VPortName.String[31];
            *((_OWORD *)v18 + 6) = *(_OWORD *)&p_VPortParams->VPortName.String[39];
            v18 += 64;
            v21 = *(_OWORD *)&p_VPortParams->VPortName.String[47];
            p_VPortParams = (_NDIS_NIC_SWITCH_VPORT_PARAMETERS *)((char *)p_VPortParams + 128);
            *((_OWORD *)v18 - 1) = v21;
            --v20;
          }
          while ( v20 );
          *(_OWORD *)v18 = *(_OWORD *)&p_VPortParams->Header.Type;
          *((_OWORD *)v18 + 1) = *(_OWORD *)&p_VPortParams->VPortName.Length;
          *((_OWORD *)v18 + 2) = *(_OWORD *)&p_VPortParams->VPortName.String[7];
          *((_QWORD *)v18 + 6) = *(_QWORD *)&p_VPortParams->VPortName.String[15];
          *((_DWORD *)v18 + 14) = *(_DWORD *)&p_VPortParams->VPortName.String[19];
          HIDWORD(v3->Reserved28) = 572;
        }
        else if ( Revision == 2 )
        {
          v22 = v3->Reserved4.Buffer;
          v23 = &VPortByVPortId->VPortParams;
          v24 = 5LL;
          do
          {
            *(_OWORD *)v22 = *(_OWORD *)&v23->Header.Type;
            *((_OWORD *)v22 + 1) = *(_OWORD *)&v23->VPortName.Length;
            *((_OWORD *)v22 + 2) = *(_OWORD *)&v23->VPortName.String[7];
            *((_OWORD *)v22 + 3) = *(_OWORD *)&v23->VPortName.String[15];
            *((_OWORD *)v22 + 4) = *(_OWORD *)&v23->VPortName.String[23];
            *((_OWORD *)v22 + 5) = *(_OWORD *)&v23->VPortName.String[31];
            *((_OWORD *)v22 + 6) = *(_OWORD *)&v23->VPortName.String[39];
            v22 += 64;
            v25 = *(_OWORD *)&v23->VPortName.String[47];
            v23 = (_NDIS_NIC_SWITCH_VPORT_PARAMETERS *)((char *)v23 + 128);
            *((_OWORD *)v22 - 1) = v25;
            --v24;
          }
          while ( v24 );
          *(_OWORD *)v22 = *(_OWORD *)&v23->Header.Type;
          *((_OWORD *)v22 + 1) = *(_OWORD *)&v23->VPortName.Length;
          *((_OWORD *)v22 + 2) = *(_OWORD *)&v23->VPortName.String[7];
          *((_OWORD *)v22 + 3) = *(_OWORD *)&v23->VPortName.String[15];
          *((_OWORD *)v22 + 4) = *(_OWORD *)&v23->VPortName.String[23];
          *((_OWORD *)v22 + 5) = *(_OWORD *)&v23->VPortName.String[31];
          *((_QWORD *)v22 + 12) = *(_QWORD *)&v23->VPortName.String[39];
          *((_DWORD *)v22 + 26) = *(_DWORD *)&v23->VPortName.String[43];
          HIDWORD(v3->Reserved28) = 748;
        }
        goto LABEL_46;
      }
      if ( v13 != 1 )
        goto LABEL_47;
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
      if ( !OidSourceHandle )
        goto LABEL_13;
      if ( *OidSourceHandle != 18 )
        goto LABEL_13;
      v4 = (char)OidSourceHandle;
      if ( *((_DWORD *)Buffer + 3) )
      {
        if ( *(_BYTE **)(v15 + 80) != OidSourceHandle )
          goto LABEL_13;
      }
      v16 = *((_DWORD *)Buffer + 1);
      if ( (v16 & 0xFFFF0000) != 0
        && ((v16 & 0x20000) == 0 || Buffer[8] <= 0x200u)
        && ((v16 & 0x80000) == 0
         || (*(_DWORD *)(v15 + 64) & 3) == 0 && *((_DWORD *)Buffer + 136) == 1 && *(_DWORD *)(v15 + 656) != 1) )
      {
        v3->ReturnPacketsQueue = (_NDIS_PACKET *)v15;
        goto LABEL_47;
      }
    }
LABEL_17:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_46;
  }
  LODWORD(v3->OpenQueue) = 572;
  *((_DWORD *)a1 + 10) = -1073676268;
LABEL_46:
  v2 = 1;
LABEL_47:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x38u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v1,
      v4,
      v2,
      *((_DWORD *)a1 + 10));
  return v2;
}
