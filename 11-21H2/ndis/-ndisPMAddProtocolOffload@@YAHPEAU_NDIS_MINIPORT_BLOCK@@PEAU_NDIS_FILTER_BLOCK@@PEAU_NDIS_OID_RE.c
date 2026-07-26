/*
 * XREFs of ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090F50
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008EF04 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C001D55C (WPP_RECORDER_SF_qqqD.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C008CD54 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x1C008D398 (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x1C008D9B8 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C00932A0 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // r13
  struct _SINGLE_LIST_ENTRY v6; // rbx
  char v7; // r12
  unsigned int SetMiniport; // eax
  unsigned int v9; // esi
  int v10; // eax
  KIRQL v11; // dl
  int v12; // r14d
  _DWORD *InformationBuffer; // r13
  struct _NDIS_PACKET_PATTERN_ENTRY *v14; // rax
  NDIS_PORT_NUMBER Next_high; // eax
  int v16; // eax
  _SINGLE_LIST_ENTRY *Next; // r14
  UINT PMProtocolOffloadSize; // eax
  int v19; // r8d
  unsigned __int16 v20; // r9
  int v21; // edx
  _QWORD *v22; // rbx
  void *v23; // rcx
  struct _NDIS_FILTER_BLOCK *v25; // [rsp+28h] [rbp-D8h]
  struct _NDIS_FILTER_BLOCK *v26; // [rsp+28h] [rbp-D8h]
  KIRQL NewIrql[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_FILTER_BLOCK *v28; // [rsp+58h] [rbp-A8h]
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_OID_REQUEST v30; // [rsp+70h] [rbp-90h] BYREF

  v28 = a2;
  v4 = a2;
  memset(&v30, 0, 0xF8uLL);
  P[0] = 0LL;
  v6.Next = 0LL;
  v7 = 0;
  NewIrql[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x61u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      (char)v4,
      a3);
  ndisWaitForKernelObject(&a1->PMOffloadSemaphore);
  do
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, v4);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v20 = 98;
      LODWORD(v25) = SetMiniport;
LABEL_20:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        v20,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
        v25);
      goto LABEL_15;
    }
    if ( v7 )
      goto LABEL_9;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    v10 = ndisClonePMPatternList(a1->PMProtocolOffloadList.Next, (struct _SINGLE_LIST_ENTRY *)P);
    v11 = NewIrql[0];
    a1->MiniportThread = 0LL;
    v12 = v10;
    KeReleaseSpinLock(&a1->Lock, v11);
    if ( v12 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v20 = 99;
      LODWORD(v25) = v12;
      goto LABEL_20;
    }
    v7 = 1;
LABEL_9:
    InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
    v14 = ndisRemovePMLowestPriorityEntry((struct _SINGLE_LIST_ENTRY *)P, InformationBuffer[2]);
    if ( !v14 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = InformationBuffer[2];
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x64u,
          (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
          v25);
      }
      v4 = v28;
      goto LABEL_15;
    }
    v14->Link = v6;
    v6.Next = &v14->Link;
    memset(&v30, 0, 0xF8uLL);
    v4 = v28;
    *(_QWORD *)&v30.NdisReserved[32] = &ndisIntReqGeneric;
    v30.Header = (NDIS_OBJECT_HEADER)15466902;
    v30.DATA.QUERY_INFORMATION.Oid = -50265841;
    v30.RequestType = NdisRequestSetInformation;
    Next_high = HIDWORD(v6.Next[5].Next);
    *(_DWORD *)&v30.NdisReserved[16] |= 0x1800008u;
    v30.PortNumber = Next_high;
    v30.DATA.QUERY_INFORMATION.InformationBuffer = &v6.Next[5];
    v30.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v16 = ndisQuerySetMiniportEx(a1, 0LL, &v30, 0, 0LL, v28);
  }
  while ( !v16 );
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v26) = v16;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x65u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      v26);
  }
  while ( 1 )
  {
    Next = v6.Next;
    v6.Next = v6.Next->Next;
    memset(&v30, 0, 0xF8uLL);
    *(_QWORD *)&v30.NdisReserved[32] = &ndisIntReqGeneric;
    v30.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&v30.NdisReserved[16] |= 8u;
    v30.DATA.QUERY_INFORMATION.Oid = -50265843;
    v30.RequestType = NdisRequestSetInformation;
    v30.PortNumber = HIDWORD(Next[5].Next);
    v30.DATA.QUERY_INFORMATION.InformationBuffer = &Next[6];
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6]);
    *(_DWORD *)&v30.NdisReserved[16] = v19 | 0x1800000;
    v30.DATA.QUERY_INFORMATION.InformationBufferLength = PMProtocolOffloadSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v30, 0, 0LL, v4) )
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
  v22 = P[0];
  while ( v22 )
  {
    v23 = v22;
    v22 = (_QWORD *)*v22;
    ExFreePoolWithTag(v23, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v21,
      0xBu,
      0x66u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      (char)v4,
      (char)a3,
      v9);
  return v9;
}
