/*
 * XREFs of ?ndisXlateRemovePacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009ADB8
 * Callers:
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096C60 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisXlateRemovePacketPatternToWolPatternOid(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  unsigned int v2; // edi
  __int64 Pool2; // r8
  NDIS_OID Oid; // eax
  int v7; // ecx

  v2 = 0;
  *a2 = 0;
  Pool2 = ExAllocatePool2(64LL, 32LL, 2021082190);
  if ( Pool2 )
  {
    Oid = a1->DATA.QUERY_INFORMATION.Oid;
    *(_QWORD *)(Pool2 + 8) = a1->DATA.QUERY_INFORMATION.InformationBuffer;
    *(_DWORD *)(Pool2 + 16) = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
    v7 = *(_DWORD *)&a1->NdisReserved[80];
    a1->DATA.QUERY_INFORMATION.Oid = -50265845;
    a1->DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)(Pool2 + 24);
    a1->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    *(_QWORD *)&a1->NdisReserved[72] = Pool2;
    *(_DWORD *)Pool2 = Oid;
    *(_DWORD *)(Pool2 + 24) = v7;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x71u,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        a1);
    v2 = -1073741670;
    *a2 = 1;
  }
  return v2;
}
