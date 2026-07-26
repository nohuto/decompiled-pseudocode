/*
 * XREFs of ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00292F4
 * Callers:
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0028F44 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x1C003F356 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0008968 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0008F10 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D070 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EE2E (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F700 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, char a3)
{
  char v3; // r15
  struct _KEVENT *NextReturnNetBufferListsTracker; // r14
  unsigned int v7; // edi
  unsigned int NextReturnNetBufferListsContext; // edx
  unsigned int HigherFilter_high; // ecx
  NDIS_REQUEST_TYPE RequestType; // eax
  int v11; // ecx
  unsigned int v12; // eax
  KIRQL v13; // dl
  _NDIS_M_DRIVER_BLOCK *FilterFriendlyName; // r14
  NDIS_OID Oid; // r13d
  NDIS_STATUS v16; // eax
  struct _NDIS_OID_REQUEST *v17; // r15
  struct _NDIS_OID_REQUEST *v18; // rdx
  KIRQL v21; // dl
  KIRQL v22; // dl
  char v23[8]; // [rsp+30h] [rbp-30h]
  __int64 v24; // [rsp+38h] [rbp-28h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+48h] BYREF
  char v26; // [rsp+B0h] [rbp+50h]
  struct _NDIS_OID_REQUEST *v27; // [rsp+B8h] [rbp+58h] BYREF

  v26 = a3;
  v3 = a3;
  NextReturnNetBufferListsTracker = 0LL;
  v7 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      a2);
  if ( !v3
    && *(_QWORD *)&a1[4].PMCurrentParameters.EnabledProtocolOffloads
    && !(unsigned __int8)ndisSetBusyAsync(a1, 1LL, 50LL, a2, 0) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x13u,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        a2);
    v7 = 259;
    goto LABEL_26;
  }
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1->FakeStatus);
  NextReturnNetBufferListsContext = (unsigned int)a1[4].NextReturnNetBufferListsContext;
  a1->NextIndicateReceiveNetBufferListsObject = (_NDIS_OBJECT_HEADER *)KeGetCurrentThread();
  if ( NextReturnNetBufferListsContext >= 0x4E20 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x14u,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)a1,
        (char)a2,
        32,
        NextReturnNetBufferListsContext);
    v7 = -1073741670;
    goto LABEL_53;
  }
  HigherFilter_high = HIDWORD(a1->HigherFilter);
  if ( (HigherFilter_high & 0x20000) != 0 )
  {
    v7 = -1073676276;
LABEL_53:
    v22 = NewIrql;
    a1->NextIndicateReceiveNetBufferListsObject = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&a1->FakeStatus, v22);
LABEL_54:
    if ( !v3 && *(_QWORD *)&a1[4].PMCurrentParameters.EnabledProtocolOffloads )
      ndisClearBusy(a1, 1LL, 50LL);
    if ( NextReturnNetBufferListsTracker )
      KeSetEvent(NextReturnNetBufferListsTracker, 0, 0);
    goto LABEL_26;
  }
  if ( ((__int64)a1->HigherFilter & 0x80000) != 0 )
  {
    v7 = -1073676275;
    goto LABEL_53;
  }
  RequestType = a2->RequestType;
  if ( RequestType == NdisRequestQueryStatistics && ((HigherFilter_high & 0x800) != 0 || SHIDWORD(a1[4].LockThread) > 1) )
  {
    v7 = -2147483633;
    goto LABEL_53;
  }
  v11 = HigherFilter_high & 0x20100;
  if ( v11 || SHIDWORD(a1[4].LockThread) > 1 )
  {
    if ( (RequestType & 0xFFFFFFFD) != 0 )
    {
      if ( RequestType == NdisRequestSetInformation )
      {
        a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        v7 = v11 == 0 ? 0xC023002F : 0;
      }
      else if ( RequestType == NdisRequestMethod )
      {
        a2->DATA.METHOD_INFORMATION.BytesRead = 0;
      }
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    }
    goto LABEL_53;
  }
  v12 = NextReturnNetBufferListsContext + 1;
  v13 = NewIrql;
  LODWORD(a1[4].NextReturnNetBufferListsContext) = v12;
  *(_DWORD *)&a2->NdisReserved[16] |= 0x10000u;
  a1->NextIndicateReceiveNetBufferListsObject = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&a1->FakeStatus, v13);
  v27 = 0LL;
  FilterFriendlyName = (_NDIS_M_DRIVER_BLOCK *)a1[4].FilterFriendlyName;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v23 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      *(_QWORD *)v23);
  }
  v16 = ndisOidCloneForCompatibility(&a1->Header, a2, 0, &v27);
  v17 = v27;
  v7 = v16;
  if ( !v16 )
  {
    if ( v27 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v16 + 11,
        v16 + 16,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)a2,
        (char)v27,
        v27->DATA.QUERY_INFORMATION.Oid);
    v18 = a2;
    if ( v17 )
      v18 = v17;
    v7 = FilterFriendlyName->MiniportDriverCharacteristics.DirectOidRequestHandler(a1->FilterModuleContext, v18);
  }
  if ( v7 != 259 && v17 )
    ndisOidFreeInternalCloneRequest(a1, v17, 0, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v7;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      Oid,
      v24);
  }
  if ( v7 != 259 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
    if ( LODWORD(a1[4].NextReturnNetBufferListsContext)-- == 1 )
    {
      if ( a1[4].NextReturnNetBufferListsTracker )
      {
        NextReturnNetBufferListsTracker = (struct _KEVENT *)a1[4].NextReturnNetBufferListsTracker;
        a1[4].NextReturnNetBufferListsTracker = 0LL;
      }
      else
      {
        NextReturnNetBufferListsTracker = 0LL;
      }
    }
    else
    {
      NextReturnNetBufferListsTracker = 0LL;
    }
    v21 = NewIrql;
    a1->NextIndicateReceiveNetBufferListsObject = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&a1->FakeStatus, v21);
    v3 = v26;
    goto LABEL_54;
  }
LABEL_26:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v7;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      v24);
  }
  return v7;
}
