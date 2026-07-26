/*
 * XREFs of ndisIfQueryFilterObject @ 0x1C0103020
 * Callers:
 *     ndisIfQueryObject @ 0x1C01032B0 (ndisIfQueryObject.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C00100D0 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_LqL @ 0x1C0010180 (WPP_RECORDER_SF_LqL.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ndisIfGetMiniportStatistics @ 0x1C0102D90 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x1C013372C (ndisIfQuerySetMiniport.c)
 */

__int64 __fastcall ndisIfQueryFilterObject(struct _NDIS_FILTER_BLOCK *a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned int MiniportStatistics; // r12d
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  _NDIS_MINIPORT_BLOCK *Miniport; // r13
  _NDIS_IF_BLOCK *IfBlock; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // cl
  __int32 ifOperStatus; // ecx
  _NDIS_IF_BLOCK *v19; // rax
  int v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  _NDIS_IF_BLOCK *v22; // [rsp+48h] [rbp-B8h]
  struct _NDIS_OID_REQUEST v23; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  MiniportStatistics = 0;
  memset(&v23.Header.Revision, 0, 0xF7uLL);
  v21 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 0xDu, v20);
  memset(&v23, 0, 0xF8uLL);
  *(_DWORD *)&v23.NdisReserved[16] |= 8u;
  Miniport = a1->Miniport;
  IfBlock = a1->IfBlock;
  *(_QWORD *)&v23.NdisReserved[32] = &ndisIntReqNsi;
  v23.Header = (NDIS_OBJECT_HEADER)15466902;
  v23.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v23.RequestType = 2LL;
  v23.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v23.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  DriverHandle = Miniport->DriverHandle;
  v22 = IfBlock;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( a2 == 66179 )
  {
    if ( *a3 < 4u )
      return 3221291030LL;
    *a3 = 4;
    ifOperStatus = Miniport->IfBlock->ifOperStatus;
LABEL_13:
    *(_DWORD *)a4 = ifOperStatus;
    goto LABEL_14;
  }
  if ( a2 != 65798 )
  {
    if ( a2 != 66184 )
    {
      switch ( a2 )
      {
        case 0x10286u:
          if ( *a3 >= 8u )
          {
            *a3 = 8;
            *(_QWORD *)a4 = 0LL;
            goto LABEL_14;
          }
          break;
        case 0x10281u:
          if ( *a3 >= 8u )
          {
            *a3 = 8;
            *(_QWORD *)a4 = IfBlock->ifLastChange;
            goto LABEL_14;
          }
          break;
        case 0x20106u:
          if ( *a3 >= 0x90u )
          {
            *a3 = 144;
            MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, (_OWORD *)a4, a1);
            goto LABEL_14;
          }
          break;
        default:
          if ( a2 > 0x20106 )
          {
            v12 = 0x1C0000000uLL;
            switch ( a2 )
            {
              case 0x20202u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                v23.DATA.QUERY_INFORMATION.Oid = 131586;
                v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v23, a1);
                if ( !MiniportStatistics )
                  v7 = v21;
                *(_QWORD *)a4 = v7;
                break;
              case 0x20208u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                v23.DATA.QUERY_INFORMATION.Oid = 131592;
                v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v23, a1);
                if ( !MiniportStatistics )
                  v7 = v21;
                *(_QWORD *)a4 = v7;
                break;
              case 0x20219u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v23.DATA.QUERY_INFORMATION.Oid = 131609;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 = v21;
                }
                else
                {
                  v23.DATA.QUERY_INFORMATION.Oid = 131591;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 = v21;
                  v21 = 0LL;
                  v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                  v23.DATA.QUERY_INFORMATION.Oid = 131593;
                  v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 += v21;
                  v21 = 0LL;
                  v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                  v23.DATA.QUERY_INFORMATION.Oid = 131595;
                  v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 += v21;
                }
                break;
              case 0x2021Au:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v23.DATA.QUERY_INFORMATION.Oid = 131610;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 = v21;
                }
                else
                {
                  v23.DATA.QUERY_INFORMATION.Oid = 131585;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 = v21;
                  v21 = 0LL;
                  v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                  v23.DATA.QUERY_INFORMATION.Oid = 131587;
                  v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 += v21;
                  v21 = 0LL;
                  v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                  v23.DATA.QUERY_INFORMATION.Oid = 131589;
                  v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 += v21;
                }
                break;
              case 0x2021Bu:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v23.DATA.QUERY_INFORMATION.Oid = 131611;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 = v21;
                }
                else
                {
                  v23.DATA.QUERY_INFORMATION.Oid = 131332;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 = v21;
                  v21 = 0LL;
                  v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                  v23.DATA.QUERY_INFORMATION.Oid = 131333;
                  v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 += v21;
                }
                break;
              case 0x2021Cu:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v23.DATA.QUERY_INFORMATION.Oid = 131612;
                  v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
                  v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v23, a1);
                  *(_QWORD *)a4 = v21;
                }
                else
                {
                  *(_QWORD *)a4 = 0LL;
                }
                break;
              default:
