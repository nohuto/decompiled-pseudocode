/*
 * XREFs of ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013724C
 * Callers:
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AD060 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1C0093B00 (-ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C960 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisAddWoLDirectedMAC(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rdx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // [rsp+30h] [rbp-D8h]
  unsigned __int8 *BitMapHeader; // [rsp+48h] [rbp-C0h] BYREF
  struct _RTL_BITMAP BitMapHeader_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _NDIS_OID_REQUEST v11; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v12[272]; // [rsp+168h] [rbp+60h] BYREF

  memset(&v11.Header.Revision, 0, 0xF7uLL);
  memset(v12, 0, 0x10CuLL);
  AoAc = a1->AoAc;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x91u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      a1);
  if ( ndisDirectedMacForNapsState )
  {
    BitMapHeader = 0LL;
    BitMapHeader_8 = 0LL;
    ndisInitializeDirectedWolPattern(v12, v2, &BitMapHeader_8, &BitMapHeader);
    IfBlock = a1->IfBlock;
    v6 = BitMapHeader;
    *(_DWORD *)BitMapHeader = *(_DWORD *)IfBlock->ifPhysAddress.Address;
    *((_WORD *)v6 + 2) = *(_WORD *)&IfBlock->ifPhysAddress.Address[4];
    RtlSetBits(&BitMapHeader_8, 0, 6u);
    memset(&v11, 0, 0xF8uLL);
    *(_DWORD *)&v11.NdisReserved[16] |= 8u;
    *(_QWORD *)&v11.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v11.NdisReserved[96]);
    v11.PortNumber = 0;
    *(_DWORD *)&v11.NdisReserved[16] |= 0x400u;
    v11.DATA.QUERY_INFORMATION.InformationBuffer = v12;
    v11.Header = (NDIS_OBJECT_HEADER)15466902;
    v11.DATA.QUERY_INFORMATION.Oid = -50265846;
    v11.RequestType = NdisRequestSetInformation;
    v11.DATA.QUERY_INFORMATION.InformationBufferLength = 268;
    KeInitializeEvent((PRKEVENT)&v11.NdisReserved[40], NotificationEvent, 0);
    v7 = ndisMInvokeOidRequest(a1, &v11);
    if ( v7 == 259 )
    {
      ndisWaitForKernelObject(&v11.NdisReserved[40]);
      v7 = *(_DWORD *)&v11.NdisReserved[8];
    }
    if ( v7 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v7;
      LODWORD(v8) = v7;
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x93u,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        v8);
    }
    else
    {
      *((_BYTE *)AoAc + 1072) = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x94u,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        (char)a1,
        v7);
    return v7;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xEu,
      0x92u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      0);
  return 0LL;
}
