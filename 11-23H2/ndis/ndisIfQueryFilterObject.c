/*
 * XREFs of ndisIfQueryFilterObject @ 0x1C010DCC0
 * Callers:
 *     ndisIfQueryObject @ 0x1C010DFB0 (ndisIfQueryObject.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C000F9C0 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_LqL @ 0x1C000FA70 (WPP_RECORDER_SF_LqL.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ndisIfGetMiniportStatistics @ 0x1C010DA10 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x1C013F3D8 (ndisIfQuerySetMiniport.c)
 */

__int64 __fastcall ndisIfQueryFilterObject(struct _NDIS_FILTER_BLOCK *a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned int MiniportStatistics; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  _NDIS_MINIPORT_BLOCK *Miniport; // r12
  _NDIS_IF_BLOCK *IfBlock; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // cl
  __int32 ifOperStatus; // ecx
  _NDIS_IF_BLOCK *v19; // rax
  int v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  _NDIS_IF_BLOCK *v22; // [rsp+48h] [rbp-B8h]
  _BYTE v23[248]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  MiniportStatistics = 0;
  memset(&v23[1], 0, 0xF7uLL);
  v21 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 0xDu, v20);
  *(_QWORD *)&v23[104] = &ndisIntReqNsi;
  memset(v23, 0, 104);
  memset(&v23[112], 0, 136);
  *(_DWORD *)&v23[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v23[168]);
  Miniport = a1->Miniport;
  IfBlock = a1->IfBlock;
  *(_DWORD *)v23 = 15466902;
  *(_DWORD *)&v23[32] = 0;
  *(_QWORD *)&v23[4] = 2LL;
  *(_QWORD *)&v23[40] = 0LL;
  *(_DWORD *)&v23[48] = 0;
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
                *(_QWORD *)&v23[40] = &v21;
                v21 = 0LL;
                *(_DWORD *)&v23[32] = 131586;
                *(_DWORD *)&v23[48] = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                if ( !MiniportStatistics )
                  v7 = v21;
                *(_QWORD *)a4 = v7;
                break;
              case 0x20208u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)&v23[40] = &v21;
                v21 = 0LL;
                *(_DWORD *)&v23[32] = 131592;
                *(_DWORD *)&v23[48] = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                if ( !MiniportStatistics )
                  v7 = v21;
                *(_QWORD *)a4 = v7;
                break;
              case 0x20219u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)&v23[40] = &v21;
                v21 = 0LL;
                *(_DWORD *)&v23[48] = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  *(_DWORD *)&v23[32] = 131609;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 = v21;
                }
                else
                {
                  *(_DWORD *)&v23[32] = 131591;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 = v21;
                  v21 = 0LL;
                  *(_QWORD *)&v23[40] = &v21;
                  *(_DWORD *)&v23[32] = 131593;
                  *(_DWORD *)&v23[48] = 8;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 += v21;
                  v21 = 0LL;
                  *(_QWORD *)&v23[40] = &v21;
                  *(_DWORD *)&v23[32] = 131595;
                  *(_DWORD *)&v23[48] = 8;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 += v21;
                }
                break;
              case 0x2021Au:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)&v23[40] = &v21;
                v21 = 0LL;
                *(_DWORD *)&v23[48] = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  *(_DWORD *)&v23[32] = 131610;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 = v21;
                }
                else
                {
                  *(_DWORD *)&v23[32] = 131585;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 = v21;
                  v21 = 0LL;
                  *(_QWORD *)&v23[40] = &v21;
                  *(_DWORD *)&v23[32] = 131587;
                  *(_DWORD *)&v23[48] = 8;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 += v21;
                  v21 = 0LL;
                  *(_QWORD *)&v23[40] = &v21;
                  *(_DWORD *)&v23[32] = 131589;
                  *(_DWORD *)&v23[48] = 8;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 += v21;
                }
                break;
              case 0x2021Bu:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)&v23[40] = &v21;
                v21 = 0LL;
                *(_DWORD *)&v23[48] = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  *(_DWORD *)&v23[32] = 131611;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 = v21;
                }
                else
                {
                  *(_DWORD *)&v23[32] = 131332;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 = v21;
                  v21 = 0LL;
                  *(_QWORD *)&v23[40] = &v21;
                  *(_DWORD *)&v23[32] = 131333;
                  *(_DWORD *)&v23[48] = 8;
                  ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
                  *(_QWORD *)a4 += v21;
                }
                break;
              case 0x2021Cu:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v21 = 0LL;
                  *(_QWORD *)&v23[40] = &v21;
                  *(_DWORD *)&v23[32] = 131612;
                  *(_DWORD *)&v23[48] = 8;
                  MiniportStatistics = ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
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
                *(_DWORD *)&v23[32] = a2;
                *(_QWORD *)&v23[40] = a4;
                *(_DWORD *)&v23[48] = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
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
