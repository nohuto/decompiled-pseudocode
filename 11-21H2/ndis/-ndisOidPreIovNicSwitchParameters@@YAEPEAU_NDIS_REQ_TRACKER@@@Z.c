/*
 * XREFs of ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00739F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F194 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070ACC (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0123534 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovNicSwitchParameters(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r15
  char v2; // bl
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  char v4; // r12
  wchar_t *Buffer; // r14
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // eax
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _LIST_ENTRY *SwitchBySwitchId; // rdx
  int v14; // eax
  unsigned int v15; // r8d
  _BYTE *OidSourceHandle; // rax

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
      0x19u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v1,
      v3);
  v7 = *((_DWORD *)&v3->Header + 1);
  v8 = 548;
  if ( v7 != 12 )
  {
    if ( v7 != 1 )
      goto LABEL_50;
    *((_DWORD *)a1 + 10) = 0;
    if ( v3->PcwDatapathEventMask >= 0x224u )
    {
      if ( *((_BYTE *)v3->Reserved4.Buffer + 1) < 2u )
        goto LABEL_23;
      v8 = 552;
      if ( v3->PcwDatapathEventMask >= 0x228u )
        goto LABEL_23;
      LODWORD(v3->OpenQueue) = 552;
    }
    else
    {
      LODWORD(v3->OpenQueue) = 548;
    }
    v9 = -1073676268;
    goto LABEL_9;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->PcwDatapathEventMask < 0x224u )
  {
    v9 = -1073676268;
LABEL_8:
    HIDWORD(v3->ShortRef.SpinLock) = 548;
LABEL_9:
    *((_DWORD *)a1 + 10) = v9;
LABEL_51:
    v2 = 1;
    goto LABEL_52;
  }
  if ( HIDWORD(v3->Reserved28) < 0x224 )
  {
    v9 = -1073676266;
    goto LABEL_8;
  }
  if ( *((_BYTE *)v3->Reserved4.Buffer + 1) >= 2u )
  {
    v8 = 552;
    if ( v3->PcwDatapathEventMask < 0x228u )
    {
      v9 = -1073676268;
LABEL_15:
      HIDWORD(v3->ShortRef.SpinLock) = 552;
      goto LABEL_9;
    }
    if ( HIDWORD(v3->Reserved28) < 0x228 )
    {
      v9 = -1073676266;
      goto LABEL_15;
    }
  }
LABEL_23:
  if ( !v1 )
    goto LABEL_52;
  v10 = *((_DWORD *)&v3->Header + 1);
  if ( v10 == 12 )
  {
    HIDWORD(v3->OpenQueue) = 0;
    LODWORD(v3->ShortRef.SpinLock) = v8;
  }
  else
  {
    if ( v10 != 1 )
      goto LABEL_29;
    HIDWORD(v3->Reserved28) = v8;
  }
  Buffer = v3->Reserved4.Buffer;
LABEL_29:
  if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
  {
    SriovCurrentCapabilities = v1->SriovCurrentCapabilities;
    if ( !SriovCurrentCapabilities
      || !v1->NicSwitchCurrentCapabilities
      || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
    {
      goto LABEL_50;
    }
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v11, *((_DWORD *)Buffer + 3));
  if ( !SwitchBySwitchId )
  {
LABEL_34:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_51;
  }
  v14 = *((_DWORD *)&v3->Header + 1);
  if ( v14 == 12 )
  {
    memmove(v3->Reserved4.Buffer, (char *)&SwitchBySwitchId[6].Flink + 4, v8);
    *((_DWORD *)a1 + 10) = 0;
    HIDWORD(v3->OpenQueue) = v8;
    goto LABEL_51;
  }
  if ( v14 != 1 )
    goto LABEL_52;
  if ( v8 >= 0x228 )
  {
    if ( ndisIovHWvRSSSupported(v1) )
    {
      if ( !v15 || v15 > v1->NicSwitchCurrentCapabilities->MaxNumQueuePairsForDefaultVPort )
        goto LABEL_34;
    }
    else if ( v15 != 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
LABEL_50:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_51;
  }
  v4 = (char)OidSourceHandle;
  if ( (*((_DWORD *)Buffer + 1) & 0x10000) == 0 || Buffer[8] > 0x200u )
    goto LABEL_34;
LABEL_52:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Au,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v1,
      v4,
      v2,
      *((_DWORD *)a1 + 10));
  return v2;
}
