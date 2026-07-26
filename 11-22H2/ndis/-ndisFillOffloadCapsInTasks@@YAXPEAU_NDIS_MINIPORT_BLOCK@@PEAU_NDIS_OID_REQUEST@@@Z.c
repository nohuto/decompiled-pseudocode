/*
 * XREFs of ?ndisFillOffloadCapsInTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F5E8
 * Callers:
 *     ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A4964 (-ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisFillOffloadCapsInTasks(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  char *v2; // rbp
  int *v3; // rdi
  char *v4; // rsi
  _DWORD *v6; // rbx
  _DWORD *InformationBuffer; // r10
  UINT v9; // r9d
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  int v11; // edx
  _DWORD *v12; // r8
  __int64 v13; // rax
  int v14; // edx
  _DWORD *v15; // rdx

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB6u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      a1);
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v9 = 28;
  Offload = a1->Offload;
  v11 = InformationBuffer[4];
  v12 = InformationBuffer + 7;
  InformationBuffer[3] = 28;
  if ( Offload->TopCapabilities.LsoV1.IPv4.Encapsulation )
  {
    InformationBuffer[8] = 24;
    v4 = (char *)(InformationBuffer + 12);
    *v12 = 1;
    InformationBuffer[9] = 2;
    v2 = (char *)(InformationBuffer + 7);
    InformationBuffer[11] = 16;
    InformationBuffer[10] = 36;
    *((_OWORD *)InformationBuffer + 3) = 0LL;
    InformationBuffer[13] = Offload->TopCapabilities.LsoV1.IPv4.MaxOffLoadSize;
    InformationBuffer[14] = Offload->TopCapabilities.LsoV1.IPv4.MinSegmentCount;
    if ( (*((_DWORD *)&Offload->TopCapabilities.LsoV1.IPv4 + 3) & 3) == 1 )
      *((_BYTE *)InformationBuffer + 60) = 1;
    if ( (*((_DWORD *)&Offload->TopCapabilities.LsoV1.IPv4 + 3) & 0xC) == 4 )
      *((_BYTE *)InformationBuffer + 61) = 1;
    v13 = (unsigned int)InformationBuffer[10];
    v12 = (_DWORD *)((char *)v12 + v13);
    v9 = v13 + 28;
  }
  if ( Offload->TopCapabilities.Checksum.IPv4Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv4Transmit.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Transmit.Encapsulation )
  {
    v12[2] = 0;
    v3 = v12 + 5;
    v12[3] = 36;
    v9 += 36;
    v12[1] = 24;
    *v12 = 1;
    v12[4] = 16;
    v2 = (char *)v12;
    *(_OWORD *)(v12 + 5) = 0LL;
    if ( v11 == 2 )
    {
      if ( (Offload->TopCapabilities.Checksum.IPv4Transmit.Encapsulation & 2) != 0 )
      {
        v14 = 0;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1) & 3) == 1 )
        {
          *v3 = 1;
          v14 = 1;
        }
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1) & 0xC) == 4 )
        {
          v14 |= 2u;
          *v3 = v14;
        }
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1) & 0x30) == 0x10 )
        {
          v14 |= 4u;
          *v3 = v14;
        }
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1) & 0xC0) == 0x40 )
        {
          v14 |= 8u;
          *v3 = v14;
        }
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1) & 0x300) == 0x100 )
          *v3 = v14 | 0x10;
      }
      if ( (Offload->TopCapabilities.Checksum.IPv4Receive.Encapsulation & 2) != 0 )
      {
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1) & 3) == 1 )
          v12[6] |= 1u;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1) & 0xC) == 4 )
          v12[6] |= 2u;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1) & 0x30) == 0x10 )
          v12[6] |= 4u;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1) & 0xC0) == 0x40 )
          v12[6] |= 8u;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1) & 0x300) == 0x100 )
          v12[6] |= 0x10u;
      }
      if ( (Offload->TopCapabilities.Checksum.IPv6Receive.Encapsulation & 2) != 0 )
      {
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Receive + 1) & 0xC) == 4 )
          v12[8] |= 2u;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Receive + 1) & 0x30) == 0x10 )
          v12[8] |= 4u;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Receive + 1) & 0xC0) == 0x40 )
          v12[8] |= 8u;
      }
      if ( (Offload->TopCapabilities.Checksum.IPv6Transmit.Encapsulation & 2) != 0 )
      {
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Transmit + 1) & 0xC) == 4 )
          v12[7] |= 2u;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Transmit + 1) & 0x30) == 0x10 )
          v12[7] |= 4u;
        if ( (*((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Transmit + 1) & 0xC0) == 0x40 )
          v12[7] |= 8u;
      }
    }
    v12 = (_DWORD *)((char *)v12 + (unsigned int)v12[3]);
  }
  if ( Offload->TopCapabilities.IPsecV1.Supported.Encapsulation )
  {
    v12[3] = 44;
    v6 = v12 + 5;
    v15 = v12 + 9;
    v12[1] = 24;
    v12[4] = 24;
    v9 += 44;
    v2 = (char *)v12;
    *v12 = 1;
    v12[2] = 1;
    *(_OWORD *)(v12 + 5) = 0LL;
    *(_QWORD *)(v12 + 9) = 0LL;
    v12[5] = Offload->TopCapabilities.IPsecV1.Supported.AhEspCombined;
    v12[6] = Offload->TopCapabilities.IPsecV1.Supported.TransportTunnelCombined;
    v12[7] = Offload->TopCapabilities.IPsecV1.Supported.IPv4Options;
    v12[8] = Offload->TopCapabilities.IPsecV1.Supported.Flags;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4AH & 3) == 1 )
      *v15 |= 1u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4AH & 0xC) == 4 )
      *v15 |= 2u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4AH & 0x30) == 0x10 )
      *v15 |= 4u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4AH & 0x300) == 0x100 )
      *v15 |= 0x10u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4AH & 0xC00) == 0x400 )
      *v15 |= 0x20u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4ESP & 0x300) == 0x100 )
      v12[10] |= 0x10u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4ESP & 0x3000) == 0x1000 )
      v12[10] |= 0x40u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4ESP & 0xC000) == 0x4000 )
      v12[10] |= 0x80u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4ESP & 3) == 1 )
      v12[10] |= 1u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4ESP & 0xC0) == 0x40 )
      v12[10] |= 8u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4ESP & 0x30) == 0x10 )
      v12[10] |= 4u;
    if ( (*(_DWORD *)&Offload->TopCapabilities.IPsecV1.IPv4ESP & 0xC) == 4 )
      v12[10] |= 2u;
  }
  if ( !v4 && !v3 )
    InformationBuffer[3] &= -(v6 != 0LL);
  if ( v2 )
    *((_DWORD *)v2 + 3) = 0;
  a2->DATA.QUERY_INFORMATION.BytesWritten = v9;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB7u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      a1);
}
