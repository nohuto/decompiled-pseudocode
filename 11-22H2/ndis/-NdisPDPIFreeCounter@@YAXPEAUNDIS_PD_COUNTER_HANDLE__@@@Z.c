/*
 * XREFs of ?NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C01323F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C0130504 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C01334C8 (-ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z.c)
 */

void __fastcall NdisPDPIFreeCounter(struct NDIS_PD_COUNTER_HANDLE__ *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 6);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x2Cu,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
  ndisCleanupPDCounter((struct NDIS_PD_COUNTER *)a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 80) + 48LL))(v3);
  NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)a1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x2Du,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
}
