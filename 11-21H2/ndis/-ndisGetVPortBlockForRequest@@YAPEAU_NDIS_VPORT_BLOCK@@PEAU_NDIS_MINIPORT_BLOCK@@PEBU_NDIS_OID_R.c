/*
 * XREFs of ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C008133C
 * Callers:
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0080C8C (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C008127C (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C008302C (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070BD8 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1C00819F4 (-ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C00835FC (WPP_RECORDER_SF_Dq_ea_1C00835FC.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisGetVPortBlockForRequest(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _NDIS_OID_REQUEST *a2)
{
  unsigned __int8 IsTargetNonDefaultVPort; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // r10
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rbx
  int v6; // r8d
  char v7; // r11
  char v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  IsTargetNonDefaultVPort = ndisIsTargetNonDefaultVPort(a2, &v10);
  VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v3, IsTargetNonDefaultVPort != 0 ? v10 : 0);
  if ( !VPortByVPortIdInternal && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = v4;
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      v6,
      11,
      (struct _GUID *)&WPP_c3a5b58c3f75330003e91651c017d5c9_Traceguids,
      v9,
      v7);
  }
  return VPortByVPortIdInternal;
}
