/*
 * XREFs of ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00753B4
 * Callers:
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077C30 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0075B20 (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075EF0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0075F6C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v2; // r14
  struct _NDIS_VF_BLOCK *v3; // r15
  int v4; // r12d
  char v6; // bp
  _BYTE *OidSourceHandle; // rax
  char *InformationBuffer; // rdi
  _DWORD *v9; // rbx
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // r13
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // r10
  unsigned __int16 v12; // dx
  bool v13; // zf
  struct _NDIS_VF_BLOCK *VFByVFId; // rax
  __int64 Pool2; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  unsigned __int8 *AllocatedVPortIndices; // r15
  size_t AllocatedVPortIndicesLength; // r13
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v35; // rax
  unsigned __int8 *v36; // rcx
  __int64 v37; // rax
  _BYTE *v38; // rdi
  __int64 v39; // r8
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  struct _NDIS_PF_BLOCK *PFBlock; // [rsp+90h] [rbp+8h]
  _BYTE *v45; // [rsp+98h] [rbp+10h]
  int *v46; // [rsp+A0h] [rbp+18h]
  struct _NDIS_OID_REQUEST *v47; // [rsp+A8h] [rbp+20h]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = 0LL;
  v47 = v1;
  v4 = 0;
  PFBlock = 0LL;
  v6 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Du,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      v2);
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 572;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  v45 = OidSourceHandle;
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_47;
  }
  InformationBuffer = (char *)v1->DATA.QUERY_INFORMATION.InformationBuffer;
  v46 = (int *)(InformationBuffer + 12);
  if ( *((_DWORD *)InformationBuffer + 3) )
  {
    v9 = (_DWORD *)((char *)a1 + 40);
    *v9 = -1073741811;
    goto LABEL_48;
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v2, *((_DWORD *)InformationBuffer + 2));
  if ( !SwitchBySwitchId )
    goto LABEL_8;
  NicSwitchCurrentCapabilities = v2->NicSwitchCurrentCapabilities;
  if ( *((_DWORD *)SwitchBySwitchId + 12) == NicSwitchCurrentCapabilities->MaxNumVPorts
    || *((_WORD *)InformationBuffer + 8) > 0x200u )
  {
    goto LABEL_8;
  }
  v12 = *((_WORD *)InformationBuffer + 266);
  if ( v12 == 0xFFFF )
  {
    PFBlock = v2->PFBlock;
    if ( !PFBlock )
      goto LABEL_8;
    v13 = *((_DWORD *)InformationBuffer + 136) == 2;
  }
  else
  {
    VFByVFId = ndisIovFindVFByVFId(v2, v12);
    v3 = VFByVFId;
    if ( !VFByVFId || *((_DWORD *)VFByVFId + 19) )
      goto LABEL_8;
    v13 = *((_DWORD *)InformationBuffer + 136) == 1;
  }
  if ( !v13 )
    goto LABEL_8;
  if ( (NicSwitchCurrentCapabilities->NicSwitchCapabilities & 4) != 0 )
  {
    if ( *((_DWORD *)InformationBuffer + 134) <= NicSwitchCurrentCapabilities->MaxNumQueuePairs
                                               - *((_DWORD *)SwitchBySwitchId + 162)
                                               - *((_DWORD *)SwitchBySwitchId + 24) )
      goto LABEL_22;
LABEL_8:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_47;
  }
  if ( *((_DWORD *)InformationBuffer + 134) != NicSwitchCurrentCapabilities->MaxNumQueuePairsPerNonDefaultVPort )
    goto LABEL_8;
LABEL_22:
  Pool2 = ExAllocatePool2(64LL, 904LL, 1869169742);
  v16 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 104) = 1;
    *(_QWORD *)(Pool2 + 72) = v2;
    *(_QWORD *)(Pool2 + 80) = v45;
    *(_QWORD *)(Pool2 + 88) = SwitchBySwitchId;
    if ( v3 )
      *(_DWORD *)(Pool2 + 64) |= 2u;
    else
      v3 = PFBlock;
    v17 = 5LL;
    *(_QWORD *)(Pool2 + 96) = v3;
    v18 = (_OWORD *)(Pool2 + 112);
    do
    {
      v19 = *((_OWORD *)InformationBuffer + 1);
      *v18 = *(_OWORD *)InformationBuffer;
      v20 = *((_OWORD *)InformationBuffer + 2);
      v18[1] = v19;
      v21 = *((_OWORD *)InformationBuffer + 3);
      v18[2] = v20;
      v22 = *((_OWORD *)InformationBuffer + 4);
      v18[3] = v21;
      v23 = *((_OWORD *)InformationBuffer + 5);
      v18[4] = v22;
      v24 = *((_OWORD *)InformationBuffer + 6);
      v18[5] = v23;
      v25 = *((_OWORD *)InformationBuffer + 7);
      InformationBuffer += 128;
      v18[6] = v24;
      v18 += 8;
      *(v18 - 1) = v25;
      --v17;
    }
    while ( v17 );
    v26 = *(_OWORD *)InformationBuffer;
    *(_QWORD *)(v16 + 896) = 0LL;
    v27 = *((_OWORD *)InformationBuffer + 1);
    *(_QWORD *)(v16 + 888) = 0LL;
    AllocatedVPortIndices = v2->AllocatedVPortIndices;
    AllocatedVPortIndicesLength = v2->AllocatedVPortIndicesLength;
    *v18 = v26;
    v30 = *((_OWORD *)InformationBuffer + 2);
    v18[1] = v27;
    v31 = *((_OWORD *)InformationBuffer + 3);
    v18[2] = v30;
    v32 = *((_OWORD *)InformationBuffer + 4);
    v18[3] = v31;
    v33 = *((_OWORD *)InformationBuffer + 5);
    v18[4] = v32;
    v34 = *((_OWORD *)InformationBuffer + 6);
    v18[5] = v33;
    v18[6] = v34;
    *(_QWORD *)(v16 + 880) = v16 + 872;
    *(_QWORD *)(v16 + 872) = v16 + 872;
    if ( AllocatedVPortIndices && (v35 = 0LL, (_DWORD)AllocatedVPortIndicesLength) )
    {
      v36 = AllocatedVPortIndices;
      while ( *v36 == 0xFF )
      {
        v4 += 8;
        v35 = (unsigned int)(v35 + 1);
        ++v36;
        if ( (unsigned int)v35 >= (unsigned int)AllocatedVPortIndicesLength )
          goto LABEL_34;
      }
      v39 = (unsigned int)v35;
      v40 = 1;
      v41 = AllocatedVPortIndices[v35];
      v42 = 0;
      while ( (v41 & v40) != 0 )
      {
        v40 *= 2;
        if ( (unsigned int)++v42 >= 8 )
          goto LABEL_34;
      }
      AllocatedVPortIndices[v39] = v40 | v41;
      v4 += v42;
    }
    else
    {
LABEL_34:
      v37 = ExAllocatePool2(66LL, (unsigned int)(AllocatedVPortIndicesLength + 64), 1869169742);
      v38 = (_BYTE *)v37;
      if ( !v37 )
      {
        *((_DWORD *)a1 + 10) = -1073741670;
        v9 = (_DWORD *)((char *)a1 + 40);
        ndisIovDeleteVPort((PVOID)v16);
        goto LABEL_48;
      }
      memset((void *)(v37 + AllocatedVPortIndicesLength), 0, 0x40uLL);
      if ( AllocatedVPortIndices )
      {
        memmove(v38, AllocatedVPortIndices, AllocatedVPortIndicesLength);
        v38[AllocatedVPortIndicesLength] = 1;
        ExFreePoolWithTag(AllocatedVPortIndices, 0);
      }
      else
      {
        *v38 = 3;
        v4 = 1;
      }
      v2->AllocatedVPortIndices = v38;
      v2->AllocatedVPortIndicesLength = AllocatedVPortIndicesLength + 64;
    }
    *(_DWORD *)(v16 + 124) = v4;
    *v46 = v4;
    *(_QWORD *)&v47->NdisReserved[80] = v16;
    *((_DWORD *)a1 + 10) = 0;
    v6 = 0;
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741670;
  }
LABEL_47:
  v9 = (_DWORD *)((char *)a1 + 40);
LABEL_48:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Eu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v2,
      *v9);
  return v6;
}
