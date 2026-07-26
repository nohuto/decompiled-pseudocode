/*
 * XREFs of ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00AF524
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00AFB20 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFDirectOidRequest @ 0x1C00B01A0 (NdisFDirectOidRequest.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C001E5B8 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022EB8 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00AFC6C (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_FILTER_BLOCK *a4)
{
  struct _NDIS_FILTER_BLOCK *v4; // r14
  int v6; // edi
  struct _NDIS_FILTER_BLOCK *NextDirectRequestHandle; // rbx
  KIRQL v11; // dl
  unsigned int v12; // ebx
  bool v13; // al
  KIRQL v14; // dl
  unsigned __int8 WdfCxPowerManagement; // bl
  __int64 v17; // [rsp+38h] [rbp-38h]
  _QWORD Parameter[4]; // [rsp+50h] [rbp-20h] BYREF
  KIRQL NewIrql; // [rsp+A0h] [rbp+30h] BYREF
  int v20; // [rsp+B0h] [rbp+40h] BYREF

  v4 = 0LL;
  v6 = 0;
  v20 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      a4);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
  if ( a3 )
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a3->NextDirectRequestHandle;
  else
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a2->Next.DirectRequestHandle;
  if ( !a4 )
    goto LABEL_21;
  if ( ndisReferenceRefEx(&a4->PnPRef.SpinLock, 0x12u, (enum _NDIS_REFERENCE_STATUS *)&v20) )
  {
    if ( a4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
    {
      NextDirectRequestHandle = a4;
    }
    else if ( a4->NextDirectRequestHandle )
    {
      NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a4->NextDirectRequestHandle;
    }
    ndisDereferenceRef(&a4->PnPRef.SpinLock, 0x12u);
  }
  else if ( v20 != 1 )
  {
    v11 = NewIrql;
    v12 = -1073741823;
    if ( v20 == 2 )
      v12 = -1073741670;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v11);
LABEL_37:
    if ( v12 == 259 )
      goto LABEL_40;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v6 = 0;
    v20 = 0;
LABEL_21:
    if ( NextDirectRequestHandle->Header.Type != 5 )
      break;
    v4 = NextDirectRequestHandle;
    v13 = ndisReferenceRefEx(&NextDirectRequestHandle->PnPRef.SpinLock, 0x10u, (enum _NDIS_REFERENCE_STATUS *)&v20);
    v6 = v20;
    if ( v13 || v20 != 1 )
      break;
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)NextDirectRequestHandle->NextDirectRequestHandle;
    v4 = 0LL;
  }
  v14 = NewIrql;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v14);
  if ( v6 )
  {
    v12 = -1073741823;
    if ( v6 == 2 )
      v12 = -1073741670;
    goto LABEL_40;
  }
  if ( (!v4 || v4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler)
    && a2->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
  {
    if ( v4 )
    {
      Parameter[0] = 0LL;
      Parameter[2] = 0LL;
      Parameter[1] = v4;
      Parameter[3] = a1;
      v12 = -1073741670;
      if ( KeExpandKernelStackAndCalloutEx(ndisFDoDirectOidRequestInternal, Parameter, (unsigned int)Size, 0, 0LL) >= 0 )
        v12 = Parameter[0];
    }
    else
    {
      WdfCxPowerManagement = a2->WdfCxPowerManagement;
      if ( ndisReferenceMiniport(a2, 0x49u) )
      {
        v12 = ndisMDoDirectOidRequest(a2, a1, WdfCxPowerManagement != 0);
        ndisDereferenceMiniport(a2, 0x49u);
      }
      else
      {
        v12 = -1073741823;
      }
    }
    goto LABEL_37;
  }
  v12 = -1073741637;
LABEL_38:
  if ( v4 )
    ndisDereferenceRef(&v4->PnPRef.SpinLock, 0x10u);
LABEL_40:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = v12;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      v17);
  }
  return v12;
}
