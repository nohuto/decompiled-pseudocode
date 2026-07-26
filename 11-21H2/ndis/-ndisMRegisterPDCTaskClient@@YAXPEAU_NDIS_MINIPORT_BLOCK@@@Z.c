/*
 * XREFs of ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A768
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     PdcTaskClientRegister @ 0x1C0137CEC (PdcTaskClientRegister.c)
 */

void __fastcall ndisMRegisterPDCTaskClient(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x99u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a1);
  if ( (int)PdcTaskClientRegister(a1, &a1->PdcHandle) < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x9Au,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a1);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x9Bu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a1);
}
