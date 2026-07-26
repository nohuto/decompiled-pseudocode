/*
 * XREFs of NdisMIndicateStatus @ 0x1C006F4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D74C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001DB40 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001FAB8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

void __stdcall NdisMIndicateStatus(
        NDIS_HANDLE MiniportHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        UINT StatusBufferSize)
{
  struct _NDIS_MINIPORT_BLOCK *v8; // rcx
  int v9; // eax
  KIRQL v10; // dl
  __int64 *v11; // rax
  KIRQL v12; // dl
  __int64 v13; // [rsp+30h] [rbp-99h]
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-89h] BYREF
  int v15; // [rsp+44h] [rbp-85h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-79h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-9h] BYREF
  int v18; // [rsp+C8h] [rbp-1h]
  int v19; // [rsp+CCh] [rbp+3h]
  __int64 v20; // [rsp+D0h] [rbp+7h]
  __int64 v21; // [rsp+D8h] [rbp+Fh]
  int v22; // [rsp+E0h] [rbp+17h]
  int v23; // [rsp+E4h] [rbp+1Bh]

  NewIrql[0] = 0;
  v15 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xB0u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)MiniportHandle,
      GeneralStatus);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v8 = (struct _NDIS_MINIPORT_BLOCK *)MiniportHandle;
  v18 = *((_DWORD *)MiniportHandle + 87);
  v20 = *((_QWORD *)MiniportHandle + 345);
  v21 = *((_QWORD *)MiniportHandle + 346);
  v22 = *((_DWORD *)MiniportHandle + 203);
  v9 = *((_DWORD *)MiniportHandle + 204);
  StatusIndication.StatusBuffer = StatusBuffer;
  v23 = v9;
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = MiniportHandle;
  StatusIndication.StatusCode = GeneralStatus;
  StatusIndication.StatusBufferSize = StatusBufferSize;
  v17 = 2621824LL;
  v19 = 0;
  if ( !*((_QWORD *)MiniportHandle + 3) )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql);
    if ( GeneralStatus == 1073807372 )
    {
      *((_DWORD *)MiniportHandle + 86) = 2;
      HIDWORD(v17) = 2;
    }
    else
    {
      if ( GeneralStatus != 1073807371 )
      {
LABEL_9:
        v10 = NewIrql[0];
        *((_QWORD *)MiniportHandle + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v10);
        v8 = (struct _NDIS_MINIPORT_BLOCK *)MiniportHandle;
LABEL_10:
        ndisMAcquireStInLockWithSpinLock(v8, NewIrql);
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, &StatusIndication);
        ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql[0]);
        goto LABEL_23;
      }
      *((_DWORD *)MiniportHandle + 86) = 1;
      HIDWORD(v17) = 1;
    }
    *((_BYTE *)MiniportHandle + 88) |= 8u;
    StatusIndication.StatusBuffer = &v17;
    StatusIndication.StatusCode = 1073807383;
    StatusIndication.StatusBufferSize = 40;
    goto LABEL_9;
  }
  if ( GeneralStatus == 1073807379 )
    goto LABEL_10;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql);
  if ( GeneralStatus == 1073807371 )
  {
    if ( *((_DWORD *)MiniportHandle + 86) == 1
      && !*((_DWORD *)MiniportHandle + 459)
      && *((_DWORD *)MiniportHandle + 458) == 1 )
    {
      StatusIndication.Flags |= 4u;
      v11 = (__int64 *)&v15;
      StatusIndication.StatusCode = 1073807384;
      v15 = 1;
      StatusIndication.StatusBufferSize = 4;
LABEL_21:
      StatusIndication.StatusBuffer = v11;
      goto LABEL_22;
    }
    HIDWORD(v17) = 1;
LABEL_20:
    StatusIndication.StatusCode = 1073807383;
    v11 = &v17;
    StatusIndication.StatusBufferSize = 40;
    goto LABEL_21;
  }
  if ( GeneralStatus == 1073807372 )
  {
    HIDWORD(v17) = 2;
    goto LABEL_20;
  }
LABEL_22:
  v12 = NewIrql[0];
  *((_QWORD *)MiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v12);
  NdisMIndicateStatusEx(MiniportHandle, &StatusIndication);
LABEL_23:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = GeneralStatus;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xB1u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)MiniportHandle,
      v13);
  }
}
