/*
 * XREFs of ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0091F90
 * Callers:
 *     ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C00916F8 (-ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMergeOffloadCapsAndRegistry(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  unsigned int Value; // eax
  int v7; // r8d

  if ( a2->Header.Type == 0xA7 && a2->Header.Size >= 0x70u && a2->Header.Revision )
  {
    if ( (a1->OffloadRegistry.Value & 0x400) != 0 )
    {
      *((_DWORD *)&a2->LsoV1.IPv4 + 3) &= 0xFFFFFFF0;
      *(_QWORD *)&a2->LsoV1.IPv4.Encapsulation = 0LL;
      a2->LsoV1.IPv4.MinSegmentCount = 0;
    }
    if ( (a1->OffloadRegistry.Value & 0x1000) != 0 )
    {
      *((_DWORD *)&a2->LsoV2.IPv6 + 3) &= 0xFFFFFFF0;
      *(_QWORD *)&a2->LsoV2.IPv6.Encapsulation = 0LL;
      a2->LsoV2.IPv6.MinSegmentCount = 0;
    }
    if ( (a1->OffloadRegistry.Value & 0x800) != 0 )
    {
      *(_QWORD *)&a2->LsoV2.IPv4.Encapsulation = 0LL;
      a2->LsoV2.IPv4.MinSegmentCount = 0;
    }
    v2 = *((_DWORD *)&a2->Checksum.IPv4Transmit + 1);
    if ( (a1->OffloadRegistry.Value & 1) != 0 )
    {
      v2 &= 0xFFFFFCFC;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v2;
    }
    if ( (a1->OffloadRegistry.Value & 4) != 0 )
    {
      v2 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v2;
    }
    if ( (a1->OffloadRegistry.Value & 0x10) != 0 )
    {
      v2 &= 0xFFFFFF3F;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v2;
    }
    if ( (((unsigned __int8)v2 | (unsigned __int8)((v2 | (v2 >> 2)) >> 2)) & 0x30) == 0 )
      a2->Checksum.IPv4Transmit.Encapsulation = 0;
    v3 = *((_DWORD *)&a2->Checksum.IPv4Receive + 1);
    if ( (a1->OffloadRegistry.Value & 2) != 0 )
    {
      v3 &= 0xFFFFFCFC;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v3;
    }
    if ( (a1->OffloadRegistry.Value & 8) != 0 )
    {
      v3 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v3;
    }
    if ( (a1->OffloadRegistry.Value & 0x20) != 0 )
    {
      v3 &= 0xFFFFFF3F;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v3;
    }
    if ( (((unsigned __int8)v3 | (unsigned __int8)((v3 | (v3 >> 2)) >> 2)) & 0x30) == 0 )
      a2->Checksum.IPv4Receive.Encapsulation = 0;
    v4 = *((_DWORD *)&a2->Checksum.IPv6Transmit + 1);
    if ( (a1->OffloadRegistry.Value & 0x40) != 0 )
    {
      v4 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv6Transmit + 1) = v4;
    }
    if ( (a1->OffloadRegistry.Value & 0x100) != 0 )
    {
      v4 &= 0xFFFFFF3F;
      *((_DWORD *)&a2->Checksum.IPv6Transmit + 1) = v4;
    }
    if ( (((unsigned __int8)v4 | (unsigned __int8)((v4 | (v4 >> 2)) >> 4)) & 3) == 0 )
      a2->Checksum.IPv6Transmit.Encapsulation = 0;
    v5 = *((_DWORD *)&a2->Checksum.IPv6Receive + 1);
    if ( (a1->OffloadRegistry.Value & 0x80u) != 0 )
    {
      v5 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv6Receive + 1) = v5;
    }
    if ( (a1->OffloadRegistry.Value & 0x200) != 0 )
    {
      v5 &= 0xFFFFFF3F;
      *((_DWORD *)&a2->Checksum.IPv6Receive + 1) = v5;
    }
    if ( (((unsigned __int8)v5 | (unsigned __int8)((v5 | (v5 >> 2)) >> 4)) & 3) == 0 )
      a2->Checksum.IPv6Receive.Encapsulation = 0;
    if ( (a1->OffloadRegistry.Value & 0x2000) != 0 )
      a2->IPsecV1.IPv4AH = 0;
    if ( (a1->OffloadRegistry.Value & 0x4000) != 0 )
      a2->IPsecV1.IPv4ESP = 0;
    if ( a2->Header.Revision >= 2u && a2->Header.Size >= 0x90u )
    {
      Value = a1->OffloadRegistry.Value;
      if ( (Value & 0x400000) != 0 )
      {
        a2->IPsecV2.IPv6Supported = 0;
        if ( (a1->OffloadRegistry.Value & 0x100000) != 0 )
          a2->IPsecV2.Ah = 0;
        if ( (a1->OffloadRegistry.Value & 0x200000) != 0 )
          a2->IPsecV2.Esp = 0;
        v7 = 3145728;
      }
      else
      {
        if ( (Value & 0x40000) != 0 )
          a2->IPsecV2.Ah = 0;
        if ( (a1->OffloadRegistry.Value & 0x80000) != 0 )
          a2->IPsecV2.Esp = 0;
        v7 = 786432;
      }
      if ( (v7 & a1->OffloadRegistry.Value) == v7 )
        *(_WORD *)&a2->IPsecV2.Ah = 0;
      if ( (a1->OffloadRegistry.Value & 0x3C0000) == 0x3C0000 )
      {
        *(_OWORD *)&a2->IPsecV2.Encapsulation = 0LL;
        *(_OWORD *)&a2->IPsecV2.UdpEsp = 0LL;
      }
      if ( a2->Header.Revision >= 3u && a2->Header.Size >= 0x9Cu )
      {
        if ( (a1->OffloadRegistry.Value & 0x800000) != 0 )
          a2->Rsc.IPv4.Enabled = 0;
        if ( (a1->OffloadRegistry.Value & 0x1000000) != 0 )
          a2->Rsc.IPv6.Enabled = 0;
        if ( (a1->OffloadRegistry.Value & 0x2000000) != 0 )
          a2->EncapsulatedPacketTaskOffloadGre = 0LL;
        if ( a2->Header.Revision >= 6u && a2->Header.Size >= 0xD8u )
        {
          if ( (a1->OffloadRegistry.Value & 0x10000000) != 0 )
          {
            *((_DWORD *)&a2->UdpSegmentation.IPv4 + 2) &= 0xFFFFFFC0;
            *(_QWORD *)&a2->UdpSegmentation.IPv4.Encapsulation = 0LL;
          }
          if ( (a1->OffloadRegistry.Value & 0x20000000) != 0 )
          {
            *((_DWORD *)&a2->UdpSegmentation.IPv6 + 2) &= 0xFFFFFFC0;
            *((_DWORD *)&a2->UdpSegmentation.IPv6 + 3) &= 0xFFFFFFFC;
            *(_QWORD *)&a2->UdpSegmentation.IPv6.Encapsulation = 0LL;
          }
        }
      }
    }
  }
}
