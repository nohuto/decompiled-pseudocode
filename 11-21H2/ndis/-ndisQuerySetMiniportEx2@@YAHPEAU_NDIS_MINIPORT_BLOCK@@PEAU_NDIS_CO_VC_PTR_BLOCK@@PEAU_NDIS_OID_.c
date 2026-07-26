/*
 * XREFs of ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x1C002EB74
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C002DE88 (ndisQuerySupportedGuidToOidList.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C002E53C (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C00A267C (WPP_RECORDER_SF_Ddd_ea_1C00A267C.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        __int64 a4,
        struct _NDIS_FILTER_BLOCK *a5,
        struct _NDIS_FILTER_BLOCK *a6,
        unsigned int a7,
        void **a8,
        unsigned int *a9,
        unsigned int *a10)
{
  void *v10; // rbx
  unsigned int v11; // esi
  unsigned int i; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // edi
  __int64 result; // rax
  UINT BytesNeeded; // ecx
  void *Pool2; // rax
  int v22; // edx
  int v23; // [rsp+20h] [rbp-38h]

  v10 = 0LL;
  v11 = 0;
  for ( i = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL); ; i = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL) )
  {
    v18 = i;
    if ( i != -1073676268 && i != -2147483643 && i != -1073676266 )
    {
      if ( !i )
      {
        *a10 = a3->DATA.QUERY_INFORMATION.BytesWritten;
        goto LABEL_7;
      }
      goto LABEL_19;
    }
    BytesNeeded = a3->DATA.QUERY_INFORMATION.BytesNeeded;
    if ( BytesNeeded <= v11 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          v16,
          v17,
          v23,
          a3->DATA.QUERY_INFORMATION.Oid,
          BytesNeeded,
          v11);
      v18 = -1073741823;
LABEL_19:
      *a10 = 0;
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0);
        v10 = 0LL;
      }
      goto LABEL_21;
    }
    v11 = a3->DATA.QUERY_INFORMATION.BytesNeeded;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      v11 = a3->DATA.QUERY_INFORMATION.BytesNeeded;
    }
    Pool2 = (void *)ExAllocatePool2(64LL, v11, a7);
    v10 = Pool2;
    if ( !Pool2 )
      break;
    a3->DATA.QUERY_INFORMATION.InformationBuffer = Pool2;
    a3->DATA.QUERY_INFORMATION.InformationBufferLength = v11;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_DD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      11,
      11,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      v11,
      a3->DATA.QUERY_INFORMATION.Oid);
  }
  *a10 = 0;
  v18 = -1073741670;
LABEL_21:
  v11 = 0;
LABEL_7:
  result = v18;
  *a8 = v10;
  *a9 = v11;
  return result;
}
