/*
 * XREFs of ?NdisPDPIFlushQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C007B140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisPDPIFlushQueue(struct _NDIS_PD_QUEUE *a1)
{
  void (__fastcall **v1)(struct _NDIS_PD_QUEUE *); // rdi

  v1 = (void (__fastcall **)(struct _NDIS_PD_QUEUE *))a1->PDPlatformReserved[0];
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x69u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
  v1[3](a1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x6Au,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
}
