/*
 * XREFs of ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C00233A4
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x1C00234F8 (WPP_RECORDER_SF_qql_ea_1C00234F8.c)
 */

char __fastcall ndisQueueFilterOnDriver(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_FILTER_DRIVER_BLOCK *a2)
{
  char v4; // si
  KIRQL v5; // al
  KIRQL v6; // r15
  int v7; // edx

  v4 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x29u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  v6 = v5;
  if ( a2->Ref.Closing )
  {
    KeReleaseSpinLock(&a2->Ref.SpinLock, v5);
    v4 = 0;
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel(&a2->Lock);
    a1->NextFilter = a2->FilterQueue;
    a2->FilterQueue = a1;
    KeReleaseSpinLockFromDpcLevel(&a2->Lock);
    KeReleaseSpinLock(&a2->Ref.SpinLock, v6);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      1,
      42,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      (char)a2,
      v4);
  return v4;
}
