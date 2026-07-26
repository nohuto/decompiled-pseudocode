/*
 * XREFs of ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C006FFA4
 * Callers:
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0072850 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00706FC (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070ACC (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0070B48 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rdi
  __int64 v2; // rsi
  struct _NDIS_VF_BLOCK *v3; // r15
  struct _NDIS_MINIPORT_BLOCK *v4; // r13
  int v5; // r12d
  char v7; // bp
  struct _NDIS_OID_REQUEST *v8; // rax
  _BYTE *OidSourceHandle; // rax
  char *InformationBuffer; // rdi
  int *v11; // rbx
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // r14
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // r10
  unsigned __int16 v14; // dx
  bool v15; // zf
  struct _NDIS_VF_BLOCK *VFByVFId; // rax
  __int64 Pool2; // rax
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  unsigned __int8 *AllocatedVPortIndices; // r14
  size_t AllocatedVPortIndicesLength; // r15
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rax
  unsigned __int8 *v37; // rcx
  __int64 v38; // rax
  _BYTE *v39; // rdi
  int v40; // eax
  __int64 v41; // r8
  int v42; // ecx
  int v43; // eax
  int v44; // edx
  int v45; // r12d
  _BYTE *v46; // r12
  struct _NDIS_OID_REQUEST *v48; // [rsp+40h] [rbp-58h]
  int v49; // [rsp+A0h] [rbp+8h]
  struct _NDIS_PF_BLOCK *PFBlock; // [rsp+A8h] [rbp+10h]
  _BYTE *v51; // [rsp+B0h] [rbp+18h]
  int *v52; // [rsp+B8h] [rbp+20h]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = 0LL;
  PFBlock = 0LL;
  v3 = 0LL;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = 0;
  v49 = 0;
  v48 = v1;
  v7 = 1;
  v8 = v1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Du,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      v4);
    v8 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  }
  v8->DATA.METHOD_INFORMATION.BytesRead = 572;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  v51 = OidSourceHandle;
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
    v40 = -1073741637;
    goto LABEL_46;
  }
  InformationBuffer = (char *)v1->DATA.QUERY_INFORMATION.InformationBuffer;
  v52 = (int *)(InformationBuffer + 12);
  if ( *((_DWORD *)InformationBuffer + 3) )
    goto LABEL_6;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v4, *((_DWORD *)InformationBuffer + 2));
  if ( !SwitchBySwitchId )
    goto LABEL_6;
  NicSwitchCurrentCapabilities = v4->NicSwitchCurrentCapabilities;
  if ( *((_DWORD *)SwitchBySwitchId + 12) == NicSwitchCurrentCapabilities->MaxNumVPorts
    || *((_WORD *)InformationBuffer + 8) > 0x200u )
  {
    goto LABEL_6;
  }
  v14 = *((_WORD *)InformationBuffer + 266);
  if ( v14 == 0xFFFF )
  {
    PFBlock = v4->PFBlock;
    if ( !PFBlock )
      goto LABEL_6;
    v15 = *((_DWORD *)InformationBuffer + 136) == 2;
  }
  else
  {
    VFByVFId = ndisIovFindVFByVFId(v4, v14);
    v3 = VFByVFId;
    if ( !VFByVFId || *((_DWORD *)VFByVFId + 19) )
      goto LABEL_6;
    v15 = *((_DWORD *)InformationBuffer + 136) == 1;
  }
  if ( !v15 )
    goto LABEL_6;
  if ( (NicSwitchCurrentCapabilities->NicSwitchCapabilities & 4) == 0 )
  {
    if ( *((_DWORD *)InformationBuffer + 134) != NicSwitchCurrentCapabilities->MaxNumQueuePairsPerNonDefaultVPort )
      goto LABEL_6;
    goto LABEL_21;
  }
  if ( *((_DWORD *)InformationBuffer + 134) > NicSwitchCurrentCapabilities->MaxNumQueuePairs
                                            - *((_DWORD *)SwitchBySwitchId + 162)
                                            - *((_DWORD *)SwitchBySwitchId + 24) )
  {
LABEL_6:
    v11 = (int *)((char *)a1 + 40);
    *v11 = -1073741811;
    goto LABEL_48;
  }
LABEL_21:
  Pool2 = ExAllocatePool2(64LL, 904LL, 1869169742);
  v2 = Pool2;
  if ( !Pool2 )
  {
    v11 = (int *)((char *)a1 + 40);
    *v11 = -1073741670;
    goto LABEL_48;
  }
  *(_DWORD *)(Pool2 + 104) = 1;
  *(_QWORD *)(Pool2 + 72) = v4;
  *(_QWORD *)(Pool2 + 80) = v51;
  *(_QWORD *)(Pool2 + 88) = SwitchBySwitchId;
  if ( v3 )
    *(_DWORD *)(Pool2 + 64) |= 2u;
  else
    v3 = PFBlock;
  v18 = 5LL;
  *(_QWORD *)(Pool2 + 96) = v3;
  v19 = (_OWORD *)(Pool2 + 112);
  do
  {
    v20 = *((_OWORD *)InformationBuffer + 1);
    *v19 = *(_OWORD *)InformationBuffer;
    v21 = *((_OWORD *)InformationBuffer + 2);
    v19[1] = v20;
    v22 = *((_OWORD *)InformationBuffer + 3);
    v19[2] = v21;
    v23 = *((_OWORD *)InformationBuffer + 4);
    v19[3] = v22;
    v24 = *((_OWORD *)InformationBuffer + 5);
    v19[4] = v23;
    v25 = *((_OWORD *)InformationBuffer + 6);
    v19[5] = v24;
    v26 = *((_OWORD *)InformationBuffer + 7);
    InformationBuffer += 128;
    v19[6] = v25;
    v19 += 8;
    *(v19 - 1) = v26;
    --v18;
  }
  while ( v18 );
  v27 = *(_OWORD *)InformationBuffer;
  *(_QWORD *)(v2 + 896) = 0LL;
  v28 = *((_OWORD *)InformationBuffer + 1);
  *(_QWORD *)(v2 + 888) = 0LL;
  AllocatedVPortIndices = v4->AllocatedVPortIndices;
  AllocatedVPortIndicesLength = v4->AllocatedVPortIndicesLength;
  *v19 = v27;
  v31 = *((_OWORD *)InformationBuffer + 2);
  v19[1] = v28;
  v32 = *((_OWORD *)InformationBuffer + 3);
  v19[2] = v31;
  v33 = *((_OWORD *)InformationBuffer + 4);
  v19[3] = v32;
  v34 = *((_OWORD *)InformationBuffer + 5);
  v19[4] = v33;
  v35 = *((_OWORD *)InformationBuffer + 6);
  v19[5] = v34;
  v19[6] = v35;
  *(_QWORD *)(v2 + 880) = v2 + 872;
  *(_QWORD *)(v2 + 872) = v2 + 872;
  if ( AllocatedVPortIndices )
  {
    v36 = 0LL;
    if ( (_DWORD)AllocatedVPortIndicesLength )
    {
      v37 = AllocatedVPortIndices;
      while ( *v37 == 0xFF )
      {
        v5 += 8;
        v36 = (unsigned int)(v36 + 1);
        ++v37;
        v49 = v5;
        if ( (unsigned int)v36 >= (unsigned int)AllocatedVPortIndicesLength )
          goto LABEL_33;
      }
      v41 = (unsigned int)v36;
      v42 = 1;
      v43 = AllocatedVPortIndices[v36];
      v44 = 0;
      while ( (v43 & v42) != 0 )
      {
        v42 *= 2;
        if ( (unsigned int)++v44 >= 8 )
          goto LABEL_33;
      }
      AllocatedVPortIndices[v41] = v42 | v43;
      v45 = v44 + v5;
      goto LABEL_44;
    }
  }
LABEL_33:
  v38 = ExAllocatePool2(66LL, (unsigned int)(AllocatedVPortIndicesLength + 64), 1869169742);
  v39 = (_BYTE *)v38;
  if ( v38 )
  {
    v46 = (_BYTE *)(AllocatedVPortIndicesLength + v38);
    memset((void *)(AllocatedVPortIndicesLength + v38), 0, 0x40uLL);
    if ( AllocatedVPortIndices )
    {
      memmove(v39, AllocatedVPortIndices, AllocatedVPortIndicesLength);
      *v46 = 1;
      ExFreePoolWithTag(AllocatedVPortIndices, 0);
      v45 = v49;
    }
    else
    {
      *v39 = 3;
      v45 = 1;
    }
    v4->AllocatedVPortIndices = v39;
    v4->AllocatedVPortIndicesLength = AllocatedVPortIndicesLength + 64;
LABEL_44:
    v11 = (int *)((char *)a1 + 40);
    *(_DWORD *)(v2 + 124) = v45;
    *v52 = v45;
    *(_QWORD *)&v48->NdisReserved[80] = v2;
    *v11 = 0;
    v7 = 0;
    goto LABEL_48;
  }
  v40 = -1073741670;
LABEL_46:
  v11 = (int *)((char *)a1 + 40);
  *v11 = v40;
  if ( v2 )
    ndisIovDeleteVPort((PVOID)v2);
LABEL_48:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Eu,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v4,
      *v11);
  return v7;
}
