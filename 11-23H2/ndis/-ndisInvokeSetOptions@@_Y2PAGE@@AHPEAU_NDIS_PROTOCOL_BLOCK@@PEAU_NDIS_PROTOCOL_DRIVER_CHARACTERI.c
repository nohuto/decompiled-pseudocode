/*
 * XREFs of ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C011E628
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002FBC0 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeSetOptions(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a2)
{
  unsigned int v2; // edi
  int v6; // eax
  char v7[4]; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( a2->SetOptionsHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x58u,
        (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
        a1);
    v6 = a2->SetOptionsHandler(a1, a1->ProtocolDriverContext);
    v2 = v6;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = v6;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x59u,
        (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
        (char)a1,
        *(_DWORD *)v7);
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Au,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      a1);
  }
  return v2;
}
