/*
 * XREFs of ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C008BBFC
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

char __fastcall ndisMIndicateOffloadChange(struct _NDIS_MINIPORT_BLOCK *a1, int a2, _WORD *a3, unsigned int a4)
{
  char v5; // di
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  size_t v10; // rdi
  int v11; // ebp
  char v12; // r14
  _NDIS_MINIPORT_OFFLOAD *v13; // rax
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  Offload = a1->Offload;
  if ( Offload && a4 >= 0x70 && *(_BYTE *)a3 == 0xA7 && a3[1] >= 0x70u && *((_BYTE *)a3 + 1) )
  {
    v10 = 216LL;
    v11 = (a1->DeviceFlags & 2) != 0 ? -7 : -1;
    if ( a2 == 1073872902 )
    {
      memset(&Offload->MiniportCurrentConfig, 0, sizeof(Offload->MiniportCurrentConfig));
      if ( a3[1] < 0xD8u )
        v10 = (unsigned __int16)a3[1];
      memmove(&a1->Offload->MiniportCurrentConfig, a3, v10);
      a1->Offload->MiniportCurrentConfig.Flags &= v11;
    }
    else
    {
      v12 = Offload->MiniportHardwareCapabilities.Flags & 1;
      memset(&Offload->MiniportHardwareCapabilities, 0, sizeof(Offload->MiniportHardwareCapabilities));
      if ( a3[1] < 0xD8u )
        v10 = (unsigned __int16)a3[1];
      memmove(&a1->Offload->MiniportHardwareCapabilities, a3, v10);
      v13 = a1->Offload;
      if ( v12 )
        v13->MiniportHardwareCapabilities.Flags |= 1u;
      else
        v13->MiniportHardwareCapabilities.Flags &= ~1u;
      a1->Offload->MiniportHardwareCapabilities.Flags &= v11;
    }
    v5 = 1;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return v5;
}
