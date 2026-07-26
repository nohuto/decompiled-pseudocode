/*
 * XREFs of ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00658D4
 * Callers:
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C00355E4 (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0095EA0 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C0148F88 (ndisReferenceNextUnprocessedMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
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
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
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
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  return 1;
}
