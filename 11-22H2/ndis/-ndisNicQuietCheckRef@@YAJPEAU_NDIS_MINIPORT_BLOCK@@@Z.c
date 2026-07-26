/*
 * XREFs of ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0059B4C
 * Callers:
 *     ndisDispatchRequest @ 0x1C0002B08 (ndisDispatchRequest.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058650 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C00217BC (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C003CCFA (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C005A67C (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C1AC (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00AE0B8 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00AEA38 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012B324 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisNicQuietCheckRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v3; // bl
  KSPIN_LOCK *v4; // rcx
  KIRQL v5; // al
  int v6; // eax
  char v7; // bp
  unsigned int v8; // esi
  struct _NDIS_MINIPORT_AOAC *v9; // rbx
  KIRQL v10; // al
  KIRQL v11; // bl

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !ndisAoAcIsD0Required(AoAc) && !*((_DWORD *)AoAc + 94) )
  {
    *((_DWORD *)AoAc + 94) = 1;
    KeClearEvent((PRKEVENT)((char *)AoAc + 392));
    KeClearEvent((PRKEVENT)((char *)AoAc + 416));
    if ( *((_QWORD *)AoAc + 104) )
    {
      *((_QWORD *)AoAc + 102) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 104);
      *((_QWORD *)AoAc + 104) = 0LL;
    }
    if ( (*((_DWORD *)AoAc + 97) & 1) != 0 && a1->LastWakeReason == 65534 )
    {
      ++*((_DWORD *)AoAc + 213);
      ndisUpdateCsSpuriousWakeStats(AoAc, (enum _NDIS_PM_WAKE_REASON_TYPE)65534);
    }
    *((_DWORD *)AoAc + 97) = 0;
    *((_DWORD *)AoAc + 269) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
    if ( a1->SelectiveSuspend
      && (ndisSelectiveSuspendStop(a1, 7LL), a1->SelectiveSuspend)
      && (a1->PnPFlags & 0x60) == 0x60
      && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
      *((_BYTE *)AoAc + 384) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
      v6 = ndisSubmitIdleRequest(a1, 1u);
      v7 = v6;
      if ( v6 == 259 )
      {
        v8 = 0;
LABEL_19:
        KeSetEvent((PRKEVENT)((char *)AoAc + 416), 0, 0);
        return v8;
      }
      v9 = a1->AoAc;
      NdisTraceLoggingUnexpectedAoAcError(a1, 3u, 0);
      *((_WORD *)v9 + 225) = *((_WORD *)v9 + 224);
      *((_WORD *)v9 + 224) = 3;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x1Cu,
          (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
          v7,
          a1);
      v8 = -1073741823;
    }
    else
    {
      v8 = ndisRequestNicQuiet(a1, 0);
      if ( !v8 )
        goto LABEL_19;
    }
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    *((_DWORD *)AoAc + 94) = 4;
    v11 = v10;
    KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
    goto LABEL_19;
  }
  if ( (unsigned int)(*((_DWORD *)AoAc + 94) - 1) <= 1 && *((_QWORD *)AoAc + 105) )
  {
    *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 105);
    *((_QWORD *)AoAc + 105) = 0LL;
  }
  KeReleaseSpinLock(v4, v3);
  return 0LL;
}
