/*
 * XREFs of NdisReleaseNicActive @ 0x1C0056030
 * Callers:
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0016FB0 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0002008 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00526A0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0052CB4 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0054F10 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C0055F0C (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 */

char __fastcall NdisReleaseNicActive(__int64 a1, int a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  unsigned __int8 IsTempRefNeededAfterDeref; // r13
  int v4; // r14d
  int v7; // r15d
  __int64 AoAc; // rbx
  unsigned int *v9; // rax
  KIRQL v10; // r12
  int active; // eax
  int v12; // edx
  __int64 v13; // rcx
  struct _GUID *v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  IsTempRefNeededAfterDeref = 0;
  v4 = 0;
  v7 = 0;
  AoAc = (__int64)v2->AoAc;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x34u,
      (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
      a1,
      a2);
  LOBYTE(v9) = ndisValidComponentId(a2);
  if ( (_BYTE)v9 && v2->AoAc )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    if ( *(_DWORD *)(a1 + 848) && *(int *)(AoAc + 52) > 0 )
    {
      active = ndisAoAcActiveRefSubtract(AoAc, a2, 1);
      v7 = --*(_DWORD *)(a1 + 848);
      v4 = active;
      IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref((struct _NDIS_MINIPORT_AOAC *)AoAc);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
    if ( (byte_1C00EE583 & 4) != 0 )
    {
      LODWORD(v17) = v4;
      LODWORD(v16) = v7;
      LODWORD(v15) = a2;
      McTemplateK0xqqq_EtwWriteTransfer(v13, &NicActiveReleased, &v2->InterfaceGuid, v2->NetLuid.Value, v15, v16, v17);
    }
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(v2, *(_DWORD *)(AoAc + 284));
    v9 = &WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      LOBYTE(v9) = WPP_RECORDER_SF_DD(
                     *((_QWORD *)WPP_GLOBAL_Control + 8),
                     v12,
                     14,
                     53,
                     (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
                     v4,
                     v7);
    }
  }
  return (char)v9;
}
