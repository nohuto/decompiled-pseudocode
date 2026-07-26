/*
 * XREFs of ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00914B0
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
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1C008D9F8 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C00932A0 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // r15
  struct _SINGLE_LIST_ENTRY v6; // rbx
  char v7; // r12
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int v11; // eax
  KIRQL v12; // dl
  int v13; // esi
  _DWORD *InformationBuffer; // r15
  struct _NDIS_PACKET_PATTERN_ENTRY *v15; // rax
  NDIS_PORT_NUMBER Next_high; // eax
  int v17; // eax
  _SINGLE_LIST_ENTRY *v18; // rsi
  UINT WoLPatternSize; // eax
  int v20; // r9d
  unsigned __int16 v21; // r9
  int v22; // edx
  _QWORD *v23; // rbx
  void *v24; // rcx
  struct _NDIS_FILTER_BLOCK *v26; // [rsp+28h] [rbp-D8h]
  struct _NDIS_FILTER_BLOCK *v27; // [rsp+28h] [rbp-D8h]
  KIRQL NewIrql[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_FILTER_BLOCK *v29; // [rsp+58h] [rbp-A8h]
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_OID_REQUEST v31; // [rsp+70h] [rbp-90h] BYREF

  v29 = a2;
  v4 = a2;
  memset(&v31, 0, 0xF8uLL);
  P[0] = 0LL;
  v6.Next = 0LL;
  v7 = 0;
  NewIrql[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Du,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      (char)v4,
      a3);
  ndisWaitForKernelObject(&a1->PMPatternSemaphore);
  do
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, v4);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v21 = 78;
      LODWORD(v26) = SetMiniport;
LABEL_25:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        v21,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
        v26);
      goto LABEL_20;
    }
    if ( v7 )
      goto LABEL_14;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
      Next = a1->WOLPatternList.Next;
    else
      Next = a1->PatternList.Next;
    v11 = ndisClonePMPatternList(Next, (struct _SINGLE_LIST_ENTRY *)P);
    v12 = NewIrql[0];
    a1->MiniportThread = 0LL;
    v13 = v11;
    KeReleaseSpinLock(&a1->Lock, v12);
    if ( v13 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v21 = 79;
      LODWORD(v26) = v13;
      goto LABEL_25;
    }
    v7 = 1;
LABEL_14:
    InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
    v15 = ndisRemovePMLowestPriorityEntry((struct _SINGLE_LIST_ENTRY *)P, InformationBuffer[2]);
    if ( !v15 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = InformationBuffer[2];
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x50u,
          (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
          v26);
      }
      v4 = v29;
      goto LABEL_20;
    }
    v15->Link = v6;
    v6.Next = &v15->Link;
    memset(&v31, 0, 0xF8uLL);
    v4 = v29;
    *(_QWORD *)&v31.NdisReserved[32] = &ndisIntReqGeneric;
    v31.Header = (NDIS_OBJECT_HEADER)15466902;
    v31.DATA.QUERY_INFORMATION.Oid = -50265845;
    v31.RequestType = NdisRequestSetInformation;
    Next_high = HIDWORD(v6.Next[5].Next);
    *(_DWORD *)&v31.NdisReserved[16] |= 0x1800008u;
    v31.PortNumber = Next_high;
    v31.DATA.QUERY_INFORMATION.InformationBuffer = &v6.Next[5];
    v31.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v17 = ndisQuerySetMiniportEx(a1, 0LL, &v31, 0, 0LL, v29);
  }
  while ( !v17 );
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v27) = v17;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x51u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      v27);
  }
  while ( 1 )
  {
    v18 = v6.Next;
    v6.Next = v6.Next->Next;
    memset(&v31, 0, 0xF8uLL);
    *(_QWORD *)&v31.NdisReserved[32] = &ndisIntReqGeneric;
    v31.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&v31.NdisReserved[16] |= 8u;
    v31.DATA.QUERY_INFORMATION.Oid = -50265846;
    v31.RequestType = NdisRequestSetInformation;
    v31.PortNumber = HIDWORD(v18[5].Next);
    v31.DATA.QUERY_INFORMATION.InformationBuffer = &v18[6];
    WoLPatternSize = ndisGetWoLPatternSize((struct _NDIS_PM_WOL_PATTERN *)&v18[6]);
    *(_DWORD *)&v31.NdisReserved[16] = v20 | 0x1800000;
    v31.DATA.QUERY_INFORMATION.InformationBufferLength = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v31, 0, 0LL, v4) )
      break;
    ExFreePoolWithTag(v18, 0);
LABEL_20:
    if ( !v6.Next )
      goto LABEL_33;
  }
  v18->Next = v6.Next;
  v6.Next = v18;
LABEL_33:
  KeReleaseSemaphore(&a1->PMPatternSemaphore, 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1, v6.Next, 1073938513);
  v23 = P[0];
  while ( v23 )
  {
    v24 = v23;
    v23 = (_QWORD *)*v23;
    ExFreePoolWithTag(v24, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      0xBu,
      0x52u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      (char)v4,
      (char)a3,
      v9);
  return v9;
}
