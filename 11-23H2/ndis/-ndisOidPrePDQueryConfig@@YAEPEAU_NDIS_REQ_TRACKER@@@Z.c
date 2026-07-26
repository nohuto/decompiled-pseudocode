/*
 * XREFs of ?ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C007D5D8 (WPP_RECORDER_SF_qdd_ea_1C007D5D8.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C007E430 (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C007E69C (WPP_RECORDER_SF_qqqqq.c)
 */

unsigned __int8 __fastcall ndisOidPrePDQueryConfig(struct _NDIS_MINIPORT_BLOCK **a1, int a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  unsigned __int8 v4; // bl
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  struct _NDIS_PD_BLOCK *PDBlock; // r14
  unsigned int v8; // eax
  KIRQL v9; // dl
  KIRQL v10; // dl
  int v11; // edx
  int v12; // r8d
  KIRQL v13; // dl
  KIRQL NewIrql; // [rsp+90h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0;
  v5 = a1[4];
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 67);
  if ( *a1 )
  {
    PDBlock = v3->PDBlock;
    if ( !*((_DWORD *)&v5->Header + 1) )
    {
      if ( (*(_DWORD *)&v5->LinkStateIndicationFlags & 0x4000) == 0
        && (v5->Header.Revision < 2u || v5->Header.Size < 0xF8u)
        || (v5->WakeUpDpcTimer.Timer.DueTime.HighPart & 1) == 0
        || HIDWORD(v5->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink)
        || v5->WakeUpDpcTimer.Timer.DueTime.LowPart != -1 )
      {
        *((_DWORD *)a1 + 10) = -1073741811;
        goto LABEL_21;
      }
      if ( PDBlock )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
        v8 = *((_DWORD *)PDBlock + 8);
        if ( v8 )
        {
          if ( v5->PcwDatapathEventMask >= v8 )
          {
            memmove(v5->Reserved4.Buffer, *((const void **)PDBlock + 3), *((unsigned int *)PDBlock + 8));
            HIDWORD(v5->Reserved28) = *((_DWORD *)PDBlock + 8);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v12, 68);
            v13 = NewIrql;
            v3->MiniportThread = 0LL;
            KeReleaseSpinLock(&v3->Lock, v13);
            *((_DWORD *)a1 + 10) = 0;
          }
          else
          {
            v10 = NewIrql;
            v3->MiniportThread = 0LL;
            KeReleaseSpinLock(&v3->Lock, v10);
            LODWORD(v5->OpenQueue) = *((_DWORD *)PDBlock + 8);
            *((_DWORD *)a1 + 10) = -1073676266;
          }
          goto LABEL_21;
        }
        v9 = NewIrql;
        v3->MiniportThread = 0LL;
        KeReleaseSpinLock(&v3->Lock, v9);
      }
    }
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_21:
    v4 = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, a3, 69);
  return v4;
}
