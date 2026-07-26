/*
 * XREFs of ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0054A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C00278C4 (WPP_RECORDER_SF_qZ.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0086F14 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisNicQuietRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  int Status; // esi
  KIRQL v8; // bp
  __int64 v9; // rdx
  struct _NDIS_MINIPORT_AOAC *v10; // rbx

  AoAc = Context->AoAc;
  Status = IoStatus->Status;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_DWORD *)AoAc + 94) = ((Status >> 31) & 2) + 2;
  KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
  if ( *((_QWORD *)AoAc + 105) )
  {
    *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 105);
    *((_QWORD *)AoAc + 105) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
  if ( Status >= 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        9u,
        0x27u,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        (char)Context,
        &Context->pAdapterInstanceName->Length);
  }
  else
  {
    v10 = Context->AoAc;
    NdisTraceLoggingUnexpectedAoAcError(Context, 8u, Status);
    *((_WORD *)v10 + 225) = *((_WORD *)v10 + 224);
    *((_WORD *)v10 + 224) = 8;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x26u,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        Status,
        Context);
  }
}
