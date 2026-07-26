/*
 * XREFs of ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006ABB4
 * Callers:
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C009261C (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C009BEF0 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisPktMonComponentNotify @ 0x1C0136F40 (ndisPktMonComponentNotify.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C0154EE8 (ndisReferenceNextUnprocessedMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

unsigned __int8 __fastcall ndisIsMiniportReady(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int32 Flags; // edx
  unsigned __int16 v2; // r9

  Flags = a1->Flags;
  if ( (Flags & 0x80200020) != 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v2 = 256;
LABEL_13:
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        v2,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        (char)a1,
        Flags);
      return 0;
    }
    return 0;
  }
  Flags = a1->PnPFlags;
  if ( (Flags & 0x1084910) != 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v2 = 257;
      goto LABEL_13;
    }
    return 0;
  }
  Flags = a1->PnPDeviceState;
  if ( Flags != 1 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v2 = 258;
      goto LABEL_13;
    }
    return 0;
  }
  Flags = a1->CurrentDevicePowerState;
  if ( Flags != 1 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v2 = 259;
      goto LABEL_13;
    }
    return 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x104u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  return 1;
}
