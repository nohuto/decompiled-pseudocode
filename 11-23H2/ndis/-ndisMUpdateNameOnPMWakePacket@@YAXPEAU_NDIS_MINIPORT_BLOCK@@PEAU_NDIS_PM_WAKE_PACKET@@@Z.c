/*
 * XREFs of ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C009418C
 * Callers:
 *     ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0094320 (-ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0026DB8 (WPP_RECORDER_SF_qZ.c)
 *     memcpy_s @ 0x1C00360E0 (memcpy_s.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C0094480 (-ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@.c)
 *     WPP_RECORDER_SF_SqZ @ 0x1C009B76C (WPP_RECORDER_SF_SqZ.c)
 *     WPP_RECORDER_SF_dqZ @ 0x1C009B934 (WPP_RECORDER_SF_dqZ_ea_1C009B934.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00D2688 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ndisMUpdateNameOnPMWakePacket(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PM_WAKE_PACKET *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  _SINGLE_LIST_ENTRY *Next; // rdi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx

  *((_WORD *)a2 + 6) = 0;
  if ( ndisMValidatePMWakePacketForMagicPacket(a1, a2) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        0xEu,
        0x7Eu,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        (char)a1,
        &a1->pAdapterInstanceName->Length);
    return;
  }
  Next = a1->WOLPatternList.Next;
  if ( Next )
  {
    while ( HIDWORD(Next[24].Next) != *((_DWORD *)a2 + 2) )
    {
      Next = Next->Next;
      if ( !Next )
        goto LABEL_10;
    }
    *((_WORD *)a2 + 6) = Next[8].Next;
    memset((char *)a2 + 14, 0, 0x80uLL);
    memcpy_s((char *)a2 + 14, 0x7EuLL, (char *)&Next[8].Next + 2, LOWORD(Next[8].Next));
    AoAc = a1->AoAc;
    if ( AoAc )
      *((_DWORD *)AoAc + 269) = Next[5].Next;
  }
LABEL_10:
  if ( *((_DWORD *)a2 + 2) == 131073 )
  {
    if ( !Next )
    {
LABEL_13:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqZ(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v5, v6);
      return;
    }
  }
  else if ( !Next )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_13;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_SqZ(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v5, v6);
}
