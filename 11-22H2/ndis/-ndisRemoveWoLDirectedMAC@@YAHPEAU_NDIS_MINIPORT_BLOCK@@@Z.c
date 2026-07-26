/*
 * XREFs of ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01377C4
 * Callers:
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1C00AE630 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030BF4 (WPP_RECORDER_SF_L_ea_1C0030BF4.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C9A0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisRemoveWoLDirectedMAC(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp-D8h]
  int v6; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v7; // [rsp+58h] [rbp-B0h] BYREF

  memset(&v7.Header.Revision, 0, 0xF7uLL);
  AoAc = a1->AoAc;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x95u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      a1);
  v6 = 131073;
  memset(&v7, 0, 0xF8uLL);
  *(_DWORD *)&v7.NdisReserved[16] |= 8u;
  *(_QWORD *)&v7.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v7.NdisReserved[96]);
  v7.PortNumber = 0;
  *(_DWORD *)&v7.NdisReserved[16] |= 0x400u;
  v7.DATA.QUERY_INFORMATION.InformationBuffer = &v6;
  v7.Header = (NDIS_OBJECT_HEADER)15466902;
  v7.DATA.QUERY_INFORMATION.Oid = -50265845;
  v7.RequestType = NdisRequestSetInformation;
  v7.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
  KeInitializeEvent((PRKEVENT)&v7.NdisReserved[40], NotificationEvent, 0);
  v3 = ndisMInvokeOidRequest(a1, &v7);
  if ( v3 == 259 )
  {
    ndisWaitForKernelObject(&v7.NdisReserved[40]);
    v3 = *(_DWORD *)&v7.NdisReserved[8];
  }
  if ( v3 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v3;
    LODWORD(v5) = v3;
    WPP_RECORDER_SF_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x96u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v5);
  }
  else
  {
    *((_BYTE *)AoAc + 1072) = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x97u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      v3);
  return v3;
}
