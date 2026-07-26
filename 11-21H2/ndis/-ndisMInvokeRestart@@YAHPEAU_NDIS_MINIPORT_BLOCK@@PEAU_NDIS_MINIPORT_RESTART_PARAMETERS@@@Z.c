/*
 * XREFs of ?ndisMInvokeRestart@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x1C0105650
 * Callers:
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C013C890 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeRestart(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_RESTART_PARAMETERS *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  int v5; // eax
  unsigned int v6; // edi
  char v8[4]; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xE2u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  v5 = DriverHandle->MiniportDriverCharacteristics.RestartHandler(a1->MiniportAdapterContext, a2);
  v6 = v5;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v5;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xE3u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      *(_DWORD *)v8);
  }
  return v6;
}
