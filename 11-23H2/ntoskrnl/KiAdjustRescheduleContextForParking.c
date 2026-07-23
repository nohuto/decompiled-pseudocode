/*
 * XREFs of KiAdjustRescheduleContextForParking @ 0x14058052C
 * Callers:
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
 * Callees:
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 */

char __fastcall KiAdjustRescheduleContextForParking(__int64 a1, _KTHREAD *a2)
{
  __int64 Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rdx
  _BYTE *v6; // r11
  __int64 *RescheduleContextEntryForPrcb; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int8 v10; // r8
  unsigned __int8 *v11; // r11
  char v12; // r10
  __int64 v13; // r10
  __int64 *v14; // rcx
  _KTHREAD **p_NextThread; // r8
  __int64 v16; // rdx

  Blink = (__int64)a2->Header.WaitListHead.Blink;
  if ( !Blink )
    Blink = (__int64)a2->Header.WaitListHead.Flink;
  LOBYTE(CurrentPrcb) = KiIsPrcbThread(Blink);
  if ( !(_BYTE)CurrentPrcb )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (CurrentPrcb->DpcRequestSummary & 0x10000) == 0 )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v6, v5);
      LOBYTE(CurrentPrcb) = KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v8, 0, 0);
      if ( (v12 & 2) != 0 )
      {
        v13 = 0LL;
        if ( *v11 > v10 )
        {
          do
          {
            v14 = (__int64 *)&v11[32 * v13 + 16 + 8 * (unsigned int)v13];
            if ( v14 != RescheduleContextEntryForPrcb )
              KiAdjustRescheduleContextEntryForThreadRemoval(v14, v9, 0, 0);
            LODWORD(CurrentPrcb) = *v11;
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < (unsigned int)CurrentPrcb );
        }
        *((_DWORD *)v11 + 1) = 0;
      }
      p_NextThread = 0LL;
      v16 = 0LL;
      if ( *v11 )
      {
        while ( 1 )
        {
          CurrentPrcb = (struct _KPRCB *)&v11[40 * v16];
          if ( CurrentPrcb->NextThread == a2 )
            break;
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= *v11 )
            goto LABEL_16;
        }
        p_NextThread = &CurrentPrcb->NextThread;
      }
LABEL_16:
      if ( p_NextThread[1] )
      {
        CurrentPrcb = (struct _KPRCB *)p_NextThread[1];
        if ( (*(_QWORD *)(*(_QWORD *)&a2->ApcStateFill[40] + 80LL) & CurrentPrcb->ProcessorState.ContextFrame.Rsi) != 0 )
          p_NextThread[1] = 0LL;
      }
    }
  }
  return (char)CurrentPrcb;
}
