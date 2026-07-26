/*
 * XREFs of ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0114640
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0031880 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeSetOptions(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  int (__fastcall *SetOptionsHandler)(void *, void *); // rax
  unsigned int v2; // edi
  int v4; // eax

  SetOptionsHandler = a1->MiniportDriverCharacteristics.SetOptionsHandler;
  v2 = 0;
  if ( SetOptionsHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD7u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        a1);
      SetOptionsHandler = a1->MiniportDriverCharacteristics.SetOptionsHandler;
    }
    v4 = SetOptionsHandler(a1, a1->MiniportDriverContext);
    v2 = v4;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD8u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        (char)a1,
        v4);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD9u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  }
  return v2;
}
