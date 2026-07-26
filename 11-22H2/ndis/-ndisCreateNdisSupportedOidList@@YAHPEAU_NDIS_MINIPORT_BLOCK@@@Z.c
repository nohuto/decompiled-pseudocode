/*
 * XREFs of ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002CB64
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisCreateNdisSupportedOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  unsigned __int8 MajorNdisVersion; // cl
  int v4; // eax
  unsigned int v5; // eax
  __int64 Pool2; // rax
  int v7; // r8d
  unsigned int *v8; // rcx

  v2 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      a1);
  MajorNdisVersion = a1->MajorNdisVersion;
  v4 = MajorNdisVersion < 6u ? 45 : 83;
  if ( a1->MediaType == NdisMedium802_3 )
  {
    v4 = MajorNdisVersion < 6u ? 46 : 84;
    if ( MajorNdisVersion >= 6u )
      v4 = MajorNdisVersion < 6u ? 50 : 88;
  }
  v5 = 4 * v4;
  a1->ndisSupportedOidListLength = v5;
  Pool2 = ExAllocatePool2(64LL, v5, 1835091022);
  a1->ndisSupportedOidList = (unsigned int *)Pool2;
  if ( Pool2 )
  {
    v7 = 45;
    *(_OWORD *)Pool2 = ndisHandledNdis5Ndis6GenOids;
    *(_OWORD *)(Pool2 + 16) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 1);
    *(_OWORD *)(Pool2 + 32) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 2);
    *(_OWORD *)(Pool2 + 48) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 3);
    *(_OWORD *)(Pool2 + 64) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 4);
    *(_OWORD *)(Pool2 + 80) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 5);
    *(_OWORD *)(Pool2 + 96) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 6);
    *(_OWORD *)(Pool2 + 112) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 7);
    *(_OWORD *)(Pool2 + 128) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 8);
    *(_OWORD *)(Pool2 + 144) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 9);
    *(_OWORD *)(Pool2 + 160) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 10);
    *(_DWORD *)(Pool2 + 176) = *((_DWORD *)&ndisHandledNdis5Ndis6GenOids + 44);
    if ( a1->MajorNdisVersion >= 6u )
    {
      v8 = a1->ndisSupportedOidList + 45;
      v7 = 83;
      *(_OWORD *)v8 = ndisHandledNdis6OnlyGenOids;
      *((_OWORD *)v8 + 1) = *(_OWORD *)(0x1C0000000LL + 1436400);
      *((_OWORD *)v8 + 2) = *(_OWORD *)(0x1C0000000LL + 1436416);
      *((_OWORD *)v8 + 3) = *(_OWORD *)(0x1C0000000LL + 1436432);
      *((_OWORD *)v8 + 4) = *(_OWORD *)(0x1C0000000LL + 1436448);
      *((_OWORD *)v8 + 5) = *(_OWORD *)(0x1C0000000LL + 1436464);
      *((_OWORD *)v8 + 6) = *(_OWORD *)(0x1C0000000LL + 1436480);
      *((_OWORD *)v8 + 7) = *(_OWORD *)(0x1C0000000LL + 1436496);
      *((_OWORD *)v8 + 8) = *(_OWORD *)(0x1C0000000LL + 1436512);
      *((_QWORD *)v8 + 18) = *(_QWORD *)(0x1C0000000LL + 1436528);
    }
    if ( a1->MediaType == NdisMedium802_3 )
    {
      a1->ndisSupportedOidList[v7] = (unsigned int)ndisHandledNdis5Ndis6_802_3_Oids;
      if ( a1->MajorNdisVersion >= 6u )
        *(_OWORD *)&a1->ndisSupportedOidList[v7 + 1] = *(_OWORD *)&ndisHandledNdis6Only_802_3_Oids;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x14u,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      v2);
  return v2;
}
