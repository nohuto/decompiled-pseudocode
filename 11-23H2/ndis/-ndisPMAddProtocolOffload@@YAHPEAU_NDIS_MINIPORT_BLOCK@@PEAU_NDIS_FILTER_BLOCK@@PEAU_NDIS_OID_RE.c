/*
 * XREFs of ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0096F7C
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094EF0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C000743C (WPP_RECORDER_SF_qqqD.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C0092D98 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x1C00933DC (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x1C00939C0 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C00992D8 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _SINGLE_LIST_ENTRY v6; // rbx
  char v7; // r12
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  int v10; // eax
  KIRQL v11; // dl
  int v12; // esi
  struct _NDIS_PACKET_PATTERN_ENTRY *v13; // rax
  __int64 v14; // r11
  NDIS_PORT_NUMBER Next_high; // eax
  int v16; // eax
  _SINGLE_LIST_ENTRY *Next; // rsi
  NDIS_PORT_NUMBER v18; // eax
  UINT PMProtocolOffloadSize; // eax
  unsigned __int16 v20; // r9
  unsigned __int8 v21; // dl
  int v22; // edx
  _QWORD *v23; // rbx
  void *v24; // rcx
  _QWORD *v25; // rsi
  struct _NDIS_FILTER_BLOCK *v27; // [rsp+28h] [rbp-D8h]
  struct _NDIS_FILTER_BLOCK *v28; // [rsp+28h] [rbp-D8h]
  KIRQL NewIrql[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  struct _NDIS_OID_REQUEST v31; // [rsp+60h] [rbp-A0h] BYREF

  memset(&v31, 0, 0xF8uLL);
  P = 0LL;
  v6.Next = 0LL;
  v7 = 0;
  NewIrql[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x61u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  ndisWaitForKernelObject(&a1->PMOffloadSemaphore);
  do
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v20 = 98;
      LODWORD(v27) = SetMiniport;
      goto LABEL_20;
    }
    if ( v7 )
      goto LABEL_9;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    v10 = ndisClonePMPatternList(a1->PMProtocolOffloadList.Next, (struct _SINGLE_LIST_ENTRY *)&P);
    v11 = NewIrql[0];
    a1->MiniportThread = 0LL;
    v12 = v10;
    KeReleaseSpinLock(&a1->Lock, v11);
    if ( v12 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v20 = 99;
      LODWORD(v27) = v12;
LABEL_20:
      v21 = 2;
      goto LABEL_21;
    }
    v7 = 1;
LABEL_9:
    v13 = ndisRemovePMLowestPriorityEntry(
            (struct _SINGLE_LIST_ENTRY *)&P,
            *((_DWORD *)a3->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v13 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v20 = 100;
      LODWORD(v27) = *(_DWORD *)(v14 + 8);
      v21 = 4;
LABEL_21:
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v21,
        0xEu,
        v20,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        v27);
      goto LABEL_15;
    }
    v13->Link = v6;
    v6.Next = &v13->Link;
    memset(&v31, 0, 0xF8uLL);
    *(_DWORD *)&v31.NdisReserved[16] |= 8u;
    *(_QWORD *)&v31.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v31.NdisReserved[96]);
    v31.Header = (NDIS_OBJECT_HEADER)15466902;
    v31.DATA.QUERY_INFORMATION.Oid = -50265841;
    v31.RequestType = NdisRequestSetInformation;
    Next_high = HIDWORD(v6.Next[5].Next);
    *(_DWORD *)&v31.NdisReserved[16] |= 0x1800000u;
    v31.PortNumber = Next_high;
    v31.DATA.QUERY_INFORMATION.InformationBuffer = &v6.Next[5];
    v31.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v16 = ndisQuerySetMiniportEx(a1, 0LL, &v31, 0, 0LL, a2);
  }
  while ( !v16 );
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v28) = v16;
    WPP_RECORDER_SF_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x65u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v28);
  }
  while ( 1 )
  {
    Next = v6.Next;
    v6.Next = v6.Next->Next;
    memset(&v31, 0, 0xF8uLL);
    *(_DWORD *)&v31.NdisReserved[16] |= 8u;
    *(_QWORD *)&v31.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v31.NdisReserved[96]);
    v31.Header = (NDIS_OBJECT_HEADER)15466902;
    v31.DATA.QUERY_INFORMATION.Oid = -50265843;
    v31.RequestType = NdisRequestSetInformation;
    v18 = HIDWORD(Next[5].Next);
    v31.DATA.QUERY_INFORMATION.InformationBuffer = &Next[6];
    v31.PortNumber = v18;
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6]);
    *(_DWORD *)&v31.NdisReserved[16] |= 0x1800000u;
    v31.DATA.QUERY_INFORMATION.InformationBufferLength = PMProtocolOffloadSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v31, 0, 0LL, a2) )
      break;
    ExFreePoolWithTag(Next, 0);
LABEL_15:
    if ( !v6.Next )
      goto LABEL_28;
  }
  Next->Next = v6.Next;
  v6.Next = Next;
LABEL_28:
  KeReleaseSemaphore(&a1->PMOffloadSemaphore, 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1, v6.Next, 1073938514);
  v23 = P;
  if ( P )
  {
    do
    {
      v24 = v23;
      v25 = v23;
      if ( v23 )
      {
        v25 = (_QWORD *)*v23;
        v23 = (_QWORD *)*v23;
      }
      ExFreePoolWithTag(v24, 0);
    }
    while ( v25 );
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      0xBu,
      0x66u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v9);
  return v9;
}
