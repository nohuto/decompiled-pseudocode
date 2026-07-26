/*
 * XREFs of ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00071C4
 * Callers:
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00073A8 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C000798C (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5EB0 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisIsValidMulticastFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  unsigned int v3; // edi
  struct _NDIS_OPEN_BLOCK *v5; // rbp
  unsigned __int64 *p_SpinLock; // rbx
  KIRQL v8; // al
  UINT InformationBufferLength; // r8d
  int v11; // r9d

  v3 = 0;
  v5 = a2;
  if ( a2 )
  {
    if ( (a2->OpenFlags & 0x2000000) != 0 && (*(_DWORD *)&a3->NdisReserved[16] & 0x20) != 0 )
      return (unsigned int)-1073741637;
    if ( (*(_DWORD *)&a3->NdisReserved[16] & 0x20) != 0 )
    {
      p_SpinLock = &a2->SpinLock;
      v8 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
      v5->OpenFlags |= 0x1000000u;
      KeReleaseSpinLock(p_SpinLock, v8);
    }
  }
  if ( a1->MediaType )
  {
    *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    v3 = -1073741637;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v3;
    v11 = 71;
LABEL_17:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      v11,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)v5,
      (char)a3);
    return v3;
  }
  InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
  LODWORD(a2) = InformationBufferLength / 6;
  if ( InformationBufferLength != 6 * (InformationBufferLength / 6) )
  {
    *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    v3 = -1073676268;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v3;
    v11 = 72;
    goto LABEL_17;
  }
  LODWORD(a2) = InformationBufferLength / 6;
  if ( InformationBufferLength / 6 > a1->EthDB->MaxMulticastAddresses )
  {
    *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    v3 = -1073676279;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = 73;
      goto LABEL_17;
    }
  }
  return v3;
}
