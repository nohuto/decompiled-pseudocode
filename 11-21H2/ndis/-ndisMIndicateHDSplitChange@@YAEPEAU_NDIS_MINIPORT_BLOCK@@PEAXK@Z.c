/*
 * XREFs of ?ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C006683C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

char __fastcall ndisMIndicateHDSplitChange(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, unsigned int a3)
{
  char v4; // si
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
  if ( HDSplitCurrentConfig && a3 >= 0x1C && *(_BYTE *)a2 == 0x80 && *((_WORD *)a2 + 1) >= 0x1Cu && *((_BYTE *)a2 + 1) )
  {
    v4 = 1;
    *(_OWORD *)&HDSplitCurrentConfig->Header.Type = *(_OWORD *)a2;
    *(_QWORD *)&HDSplitCurrentConfig->HDSplitCombineFlags = a2[2];
    HDSplitCurrentConfig->MaxHeaderSize = *((_DWORD *)a2 + 6);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return v4;
}
