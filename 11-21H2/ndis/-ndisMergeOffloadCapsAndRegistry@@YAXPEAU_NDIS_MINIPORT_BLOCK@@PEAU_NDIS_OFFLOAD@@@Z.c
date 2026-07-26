/*
 * XREFs of ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C008C330
 * Callers:
 *     ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C008BA98 (-ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMergeOffloadCapsAndRegistry(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  unsigned int Value; // eax
  unsigned int v3; // r8d
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // r8d
  UCHAR Revision; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax

  if ( a2->Header.Type == 0xA7 && a2->Header.Size >= 0x70u && a2->Header.Revision )
  {
    Value = a1->OffloadRegistry.Value;
    if ( (Value & 0x400) != 0 )
    {
      *((_DWORD *)&a2->LsoV1.IPv4 + 3) &= 0xFFFFFFF0;
      *(_QWORD *)&a2->LsoV1.IPv4.Encapsulation = 0LL;
      a2->LsoV1.IPv4.MinSegmentCount = 0;
      Value = a1->OffloadRegistry.Value;
    }
    if ( (Value & 0x1000) != 0 )
    {
      *((_DWORD *)&a2->LsoV2.IPv6 + 3) &= 0xFFFFFFF0;
      *(_QWORD *)&a2->LsoV2.IPv6.Encapsulation = 0LL;
      a2->LsoV2.IPv6.MinSegmentCount = 0;
      Value = a1->OffloadRegistry.Value;
    }
    if ( (Value & 0x800) != 0 )
    {
      *(_QWORD *)&a2->LsoV2.IPv4.Encapsulation = 0LL;
      a2->LsoV2.IPv4.MinSegmentCount = 0;
      Value = a1->OffloadRegistry.Value;
    }
    v3 = *((_DWORD *)&a2->Checksum.IPv4Transmit + 1);
    if ( (Value & 1) != 0 )
    {
      v3 &= 0xFFFFFCFC;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v3;
      Value = a1->OffloadRegistry.Value;
    }
    if ( (Value & 4) != 0 )
    {
      v3 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v3;
      Value = a1->OffloadRegistry.Value;
    }
    if ( (Value & 0x10) != 0 )
    {
      v3 &= 0xFFFFFF3F;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v3;
    }
    if ( (((unsigned __int8)v3 | (unsigned __int8)((v3 | (v3 >> 2)) >> 2)) & 0x30) == 0 )
      a2->Checksum.IPv4Transmit.Encapsulation = 0;
    v4 = a1->OffloadRegistry.Value;
    v5 = *((_DWORD *)&a2->Checksum.IPv4Receive + 1);
    if ( (v4 & 2) != 0 )
    {
      v5 &= 0xFFFFFCFC;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v5;
      v4 = a1->OffloadRegistry.Value;
    }
    if ( (v4 & 8) != 0 )
    {
      v5 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v5;
      v4 = a1->OffloadRegistry.Value;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v5 &= 0xFFFFFF3F;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v5;
    }
    if ( (((unsigned __int8)v5 | (unsigned __int8)((v5 | (v5 >> 2)) >> 2)) & 0x30) == 0 )
      a2->Checksum.IPv4Receive.Encapsulation = 0;
    v6 = a1->OffloadRegistry.Value;
    v7 = *((_DWORD *)&a2->Checksum.IPv6Transmit + 1);
    if ( (v6 & 0x40) != 0 )
    {
      v7 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv6Transmit + 1) = v7;
      v6 = a1->OffloadRegistry.Value;
    }
    if ( (v6 & 0x100) != 0 )
    {
      v7 &= 0xFFFFFF3F;
      *((_DWORD *)&a2->Checksum.IPv6Transmit + 1) = v7;
    }
    if ( (((unsigned __int8)v7 | (unsigned __int8)((v7 | (v7 >> 2)) >> 4)) & 3) == 0 )
      a2->Checksum.IPv6Transmit.Encapsulation = 0;
    v8 = a1->OffloadRegistry.Value;
    v9 = *((_DWORD *)&a2->Checksum.IPv6Receive + 1);
    if ( (v8 & 0x80u) != 0 )
    {
      v9 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv6Receive + 1) = v9;
      v8 = a1->OffloadRegistry.Value;
    }
    if ( (v8 & 0x200) != 0 )
    {
      v9 &= 0xFFFFFF3F;
      *((_DWORD *)&a2->Checksum.IPv6Receive + 1) = v9;
    }
    if ( (((unsigned __int8)v9 | (unsigned __int8)((v9 | (v9 >> 2)) >> 4)) & 3) == 0 )
      a2->Checksum.IPv6Receive.Encapsulation = 0;
    v10 = a1->OffloadRegistry.Value;
    if ( (v10 & 0x2000) != 0 )
    {
      a2->IPsecV1.IPv4AH = 0;
      v10 = a1->OffloadRegistry.Value;
    }
    if ( (v10 & 0x4000) != 0 )
      a2->IPsecV1.IPv4ESP = 0;
    if ( a2->Header.Revision >= 2u && a2->Header.Size >= 0x90u )
    {
      v11 = a1->OffloadRegistry.Value;
      if ( (v11 & 0x400000) != 0 )
      {
        a2->IPsecV2.IPv6Supported = 0;
        v11 = a1->OffloadRegistry.Value;
        if ( (v11 & 0x100000) != 0 )
        {
          a2->IPsecV2.Ah = 0;
          v11 = a1->OffloadRegistry.Value;
        }
        if ( (v11 & 0x200000) != 0 )
        {
          a2->IPsecV2.Esp = 0;
          v11 = a1->OffloadRegistry.Value;
        }
        v12 = 3145728;
      }
      else
      {
        if ( (v11 & 0x40000) != 0 )
        {
          a2->IPsecV2.Ah = 0;
          v11 = a1->OffloadRegistry.Value;
        }
        if ( (v11 & 0x80000) != 0 )
        {
          a2->IPsecV2.Esp = 0;
          v11 = a1->OffloadRegistry.Value;
        }
        v12 = 786432;
      }
      if ( (v12 & v11) == v12 )
        *(_WORD *)&a2->IPsecV2.Ah = 0;
      if ( (a1->OffloadRegistry.Value & 0x3C0000) == 0x3C0000 )
      {
        *(_OWORD *)&a2->IPsecV2.Encapsulation = 0LL;
        *(_OWORD *)&a2->IPsecV2.UdpEsp = 0LL;
      }
      Revision = a2->Header.Revision;
      if ( Revision >= 3u && a2->Header.Size >= 0x9Cu )
      {
        v14 = a1->OffloadRegistry.Value;
        if ( (v14 & 0x800000) != 0 )
        {
          a2->Rsc.IPv4.Enabled = 0;
          v14 = a1->OffloadRegistry.Value;
        }
        if ( (v14 & 0x1000000) != 0 )
        {
          a2->Rsc.IPv6.Enabled = 0;
          v14 = a1->OffloadRegistry.Value;
        }
        if ( (v14 & 0x2000000) != 0 )
          a2->EncapsulatedPacketTaskOffloadGre = 0LL;
        if ( Revision >= 6u && a2->Header.Size >= 0xD8u )
        {
          v15 = a1->OffloadRegistry.Value;
          if ( (v15 & 0x10000000) != 0 )
          {
            *((_DWORD *)&a2->UdpSegmentation.IPv4 + 2) &= 0xFFFFFFC0;
            *(_QWORD *)&a2->UdpSegmentation.IPv4.Encapsulation = 0LL;
            v15 = a1->OffloadRegistry.Value;
          }
          if ( (v15 & 0x20000000) != 0 )
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
