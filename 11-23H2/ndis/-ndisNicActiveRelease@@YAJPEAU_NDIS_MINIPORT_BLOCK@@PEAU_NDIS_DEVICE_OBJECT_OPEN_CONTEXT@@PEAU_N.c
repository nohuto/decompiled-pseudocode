/*
 * XREFs of ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C005980C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0057AA0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00580C0 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005A330 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C005B360 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C005B618 (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLqdL @ 0x1C005B920 (WPP_RECORDER_SF_DDLqdL.c)
 */

__int64 __fastcall ndisNicActiveRelease(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  unsigned int v3; // ebx
  int *v6; // r14
  _QWORD *v7; // rsi
  _WORD *v8; // rbp
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v10; // r12
  int v11; // eax
  int v12; // r9d
  int v13; // ecx
  int v15; // [rsp+20h] [rbp-78h]
  unsigned __int8 IsTempRefNeededAfterDeref; // [rsp+A0h] [rbp+8h]
  char active; // [rsp+A8h] [rbp+10h]

  v3 = 0;
  active = 0;
  v6 = (int *)((char *)a3 + 16);
  v7 = (_QWORD *)((char *)a3 + 8);
  v8 = (_WORD *)((char *)a3 + 14);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDL(*((_QWORD *)WPP_GLOBAL_Control + 8), (*v7 >> 24) & 0xFFFFFF, (_DWORD)a3, 26);
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v11 = *((_DWORD *)a2 + 7);
  if ( v11 )
  {
    *((_DWORD *)a2 + 7) = v11 - 1;
    active = ndisAoAcActiveRefSubtract((__int64)AoAc, *v6, 1);
    IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    if ( (byte_1C00F7643 & 4) != 0 )
      McTemplateK0xqqq_EtwWriteTransfer(
        v13,
        (unsigned int)&NicActiveReleased,
        (_DWORD)a1 + 4008,
        *v7,
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        active);
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(a1, *((_DWORD *)AoAc + 71));
  }
  else
  {
    v3 = -1073741675;
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLqdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (unsigned __int16)*v8,
      (*v7 >> 24) & 0xFFFFFF,
      v12,
      v15,
      *v8,
      BYTE3(*v7),
      *v6,
      (char)a1,
      active,
      v3);
  return v3;
}
