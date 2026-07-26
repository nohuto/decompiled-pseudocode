/*
 * XREFs of ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C01213E4
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002ACD4 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeSetOptions(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  unsigned int v1; // esi
  int v3; // eax
  char v5[4]; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( a1->MiniportDriverCharacteristics.SetOptionsHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD7u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        a1);
    v3 = a1->MiniportDriverCharacteristics.SetOptionsHandler(a1, a1->MiniportDriverContext);
    v1 = v3;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = v3;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD8u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        (char)a1,
        *(_DWORD *)v5);
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD9u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  }
  return v1;
}
