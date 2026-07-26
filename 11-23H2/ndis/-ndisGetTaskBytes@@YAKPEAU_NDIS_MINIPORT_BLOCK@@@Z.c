/*
 * XREFs of ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009FA74
 * Callers:
 *     ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A4984 (-ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisGetTaskBytes(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rbx
  char v2; // di
  int v3; // ecx
  unsigned int Encapsulation; // eax
  unsigned int v5; // ebx

  Offload = a1->Offload;
  v2 = (char)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB4u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      a1);
  v3 = Offload->TopCapabilities.LsoV1.IPv4.Encapsulation != 0 ? 64 : 28;
  if ( Offload->TopCapabilities.Checksum.IPv4Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv4Transmit.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Transmit.Encapsulation )
  {
    v3 = Offload->TopCapabilities.LsoV1.IPv4.Encapsulation != 0 ? 100 : 64;
  }
  Encapsulation = Offload->TopCapabilities.IPsecV1.Supported.Encapsulation;
  v5 = v3 + 44;
  if ( !Encapsulation )
    v5 = v3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB5u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v2,
      v5);
  return v5;
}
