/*
 * XREFs of ?ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0030A50
 * Callers:
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0030888 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeStartDevice(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned int v3; // edi
  int v7; // eax
  char v8[4]; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  v3 = 0;
  if ( DriverHandle->StartDeviceHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD4u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        a1);
      DriverHandle = a1->DriverHandle;
    }
    v7 = DriverHandle->StartDeviceHandler(a1->AddDeviceContext, a2);
    v3 = v7;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v7;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD5u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        (char)a1,
        *(_DWORD *)v8);
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD6u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  }
  return v3;
}
