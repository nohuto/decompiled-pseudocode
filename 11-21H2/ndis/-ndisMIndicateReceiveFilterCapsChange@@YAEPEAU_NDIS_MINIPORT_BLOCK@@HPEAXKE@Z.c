/*
 * XREFs of ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0066FAC
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 */

unsigned __int8 __fastcall ndisMIndicateReceiveFilterCapsChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  unsigned __int8 result; // al
  size_t v9; // r9
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  size_t v11; // r8

  result = 0;
  if ( a4 >= 0x38 && *(_BYTE *)a3 == 0x80 )
  {
    v9 = *((unsigned __int16 *)a3 + 1);
    if ( (unsigned __int16)v9 >= 0x38u )
    {
      if ( *((_BYTE *)a3 + 1) )
      {
        if ( a5 )
          TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        else
          TopReceiveFilterCurrentCapabilities = a2 == 1073872912
                                              ? a1->ReceiveFilterCurrentCapabilities
                                              : a1->ReceiveFilterHwCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
        {
          v11 = 84LL;
          if ( (unsigned __int16)v9 < 0x54u )
            v11 = v9;
          memmove(TopReceiveFilterCurrentCapabilities, a3, v11);
          if ( a2 == 1073872912 )
          {
            a1->EnabledReceiveQueueTypes = a3[3];
            a1->EnabledReceiveFilterTypes = a3[2];
          }
          return 1;
        }
      }
    }
  }
  return result;
}
