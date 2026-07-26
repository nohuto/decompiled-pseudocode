/*
 * XREFs of ?ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00A7118
 * Callers:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A2028 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisTranslateOffloadSetsToTasks(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD_ENCAPSULATION *a2,
        struct _NDIS_OFFLOAD *a3)
{
  unsigned __int8 *v4; // rbx
  bool v5; // bp
  char v6; // di
  char v7; // r14
  unsigned int Enabled; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  int v13; // edx
  unsigned int Flags; // eax
  unsigned int v15; // edx
  unsigned int v16; // edx

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA8u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      a1);
  Enabled = a2->IPv4.Enabled;
  Offload = a1->Offload;
  v11 = a2->IPv6.Enabled;
  if ( Enabled == 1 )
  {
    v5 = Offload->MiniportCurrentConfig.LsoV1.IPv4.Encapsulation != 0;
    if ( Offload->MiniportCurrentConfig.Checksum.IPv4Transmit.Encapsulation
      || Offload->MiniportCurrentConfig.Checksum.IPv4Receive.Encapsulation )
    {
      v6 = 1;
    }
    if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.Encapsulation )
      v7 = 1;
  }
  if ( v11 == 1
    && (Offload->MiniportCurrentConfig.Checksum.IPv6Transmit.Encapsulation
     || Offload->MiniportCurrentConfig.Checksum.IPv6Receive.Encapsulation) )
  {
    v6 = 1;
  }
  *(_DWORD *)&Offload->MiniportTask[20] |= 1u;
  v12 = 28;
  *(_DWORD *)&Offload->MiniportTask[4] = 28;
  *(_DWORD *)Offload->MiniportTask = 1;
  *(_DWORD *)&Offload->MiniportTask[16] = 2;
  *(_DWORD *)&Offload->MiniportTask[24] = 14;
  if ( v5 || v6 == 1 || v7 == 1 )
  {
    v4 = &Offload->MiniportTask[28];
    *(_DWORD *)&Offload->MiniportTask[12] = 28;
    *(_DWORD *)&Offload->MiniportTask[32] = 24;
    *(_DWORD *)&Offload->MiniportTask[28] = 1;
  }
  else
  {
    *(_DWORD *)&Offload->MiniportTask[12] = 0;
  }
  if ( v6 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 4) = 16;
    v12 = 64;
    *((_DWORD *)v4 + 3) = 36;
    *(_OWORD *)(v4 + 20) = 0LL;
    if ( Enabled == 1 )
    {
      v13 = 0;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 0xC) == 4 )
      {
        *((_DWORD *)v4 + 5) = 2;
        v13 = 2;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 3) == 1 )
      {
        v13 |= 1u;
        *((_DWORD *)v4 + 5) = v13;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 0x30) == 0x10 )
      {
        v13 |= 4u;
        *((_DWORD *)v4 + 5) = v13;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 0xC0) == 0x40 )
      {
        v13 |= 8u;
        *((_DWORD *)v4 + 5) = v13;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 0x300) == 0x100 )
        *((_DWORD *)v4 + 5) = v13 | 0x10;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 0xC) == 4 )
        *((_DWORD *)v4 + 6) |= 2u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 3) == 1 )
        *((_DWORD *)v4 + 6) |= 1u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 0x30) == 0x10 )
        *((_DWORD *)v4 + 6) |= 4u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 0xC0) == 0x40 )
        *((_DWORD *)v4 + 6) |= 8u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 0x300) == 0x100 )
        *((_DWORD *)v4 + 6) |= 0x10u;
    }
    if ( v11 == 1 )
    {
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1) & 0xC) == 4 )
        *((_DWORD *)v4 + 7) |= 2u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1) & 0x30) == 0x10 )
        *((_DWORD *)v4 + 7) |= 4u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1) & 0xC0) == 0x40 )
        *((_DWORD *)v4 + 7) |= 8u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1) & 0xC) == 4 )
        *((_DWORD *)v4 + 8) |= 2u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1) & 0x30) == 0x10 )
        *((_DWORD *)v4 + 8) |= 4u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1) & 0xC0) == 0x40 )
        *((_DWORD *)v4 + 8) |= 8u;
    }
    if ( !v5 && !v7 )
      goto LABEL_92;
    v4 += *((unsigned int *)v4 + 3);
    *((_DWORD *)v4 + 1) = 24;
    *(_DWORD *)v4 = 1;
  }
  if ( v5 )
  {
    *((_DWORD *)v4 + 2) = 2;
    *((_DWORD *)v4 + 4) = 16;
    v12 += 36;
    *((_DWORD *)v4 + 3) = 36;
    *(_OWORD *)(v4 + 20) = 0LL;
    if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.LsoV1.IPv4 + 3) & 0xC) == 4 )
      v4[33] = 1;
    if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.LsoV1.IPv4 + 3) & 3) == 1 )
      v4[32] = 1;
    *((_DWORD *)v4 + 6) = Offload->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
    *((_DWORD *)v4 + 7) = Offload->MiniportCurrentConfig.LsoV1.IPv4.MinSegmentCount;
    if ( !v7 )
      goto LABEL_92;
    v4 += *((unsigned int *)v4 + 3);
    *((_DWORD *)v4 + 1) = 24;
    *(_DWORD *)v4 = 1;
  }
  else if ( !v7 )
  {
    goto LABEL_93;
  }
  *((_QWORD *)v4 + 1) = 1LL;
  *((_DWORD *)v4 + 4) = 24;
  *(_OWORD *)(v4 + 20) = 0LL;
  v12 += 44;
  *(_QWORD *)(v4 + 36) = 0LL;
  if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined == 1 )
    *((_DWORD *)v4 + 5) = 1;
  *((_DWORD *)v4 + 6) = 0;
  if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.IPv4Options == 1 )
    *((_DWORD *)v4 + 7) = 1;
  Flags = Offload->MiniportCurrentConfig.IPsecV1.Supported.Flags;
  if ( Flags )
    *((_DWORD *)v4 + 8) = Flags;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 3) == 1 )
    *((_DWORD *)v4 + 9) |= 1u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 0xC) == 4 )
    *((_DWORD *)v4 + 9) |= 2u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 0x30) == 0x10 )
    *((_DWORD *)v4 + 9) |= 4u;
  v15 = *((_DWORD *)v4 + 9) & 0xFFFFFFF7;
  *((_DWORD *)v4 + 9) = v15;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 0x300) == 0x100 )
  {
    v15 |= 0x10u;
    *((_DWORD *)v4 + 9) = v15;
  }
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 0xC00) == 0x400 )
    *((_DWORD *)v4 + 9) = v15 | 0x20;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 3) == 1 )
    *((_DWORD *)v4 + 10) |= 1u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0xC) != 0 )
    *((_DWORD *)v4 + 10) |= 2u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0x30) == 0x10 )
    *((_DWORD *)v4 + 10) |= 4u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0x300) == 0x100 )
    *((_DWORD *)v4 + 10) |= 0x10u;
  v16 = *((_DWORD *)v4 + 10) & 0xFFFFFFDF;
  *((_DWORD *)v4 + 10) = v16;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0x3000) == 0x1000 )
  {
    v16 |= 0x40u;
    *((_DWORD *)v4 + 10) = v16;
  }
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0xC000) == 0x4000 )
    *((_DWORD *)v4 + 10) = v16 | 0x80;
LABEL_92:
  *((_DWORD *)v4 + 3) = 0;
LABEL_93:
  a1->Offload->MiniportTaskSize = v12;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA9u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      a1);
}
