/*
 * XREFs of ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0015518
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C34C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C010FCF0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

char __fastcall ndisRemoveOpenFromGlobalList(struct _NDIS_OPEN_BLOCK *a1)
{
  char v2; // bl
  KIRQL v3; // dl
  struct _NDIS_OPEN_BLOCK **p_NextGlobalOpen; // rcx
  struct _NDIS_OPEN_BLOCK *i; // rax

  v2 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x6Du,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  p_NextGlobalOpen = &ndisGlobalOpenList;
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == a1 )
    {
      v2 = 1;
      *p_NextGlobalOpen = a1->NextGlobalOpen;
      break;
    }
    p_NextGlobalOpen = &i->NextGlobalOpen;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x6Eu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  return v2;
}
