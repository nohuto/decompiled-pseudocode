/*
 * XREFs of ?ndisOidPreProtocolOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A2BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092A10 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

bool __fastcall ndisOidPreProtocolOptions(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v3; // bl
  __int64 v4; // rcx
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // r15
  int v6; // eax
  __int64 v8; // rbp
  _DWORD *v9; // r14
  KIRQL v10; // cl

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0;
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v6 = *(_DWORD *)(v1 + 4);
  if ( v6 != 1 || *(_QWORD *)(v1 + 40) && *(_DWORD *)(v1 + 48) >= 4u )
  {
    v8 = *(_QWORD *)(v4 + 24);
    if ( v8 && v6 == 1 && *(_DWORD *)(v1 + 32) == 65810 )
    {
      v9 = *(_DWORD **)(v1 + 40);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 232));
      if ( (*v9 & 4) != 0 )
      {
        *v9 &= ~4u;
        *(_DWORD *)(v8 + 224) |= 8u;
      }
      if ( (*v9 & 2) != 0 && (MiniportFromReqTracker->MacOptions & 8) != 0 )
      {
        *v9 &= ~2u;
        *(_DWORD *)(v8 + 224) |= 2u;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 232), v10);
      *(_DWORD *)(v1 + 52) = 4;
    }
    if ( *(_QWORD *)a1 )
      return MiniportFromReqTracker->MajorNdisVersion >= 6u;
    return v3;
  }
  else
  {
    *(_DWORD *)(v4 + 40) = -1073741811;
    return 1;
  }
}
