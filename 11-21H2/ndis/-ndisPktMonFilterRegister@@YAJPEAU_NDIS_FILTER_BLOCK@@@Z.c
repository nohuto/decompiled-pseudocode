/*
 * XREFs of ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0109ED8
 * Callers:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C003546C (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C000AFD0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     PktMonClientComponentUnregister @ 0x1C0020E48 (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C0020F60 (PktMonClientComponentRegister.c)
 *     ?ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C0022E98 (-ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00CC9C4 (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00CCC8C (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonFilterRegister(struct _NDIS_FILTER_BLOCK *a1)
{
  _REFERENCE_EX *p_PnPRef; // r15
  unsigned int v2; // ebx
  unsigned __int16 v4; // r9
  _NDIS_FILTER_BLOCK *LowerFilter; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // [rsp+40h] [rbp-19h] BYREF
  char v13[7]; // [rsp+41h] [rbp-18h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v16; // [rsp+68h] [rbp+Fh] BYREF
  int v17; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh] BYREF
  int v19; // [rsp+80h] [rbp+27h]

  p_PnPRef = &a1->PnPRef;
  v2 = 0;
  v17 = *(_DWORD *)L"r";
  v16 = *(_QWORD *)L"Upper";
  v14[1] = &v16;
  v19 = *(_DWORD *)L"r";
  v15[1] = &v18;
  v14[0] = 786442LL;
  v18 = *(_QWORD *)L"Lower";
  v15[0] = 786442LL;
  v12 = 0;
  v13[0] = 1;
  if ( ndisReferenceRef(&a1->PnPRef, 0x18u) )
  {
    v2 = PktMonClientComponentRegister(
           (__int64)&a1->PktMonComp,
           (__int64)&a1->FilterDriver->ImageName,
           (__int64)&a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
           3LL,
           a1->MediaType);
    if ( v2 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v4 = 22;
LABEL_5:
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          v4,
          (struct _GUID *)&WPP_385017eb81993b86b76fef631a959ec8_Traceguids,
          (char)a1,
          v2);
      }
    }
    else
    {
      v2 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 9, (__int64)v13, 1u);
      if ( v2 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v4 = 23;
        goto LABEL_5;
      }
      v2 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 1, (__int64)&a1->IfIndex, 4u);
      if ( v2 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v4 = 24;
        goto LABEL_5;
      }
      v2 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 2, (__int64)&a1->Miniport->IfIndex, 4u);
      if ( v2 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v4 = 25;
        goto LABEL_5;
      }
      LowerFilter = a1->LowerFilter;
      if ( LowerFilter )
      {
        v2 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 3, (__int64)&LowerFilter->IfIndex, 4u);
        if ( v2 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v4 = 26;
          goto LABEL_5;
        }
      }
      if ( FILTER_TEST_FLAG(a1, 0x8000) )
      {
        v2 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 5, (__int64)&a1->MediaType, 4u);
        if ( v2 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v4 = 27;
          goto LABEL_5;
        }
      }
      FilterDriver = a1->FilterDriver;
      if ( !FilterDriver->DefaultFilterCharacteristics.SendNetBufferListsHandler
        && !FilterDriver->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler
        && !a1->Characteristics.SendNetBufferListsHandler
        && !a1->Characteristics.ReceiveNetBufferListsHandler )
      {
        v12 = 1;
        v2 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 8, (__int64)&v12, 1u);
        if ( v2 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v4 = 28;
          goto LABEL_5;
        }
      }
      v2 = PktMonClientAddEdge(
             (__int64)&a1->PktMonComp,
             (__int64)v14,
             v7,
             v8,
             a1->MediaType,
             (__int64)&a1->PktMonEdgeUpper);
      if ( v2 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v4 = 29;
        goto LABEL_5;
      }
      v2 = PktMonClientAddEdge(
             (__int64)&a1->PktMonComp,
             (__int64)v15,
             v10,
             v11,
             a1->Miniport->MiniportMediaType,
             (__int64)&a1->PktMonEdgeLower);
      if ( !v2 )
        goto LABEL_7;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v4 = 30;
        goto LABEL_5;
      }
    }
LABEL_6:
    PktMonClientComponentUnregister((__int64 *)&a1->PktMonComp);
LABEL_7:
    ndisDereferenceRef(&p_PnPRef->SpinLock, 0x18u);
  }
  return v2;
}
