/*
 * XREFs of NdisMCreateLog @ 0x1C0070F20
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

NDIS_STATUS __stdcall NdisMCreateLog(NDIS_HANDLE MiniportAdapterHandle, UINT Size, PNDIS_HANDLE LogHandle)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  NDIS_STATUS v7; // edi
  __int64 Pool2; // rax
  KIRQL v9; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v3 = Size;
  v4 = 0LL;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( *((_QWORD *)MiniportAdapterHandle + 117) || (int)v3 + 48 < (unsigned int)v3 )
  {
    v7 = -1073741823;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, v3 + 48, 1816413262);
    v4 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *((_QWORD *)MiniportAdapterHandle + 117) = Pool2;
      v7 = 0;
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 8));
      v4[2] = 0LL;
      *((_DWORD *)v4 + 7) = 0;
      *((_DWORD *)v4 + 8) = 0;
      *((_DWORD *)v4 + 9) = 0;
      *v4 = MiniportAdapterHandle;
      *((_DWORD *)v4 + 6) = v3;
    }
    else
    {
      v7 = -1073741670;
    }
  }
  v9 = NewIrql;
  *LogHandle = v4;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v9);
  return v7;
}
