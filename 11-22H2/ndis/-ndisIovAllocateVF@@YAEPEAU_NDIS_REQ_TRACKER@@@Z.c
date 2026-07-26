/*
 * XREFs of ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0074CFC
 * Callers:
 *     ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077620 (-ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075EF0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r15
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  char v4; // r13
  _BYTE *OidSourceHandle; // rax
  _BYTE *v6; // r12
  __int64 v7; // rdi
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rax
  _DWORD *v9; // rbx
  struct _NDIS_NIC_SWITCH_BLOCK *v10; // rbp
  __int64 Pool2; // rax
  __int64 v12; // rsi
  void *v13; // rcx
  _QWORD *v14; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Fu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      v3);
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 1632;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
  v6 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v7 = *(_QWORD *)(v1 + 40);
    if ( *(_WORD *)(v7 + 1626) != 0xFFFF || *(_DWORD *)(v7 + 1628) != -1 )
    {
      v9 = (_DWORD *)((char *)a1 + 40);
LABEL_9:
      *v9 = -1073741811;
      goto LABEL_15;
    }
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v7 + 8));
    v9 = (_DWORD *)((char *)a1 + 40);
    v10 = SwitchBySwitchId;
    if ( !SwitchBySwitchId || *((_DWORD *)SwitchBySwitchId + 18) == *((_DWORD *)SwitchBySwitchId + 158) )
      goto LABEL_9;
    Pool2 = ExAllocatePool2(64LL, 1728LL, 1869169742);
    v12 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 72) = 1;
      v13 = (void *)(Pool2 + 96);
      *(_QWORD *)(Pool2 + 48) = v3;
      *(_QWORD *)(Pool2 + 56) = v6;
      *(_QWORD *)(Pool2 + 64) = v10;
      v14 = (_QWORD *)(Pool2 + 80);
      v14[1] = v14;
      *v14 = v14;
      memmove(v13, (const void *)v7, 0x660uLL);
      *(_QWORD *)(v1 + 144) = v12;
      *v9 = 0;
      v4 = 0;
    }
    else
    {
      *v9 = -1073741670;
    }
  }
  else
  {
    v9 = (_DWORD *)((char *)a1 + 40);
    *v9 = -1073741637;
  }
LABEL_15:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x20u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      *v9);
  return v4;
}
