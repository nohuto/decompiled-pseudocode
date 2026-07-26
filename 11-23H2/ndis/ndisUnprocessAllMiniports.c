/*
 * XREFs of ndisUnprocessAllMiniports @ 0x1C0155010
 * Callers:
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C014B820 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisUnprocessAllMiniports(__int64 a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL v4; // dl
  signed __int32 InterlockedFlags; // eax
  signed __int32 v6; // ett

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xCu,
      (struct _GUID *)&WPP_9f67bee46862369e16808214337f5b41_Traceguids,
      a1);
  while ( 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
    v3 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
    v4 = v2;
    while ( v3 )
    {
      _m_prefetchw(&v3->InterlockedFlags);
      InterlockedFlags = v3->InterlockedFlags;
      do
      {
        v6 = InterlockedFlags;
        InterlockedFlags = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&v3->InterlockedFlags,
                             InterlockedFlags,
                             InterlockedFlags);
      }
      while ( v6 != InterlockedFlags );
      if ( (InterlockedFlags & 0x80u) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)&v3->InterlockedFlags, 0xFFFFFF7F);
        break;
      }
      v3 = v3->NextMiniport;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 392), v4);
    if ( !v3 )
      break;
    ndisDereferenceMiniport(v3, 0x52u);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_9f67bee46862369e16808214337f5b41_Traceguids,
      a1);
}
