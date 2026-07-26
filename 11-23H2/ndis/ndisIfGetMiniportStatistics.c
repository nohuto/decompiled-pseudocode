/*
 * XREFs of ndisIfGetMiniportStatistics @ 0x1C010DA10
 * Callers:
 *     ndisIfQueryFilterObject @ 0x1C010DCC0 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObject @ 0x1C01103CC (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008DCC (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000A830 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CF50 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D8D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisIfGetMiniportStatistics(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _OWORD *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int v6; // r14d
  _QWORD *v7; // r15
  int v8; // edx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  NDIS_OID *v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_OID_REQUEST v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[20]; // [rsp+160h] [rbp+60h] BYREF

  v6 = 0;
  memset(&v22, 0, 0xF8uLL);
  memset(v23, 0, 0x98uLL);
  v21[0] = 0LL;
  v7 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  memset(a2, 0, 0x90uLL);
  if ( (unsigned __int8)ndisReferenceMiniportByHandleForNsi(a1, NSIREF_IFSTATS, MPREF_IF_STATS) )
  {
    memset(&v22, 0, 0x68uLL);
    memset(&v22.NdisReserved[40], 0, 0x88uLL);
    *(_DWORD *)&v22.NdisReserved[16] |= 8u;
    *(_QWORD *)&v22.NdisReserved[32] = &ndisIntReqNsi;
    EtwActivityIdControl(3u, (LPGUID)&v22.NdisReserved[96]);
    v22.Header = (NDIS_OBJECT_HEADER)15466902;
    v22.DATA.QUERY_INFORMATION.Oid = 0;
    *(_QWORD *)&v22.RequestType = 2LL;
    v22.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
    v22.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
    if ( !a3 )
      *(_DWORD *)&v22.NdisReserved[16] |= 0x100000u;
    if ( a1->MajorNdisVersion < 6u )
    {
      v18 = (NDIS_OID *)&unk_1C00E4A30;
      v19 = 18LL;
      do
      {
        switch ( *v18 )
        {
          case 0x20202u:
            v22.DATA.QUERY_INFORMATION.Oid = 131586;
            goto LABEL_35;
          case 0x20208u:
            v22.DATA.QUERY_INFORMATION.Oid = 131592;
LABEL_35:
            *v7 = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v6 = ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3);
            if ( v6 )
              break;
            goto LABEL_41;
          case 0x20219u:
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            *v7 = 0LL;
            v22.DATA.QUERY_INFORMATION.Oid = 131591;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3) )
              *v7 = v21[0];
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            v22.DATA.QUERY_INFORMATION.Oid = 131593;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3) )
              *v7 += v21[0];
            v22.DATA.QUERY_INFORMATION.Oid = 131595;
            goto LABEL_27;
          case 0x2021Au:
            *v7 = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.Oid = 131585;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3) )
              *v7 = v21[0];
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            v22.DATA.QUERY_INFORMATION.Oid = 131587;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3) )
              *v7 += v21[0];
            v22.DATA.QUERY_INFORMATION.Oid = 131589;
            goto LABEL_27;
          case 0x2021Bu:
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            *v7 = 0LL;
            v22.DATA.QUERY_INFORMATION.Oid = 131332;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3) )
              *v7 = v21[0];
            v22.DATA.QUERY_INFORMATION.Oid = 131333;
LABEL_27:
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v6 = ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3);
            if ( !v6 )
              *v7 += v21[0];
            break;
          case 0x2021Cu:
            v21[0] = 0LL;
            v20 = 2LL;
            do
            {
              *v7 = 0LL;
              --v20;
            }
            while ( v20 );
            break;
          default:
            v22.DATA.QUERY_INFORMATION.Oid = *v18;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            *v7 = 0LL;
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v6 = ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3);
            if ( !v6 )
LABEL_41:
              *v7 = v21[0];
            break;
        }
        ++v7;
        ++v18;
        --v19;
      }
      while ( v19 );
    }
    else
    {
      v22.DATA.QUERY_INFORMATION.Oid = 131334;
      v22.DATA.QUERY_INFORMATION.InformationBuffer = v23;
      v22.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xBu,
          0xBu,
          (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
          (char)&v22,
          a1);
      v6 = ndisQuerySetMiniport(a1, 0LL, &v22, 0, a3);
      if ( !v6 )
      {
        v9 = *(_OWORD *)&v23[3];
        *a2 = *(_OWORD *)&v23[1];
        v10 = *(_OWORD *)&v23[5];
        a2[1] = v9;
        v11 = *(_OWORD *)&v23[7];
        a2[2] = v10;
        v12 = *(_OWORD *)&v23[9];
        a2[3] = v11;
        v13 = *(_OWORD *)&v23[11];
        a2[4] = v12;
        v14 = *(_OWORD *)&v23[13];
        a2[5] = v13;
        v15 = *(_OWORD *)&v23[15];
        a2[6] = v14;
        v16 = *(_OWORD *)&v23[17];
        a2[7] = v15;
        a2[8] = v16;
      }
    }
    ndisDereferenceMiniportForNsi(a1, 3u, 0x3Bu);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v6);
  return 0LL;
}
