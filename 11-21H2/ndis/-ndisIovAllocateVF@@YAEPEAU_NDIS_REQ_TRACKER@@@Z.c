/*
 * XREFs of ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C006F8F4
 * Callers:
 *     ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0072240 (-ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070ACC (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r15
  struct _NDIS_MINIPORT_BLOCK *v3; // r12
  char v4; // si
  __int64 v5; // rax
  int v6; // ebx
  _BYTE *OidSourceHandle; // rax
  _BYTE *v8; // r13
  __int64 v9; // rbp
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *v11; // r14
  __int64 Pool2; // rax
  __int64 v13; // rsi
  void *v14; // rcx
  _QWORD *v15; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  v5 = v1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Fu,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      v3);
    v5 = *((_QWORD *)a1 + 4);
  }
  *(_DWORD *)(v5 + 64) = 1632;
  v6 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
  v8 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v9 = *(_QWORD *)(v1 + 40);
    if ( *(_WORD *)(v9 + 1626) == 0xFFFF
      && *(_DWORD *)(v9 + 1628) == -1
      && (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v9 + 8)), (v11 = SwitchBySwitchId) != 0LL)
      && *((_DWORD *)SwitchBySwitchId + 18) != *((_DWORD *)SwitchBySwitchId + 158) )
    {
      Pool2 = ExAllocatePool2(64LL, 1728LL, 1869169742);
      v13 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 72) = 1;
        v14 = (void *)(Pool2 + 96);
        *(_QWORD *)(Pool2 + 48) = v3;
        *(_QWORD *)(Pool2 + 56) = v8;
        *(_QWORD *)(Pool2 + 64) = v11;
        v15 = (_QWORD *)(Pool2 + 80);
        v15[1] = v15;
        *v15 = v15;
        memmove(v14, (const void *)v9, 0x660uLL);
        *(_QWORD *)(v1 + 144) = v13;
        v4 = 0;
      }
      else
      {
        v6 = -1073741670;
        v4 = 1;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    *((_DWORD *)a1 + 10) = v6;
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v6 = -1073741637;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x20u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v3,
      v6);
  return v4;
}
