/*
 * XREFs of ?ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00910E4
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EC0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0091770 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisGetMiniportOffloadCapability(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // r14
  char v3; // si
  char v4; // r15
  char v5; // r12
  char v6; // r13
  char v7; // bl
  _NDIS_OFFLOAD *p_MiniportInitialConfig; // rcx
  unsigned int v9; // r10d
  char *i; // rdx
  int v11; // r9d
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  struct _NDIS_OID_REQUEST v17; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v18[36]; // [rsp+148h] [rbp+40h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  memset(v18, 0, sizeof(v18));
  if ( !(unsigned int)ndisMAllocateMiniportOffload(a1) )
  {
    v18[3] = 0;
    v18[5] |= 1u;
    v18[0] = 1;
    v18[1] = 28;
    v18[4] = 2;
    v18[6] = 14;
    memset(&v17, 0, 0xF8uLL);
    *(_DWORD *)&v17.NdisReserved[16] |= 0x80u;
    v17.DATA.QUERY_INFORMATION.InformationBuffer = v18;
    v17.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_QWORD *)&v17.NdisReserved[32] = &ndisIntReqGeneric;
    v17.DATA.QUERY_INFORMATION.Oid = -67042815;
    v17.DATA.QUERY_INFORMATION.InformationBufferLength = 144;
    if ( !(unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v17, 0, 0LL, 0LL) && v18[3] )
    {
      p_MiniportInitialConfig = &a1->Offload->MiniportInitialConfig;
      *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) &= 0xFFFFFC00;
      *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) &= 0xFFFFFC00;
      *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) &= 0xFFFFFF00;
      *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) &= 0xFFFFFF00;
      *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4 + 3) &= 0xFFFFFFF0;
      *((_DWORD *)&p_MiniportInitialConfig->LsoV2.IPv6 + 3) &= 0xFFFFFFF0;
      *(_QWORD *)&p_MiniportInitialConfig->Header.Type = 7340455LL;
      p_MiniportInitialConfig->Checksum.IPv4Receive.Encapsulation = 0;
      p_MiniportInitialConfig->Checksum.IPv6Receive.Encapsulation = 0;
      p_MiniportInitialConfig->Checksum.IPv6Transmit.Encapsulation = 0;
      *(_QWORD *)&p_MiniportInitialConfig->LsoV1.IPv4.Encapsulation = 0LL;
      p_MiniportInitialConfig->LsoV1.IPv4.MinSegmentCount = 0;
      p_MiniportInitialConfig->LsoV2.IPv4.Encapsulation = 0;
      *(_QWORD *)&p_MiniportInitialConfig->LsoV2.IPv4.MinSegmentCount = 0LL;
      *(_QWORD *)&p_MiniportInitialConfig->LsoV2.IPv6.MaxOffLoadSize = 0LL;
      v9 = v18[1];
      for ( i = (char *)v18 + v18[1]; ; i += v16 )
      {
        if ( *(_DWORD *)i != 1 )
          goto LABEL_101;
        if ( *((_DWORD *)i + 1) != 24 )
          goto LABEL_101;
        v11 = *((_DWORD *)i + 4);
        if ( v11 + v9 + 20 > 0x90 )
          goto LABEL_101;
        v12 = *((_DWORD *)i + 2);
        if ( !v12 )
          break;
        v13 = v12 - 1;
        if ( !v13 )
        {
          if ( v11 != 24 )
            goto LABEL_101;
          a1->Offload->Ndis5IPsec = 1;
          p_MiniportInitialConfig->IPsecV1.Supported.TransportTunnelCombined = 0;
          p_MiniportInitialConfig->IPsecV1.Supported.Flags = *((_DWORD *)i + 8);
          if ( *((_DWORD *)i + 5) )
          {
            p_MiniportInitialConfig->IPsecV1.Supported.AhEspCombined = 1;
            v7 = 1;
          }
          if ( *((_DWORD *)i + 7) )
          {
            p_MiniportInitialConfig->IPsecV1.Supported.IPv4Options = 1;
            v7 = 1;
          }
          if ( (*((_DWORD *)i + 9) & 1) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFFFFC | 1);
          }
          if ( (*((_DWORD *)i + 9) & 2) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFFFF3 | 4);
          }
          if ( (*((_DWORD *)i + 9) & 4) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFFFCF | 0x10);
          }
          if ( (*((_DWORD *)i + 9) & 0x10) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFFCFF | 0x100);
          }
          if ( (*((_DWORD *)i + 9) & 0x20) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFF3FF | 0x400);
          }
          if ( (*((_DWORD *)i + 10) & 0x40) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFCFFF | 0x1000);
          }
          if ( (*((_DWORD *)i + 10) & 0x80u) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFF3FFF | 0x4000);
          }
          if ( (*((_DWORD *)i + 10) & 1) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFFFC | 1);
          }
          if ( (*((_DWORD *)i + 10) & 4) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFFCF | 0x10);
          }
          if ( (*((_DWORD *)i + 10) & 8) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFF3F | 0x40);
          }
          if ( (*((_DWORD *)i + 10) & 0x10) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFCFF | 0x100);
          }
          if ( (*((_DWORD *)i + 10) & 2) != 0 )
          {
            v7 = 1;
            p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFFF3 | 4);
            goto LABEL_50;
          }
          if ( v7 == 1 )
LABEL_50:
            p_MiniportInitialConfig->IPsecV1.Supported.Encapsulation = 2;
          *((_DWORD *)i + 10) &= ~0x20u;
          goto LABEL_97;
        }
        if ( v13 == 1 )
        {
          a1->Offload->Ndis5LSO = 1;
          if ( *((_DWORD *)i + 5) > 1u )
            goto LABEL_101;
          if ( i[33] == 1 )
          {
            v6 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4 + 3) = *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4 + 3) & 0xFFFFFFF3 | 4;
          }
          if ( i[32] == 1 )
          {
            v6 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4 + 3) = *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4 + 3) & 0xFFFFFFFC | 1;
          }
          p_MiniportInitialConfig->LsoV1.IPv4.MinSegmentCount = *((_DWORD *)i + 7);
          p_MiniportInitialConfig->LsoV1.IPv4.MaxOffLoadSize = *((_DWORD *)i + 6);
          if ( *((_DWORD *)i + 7) && *((_DWORD *)i + 6) )
          {
            v6 = 1;
LABEL_19:
            p_MiniportInitialConfig->LsoV1.IPv4.Encapsulation = 2;
            goto LABEL_97;
          }
          if ( v6 == 1 )
            goto LABEL_19;
        }
LABEL_97:
        v16 = *((unsigned int *)i + 3);
        if ( !(_DWORD)v16 )
          return;
        v9 += v16;
        if ( v9 > 0x90 )
          return;
      }
      if ( v11 != 16 )
        goto LABEL_101;
      a1->Offload->Ndis5Xsum = 1;
      if ( (*((_DWORD *)i + 5) & 1) != 0 )
      {
        v3 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                           + 1) & 0xFFFFFFFC | 1;
      }
      if ( (*((_DWORD *)i + 5) & 2) != 0 )
      {
        v3 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                           + 1) & 0xFFFFFFF3 | 4;
      }
      if ( (*((_DWORD *)i + 5) & 4) != 0 )
      {
        v3 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                           + 1) & 0xFFFFFFCF | 0x10;
      }
      if ( (*((_DWORD *)i + 5) & 8) != 0 )
      {
        v3 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                           + 1) & 0xFFFFFF3F | 0x40;
      }
      if ( (*((_DWORD *)i + 5) & 0x10) != 0 )
      {
        v3 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                           + 1) & 0xFFFFFCFF | 0x100;
      }
      else if ( v3 != 1 )
      {
        goto LABEL_65;
      }
      p_MiniportInitialConfig->Checksum.IPv4Transmit.Encapsulation = 2;
LABEL_65:
      if ( (*((_DWORD *)i + 6) & 1) != 0 )
      {
        v2 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                          + 1) & 0xFFFFFFFC | 1;
      }
      if ( (*((_DWORD *)i + 6) & 2) != 0 )
      {
        v2 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                          + 1) & 0xFFFFFFF3 | 4;
      }
      if ( (*((_DWORD *)i + 6) & 4) != 0 )
      {
        v2 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                          + 1) & 0xFFFFFFCF | 0x10;
      }
      if ( (*((_DWORD *)i + 6) & 8) != 0 )
      {
        v2 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                          + 1) & 0xFFFFFF3F | 0x40;
      }
      if ( (*((_DWORD *)i + 6) & 0x10) != 0 )
      {
        v2 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                          + 1) & 0xFFFFFCFF | 0x100;
      }
      else if ( v2 != 1 )
      {
        goto LABEL_77;
      }
      p_MiniportInitialConfig->Checksum.IPv4Receive.Encapsulation = 2;
LABEL_77:
      v14 = *((_DWORD *)i + 8);
      if ( (v14 & 1) != 0 )
      {
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) &= 0xFFFFFF00;
        p_MiniportInitialConfig->Checksum.IPv6Receive.Encapsulation = 0;
        goto LABEL_87;
      }
      if ( (v14 & 2) != 0 )
      {
        v5 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive
                                                                          + 1) & 0xFFFFFFF3 | 4;
      }
      if ( (*((_DWORD *)i + 8) & 4) != 0 )
      {
        v5 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive
                                                                          + 1) & 0xFFFFFFCF | 0x10;
      }
      if ( (*((_DWORD *)i + 8) & 8) != 0 )
      {
        v5 = 1;
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive
                                                                          + 1) & 0xFFFFFF3F | 0x40;
      }
      else if ( v5 != 1 )
      {
        goto LABEL_87;
      }
      p_MiniportInitialConfig->Checksum.IPv6Receive.Encapsulation = 2;
LABEL_87:
      v15 = *((_DWORD *)i + 7);
      if ( (v15 & 1) != 0 )
      {
        *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) &= 0xFFFFFF00;
        p_MiniportInitialConfig->Checksum.IPv6Transmit.Encapsulation = 0;
      }
      else
      {
        if ( (v15 & 2) != 0 )
        {
          v4 = 1;
          *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit
                                                                             + 1) & 0xFFFFFFF3 | 4;
        }
        if ( (*((_DWORD *)i + 7) & 4) != 0 )
        {
          v4 = 1;
          *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit
                                                                             + 1) & 0xFFFFFFCF | 0x10;
        }
        if ( (*((_DWORD *)i + 7) & 8) != 0 )
        {
          v4 = 1;
          *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit
                                                                             + 1) & 0xFFFFFF3F | 0x40;
LABEL_96:
          p_MiniportInitialConfig->Checksum.IPv6Transmit.Encapsulation = 2;
          goto LABEL_97;
        }
        if ( v4 == 1 )
          goto LABEL_96;
      }
      goto LABEL_97;
    }
LABEL_101:
    ExFreePoolWithTag(a1->Offload, 0);
    a1->Offload = 0LL;
  }
}
