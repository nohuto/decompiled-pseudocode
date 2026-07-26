/*
 * XREFs of ?ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C012BBC8
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C006F184 (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeUninstall(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x65u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a1);
  a1->UninstallHandler();
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x66u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a1);
}
