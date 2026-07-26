/*
 * XREFs of ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001B880
 * Callers:
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014500 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001D194 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001DE0C (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0032D8C (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisCoDeleteVc @ 0x1C00BA9B0 (NdisCoDeleteVc.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013B55C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0147590 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 */

void __fastcall ndisSetupWmiNode(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int128 *a4,
        struct tagWNODE_SINGLE_INSTANCE **a5)
{
  unsigned int v6; // eax
  unsigned int v8; // r10d
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v14; // rbx
  _DEVICE_OBJECT *DeviceObject; // rcx
  ULONG v16; // eax
  __int128 v17; // xmm0

  v6 = (a2->Length + 9) & 0xFFFFFFF8;
  v8 = v6 + a3 + 64;
  if ( v8 < 0x40 || v8 < v6 || v8 < a3 )
  {
    v14 = 0LL;
  }
  else
  {
    v11 = v6 + 64;
    v12 = v6 + 64 + a3;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v12, 863454286);
    v14 = Pool2;
    if ( Pool2 )
    {
      DeviceObject = a1->DeviceObject;
      *Pool2 = v12;
      v16 = IoWMIDeviceObjectToProviderId(DeviceObject);
      v14[2] = 1;
      v14[1] = v16;
      v17 = *a4;
      *((_QWORD *)v14 + 2) = MEMORY[0xFFFFF78000000014];
      LOWORD(v16) = a2->Length;
      *(_OWORD *)(v14 + 6) = v17;
      v14[11] = 10;
      v14[12] = 64;
      v14[14] = v11;
      v14[15] = a3;
      *((_WORD *)v14 + 32) = v16;
      memmove((char *)v14 + 66, a2->Buffer, a2->Length);
    }
  }
  *a5 = (struct tagWNODE_SINGLE_INSTANCE *)v14;
}
