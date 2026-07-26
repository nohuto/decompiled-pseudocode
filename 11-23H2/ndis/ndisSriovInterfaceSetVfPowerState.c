/*
 * XREFs of ndisSriovInterfaceSetVfPowerState @ 0x1C012FD10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008DCC (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceSetVfPowerState(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2, int a3, char a4)
{
  unsigned int v8; // ebx
  char v10[4]; // [rsp+30h] [rbp-D0h]
  struct _NDIS_OID_REQUEST v11; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[13]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v13; // [rsp+14Dh] [rbp+4Dh]
  char v14; // [rsp+14Fh] [rbp+4Fh]

  memset(&v11.Header.Revision, 0, 0xF7uLL);
  *(_QWORD *)&v12[1] = 0LL;
  *(_DWORD *)&v12[9] = 0;
  v13 = 0;
  v14 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x67u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      a1);
  *(_DWORD *)v12 = 1048960;
  *(_WORD *)&v12[4] = a2;
  *(_DWORD *)&v12[8] = a3;
  v12[12] = a4;
  memset(&v11, 0, 0xF8uLL);
  *(_DWORD *)&v11.NdisReserved[16] |= 8u;
  *(_QWORD *)&v11.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v11.NdisReserved[96]);
  v11.PortNumber = 0;
  v11.DATA.QUERY_INFORMATION.InformationBuffer = v12;
  v11.Header = (NDIS_OBJECT_HEADER)15466902;
  v11.DATA.QUERY_INFORMATION.Oid = 66134;
  v11.RequestType = NdisRequestSetInformation;
  v11.DATA.QUERY_INFORMATION.InformationBufferLength = 16;
  v8 = ndisQuerySetMiniport(a1, 0LL, &v11, 0, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v8;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x68u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)a1,
      *(_DWORD *)v10);
  }
  return v8;
}
