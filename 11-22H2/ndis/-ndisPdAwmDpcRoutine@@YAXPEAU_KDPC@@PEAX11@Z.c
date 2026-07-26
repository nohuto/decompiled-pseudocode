/*
 * XREFs of ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C007C490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C007C550 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisPdAwmDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x1Du,
      0x21u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      DeferredContext[6]);
  *((_BYTE *)DeferredContext + 62) = 0;
  ndisTriggerPDDrainNotification((ULONG_PTR)DeferredContext);
}