LABEL_67:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = 0LL;
                v23.DATA.QUERY_INFORMATION.Oid = a2;
                v23.DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)a4;
                v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v23, a1);
                break;
            }
          }
          else
          {
            v12 = 0x1C0000000uLL;
            switch ( a2 )
            {
              case 0x10280u:
                if ( !*a3 )
                  return 3221291030LL;
                *a3 = 1;
                *(_BYTE *)a4 = Miniport->IfBlock->ifPromiscuousMode;
                break;
              case 0x10282u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = IfBlock->ifCounterDiscontinuityTime;
                break;
              case 0x10284u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = IfBlock->XmitLinkSpeed;
                break;
              case 0x10285u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = IfBlock->RcvLinkSpeed;
                break;
              case 0x10287u:
                if ( *a3 < 0xD8u )
                  return 3221291030LL;
                *a3 = 216;
                *(_DWORD *)a4 = Miniport->IfBlock->ifOperStatus;
                *(_DWORD *)(a4 + 4) = Miniport->IfBlock->ifOperStatusFlags;
                *(_DWORD *)(a4 + 8) = IfBlock->MediaConnectState;
                *(_DWORD *)(a4 + 12) = IfBlock->MediaDuplexState;
                *(_QWORD *)(a4 + 24) = IfBlock->XmitLinkSpeed;
                *(_QWORD *)(a4 + 32) = IfBlock->RcvLinkSpeed;
                MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, (_OWORD *)(a4 + 64), a1);
                v19 = v22;
                *(_DWORD *)(a4 + 16) = v22->ifMtu;
                LODWORD(IfBlock) = Miniport->IfBlock->ifPromiscuousMode;
                *(_BYTE *)(a4 + 20) = (_BYTE)IfBlock;
                *(_BYTE *)(a4 + 21) = v19->ifDeviceWakeUpEnable;
                *(_QWORD *)(a4 + 40) = v19->ifLastChange;
                *(_QWORD *)(a4 + 48) = v19->ifCounterDiscontinuityTime;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_DWORD *)(a4 + 208) = v19->CompartmentId;
                *(_DWORD *)(a4 + 212) = Miniport->IfBlock->SupportedStatistics;
                break;
              case 0x1028Au:
                if ( *a3 < 4u )
                  return 3221291030LL;
                *a3 = 4;
                *(_DWORD *)a4 = IfBlock->MediaConnectState;
                break;
              case 0x1028Cu:
                if ( *a3 < 4u )
                  return 3221291030LL;
                *a3 = 4;
                *(_DWORD *)a4 = IfBlock->MediaDuplexState;
                break;
              default:
                goto LABEL_67;
            }
          }
          goto LABEL_14;
      }
      return 3221291030LL;
    }
    if ( *a3 < 4u )
      return 3221291030LL;
    *a3 = 4;
    ifOperStatus = Miniport->IfBlock->ifAdminStatus;
    goto LABEL_13;
  }
  if ( *a3 < 4u )
    return 3221291030LL;
  *a3 = 4;
  *(_DWORD *)a4 = IfBlock->ifMtu;
LABEL_14:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)IfBlock,
      v12,
      0xEu,
      (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
      a2,
      a4,
      *a3);
  return MiniportStatistics;
}
