/*
 * XREFs of ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00974E0
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
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1C0093A00 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C00992D8 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _SINGLE_LIST_ENTRY v6; // rbx
  char v7; // r12
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int v11; // eax
  KIRQL v12; // dl
  int v13; // esi
  struct _NDIS_PACKET_PATTERN_ENTRY *v14; // rax
  __int64 v15; // r11
  NDIS_PORT_NUMBER Next_high; // eax
  int v17; // eax
  _SINGLE_LIST_ENTRY *v18; // rsi
  NDIS_PORT_NUMBER v19; // eax
  UINT WoLPatternSize; // eax
  unsigned __int16 v21; // r9
  unsigned __int8 v22; // dl
  int v23; // edx
  _QWORD *v24; // rbx
  void *v25; // rcx
  _QWORD *v26; // rsi
  struct _NDIS_FILTER_BLOCK *v28; // [rsp+28h] [rbp-D8h]
  struct _NDIS_FILTER_BLOCK *v29; // [rsp+28h] [rbp-D8h]
  KIRQL NewIrql[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  struct _NDIS_OID_REQUEST v32; // [rsp+60h] [rbp-A0h] BYREF

  memset(&v32, 0, 0xF8uLL);
  P = 0LL;
  v6.Next = 0LL;
  v7 = 0;
  NewIrql[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Du,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  ndisWaitForKernelObject(&a1->PMPatternSemaphore);
  do
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v21 = 78;
      LODWORD(v28) = SetMiniport;
LABEL_25:
      v22 = 2;
LABEL_26:
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v22,
        0xEu,
        v21,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        v28);
      goto LABEL_20;
    }
    if ( !v7 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
      if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
        Next = a1->WOLPatternList.Next;
      else
        Next = a1->PatternList.Next;
      v11 = ndisClonePMPatternList(Next, (struct _SINGLE_LIST_ENTRY *)&P);
      v12 = NewIrql[0];
      a1->MiniportThread = 0LL;
      v13 = v11;
      KeReleaseSpinLock(&a1->Lock, v12);
      if ( v13 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_20;
        v21 = 79;
        LODWORD(v28) = v13;
        goto LABEL_25;
      }
      v7 = 1;
    }
    v14 = ndisRemovePMLowestPriorityEntry(
            (struct _SINGLE_LIST_ENTRY *)&P,
            *((_DWORD *)a3->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v14 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v21 = 80;
      LODWORD(v28) = *(_DWORD *)(v15 + 8);
      v22 = 4;
      goto LABEL_26;
    }
    v14->Link = v6;
    v6.Next = &v14->Link;
    memset(&v32, 0, 0xF8uLL);
    *(_DWORD *)&v32.NdisReserved[16] |= 8u;
    *(_QWORD *)&v32.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v32.NdisReserved[96]);
    v32.Header = (NDIS_OBJECT_HEADER)15466902;
    v32.DATA.QUERY_INFORMATION.Oid = -50265845;
    v32.RequestType = NdisRequestSetInformation;
    Next_high = HIDWORD(v6.Next[5].Next);
    *(_DWORD *)&v32.NdisReserved[16] |= 0x1800000u;
    v32.PortNumber = Next_high;
    v32.DATA.QUERY_INFORMATION.InformationBuffer = &v6.Next[5];
    v32.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v17 = ndisQuerySetMiniportEx(a1, 0LL, &v32, 0, 0LL, a2);
  }
  while ( !v17 );
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v17;
    WPP_RECORDER_SF_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x51u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v29);
  }
  while ( 1 )
  {
    v18 = v6.Next;
    v6.Next = v6.Next->Next;
    memset(&v32, 0, 0xF8uLL);
    *(_DWORD *)&v32.NdisReserved[16] |= 8u;
    *(_QWORD *)&v32.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v32.NdisReserved[96]);
    v32.Header = (NDIS_OBJECT_HEADER)15466902;
    v32.DATA.QUERY_INFORMATION.Oid = -50265846;
    v32.RequestType = NdisRequestSetInformation;
    v19 = HIDWORD(v18[5].Next);
    v32.DATA.QUERY_INFORMATION.InformationBuffer = &v18[6];
    v32.PortNumber = v19;
    WoLPatternSize = ndisGetWoLPatternSize((struct _NDIS_PM_WOL_PATTERN *)&v18[6]);
    *(_DWORD *)&v32.NdisReserved[16] |= 0x1800000u;
    v32.DATA.QUERY_INFORMATION.InformationBufferLength = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v32, 0, 0LL, a2) )
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
  v24 = P;
  if ( P )
  {
    do
    {
      v25 = v24;
      v26 = v24;
      if ( v24 )
      {
        v26 = (_QWORD *)*v24;
        v24 = (_QWORD *)*v24;
      }
      ExFreePoolWithTag(v25, 0);
    }
    while ( v26 );
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      0xBu,
      0x52u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v9);
  return v9;
}
