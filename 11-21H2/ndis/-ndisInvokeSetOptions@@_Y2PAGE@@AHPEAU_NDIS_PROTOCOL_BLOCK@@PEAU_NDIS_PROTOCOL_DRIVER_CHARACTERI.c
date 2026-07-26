/*
 * XREFs of ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C010F520
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002A670 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeSetOptions(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a2)
{
  int (__fastcall *SetOptionsHandler)(void *, void *); // rax
  unsigned int v3; // edi
  int v7; // eax

  SetOptionsHandler = a2->SetOptionsHandler;
  v3 = 0;
  if ( SetOptionsHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x58u,
        (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
        a1);
      SetOptionsHandler = a2->SetOptionsHandler;
    }
    v7 = SetOptionsHandler(a1, a1->ProtocolDriverContext);
    v3 = v7;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x59u,
        (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
        (char)a1,
        v7);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Au,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a1);
  }
  return v3;
}
