/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180039C90
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18003A8AC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000DA70 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x1800395E0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180039F0C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180039FD4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003A090 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18003B010 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18003D480 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?remove@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_KAEBV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180051368 (-remove@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRe.c)
 *     memcpy_0 @ 0x1800536E2 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18008BD64 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned __int8 *a8,
        int a9,
        unsigned int *a10)
{
  ExecutionModel::_ResourceInfo *v10; // rbx
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // r15
  int v15; // eax
  unsigned __int8 v16; // di
  int v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned __int8 v24; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[7]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v29; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-94h] BYREF
  int v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  _QWORD v33[4]; // [rsp+80h] [rbp-80h] BYREF
  int v34[300]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = (ExecutionModel::_ResourceInfo *)v34;
  v12 = a3;
  v13 = 50LL;
  v32 = a1;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v10);
    v10 = (ExecutionModel::_ResourceInfo *)((char *)v10 + 24);
    --v13;
  }
  while ( v13 );
  v33[2] = 0LL;
  v33[0] = v33;
  v24 = 0;
  v33[1] = v33;
  v14 = v12;
  memcpy_0(v34, a4, 24 * v12);
  if ( a9 == 1 )
  {
    v16 = 1;
  }
  else
  {
    v15 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
            v32,
            v12,
            (unsigned int)v34,
            a6,
            a5,
            a7,
            (__int64)&v24,
            (__int64)v25,
            (__int64)v33);
    v16 = v24;
    v17 = v15;
    if ( v15 < 0 )
      goto LABEL_13;
    if ( !v25[0] )
    {
LABEL_21:
      v17 = -2147220992;
      goto LABEL_13;
    }
    if ( !v24 )
      goto LABEL_7;
  }
  if ( !a8 )
    goto LABEL_21;
LABEL_7:
  v18 = v32;
  a10[322] = a5;
  a10[2] = a6;
  if ( (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(v18 + 40) < 0 )
  {
    v17 = -2147024882;
  }
  else
  {
    if ( v16 )
    {
      a10[320] = 1;
      if ( (_DWORD)v12 )
      {
        do
        {
          if ( *(_DWORD *)a4 <= 0x31u )
          {
            v19 = 3 * (*(int *)a4 + 3LL);
            *(_OWORD *)&a10[2 * v19] = *(_OWORD *)a4;
            *(_QWORD *)&a10[2 * v19 + 4] = a4[2];
          }
          a4 += 3;
          --v14;
        }
        while ( v14 );
      }
      ExecutionModel::BaseResourceSet::RevokeResourceList(v19, v33);
    }
    else
    {
      ExecutionModel::BaseResourceSet::RecursiveVisit(v18, 1, v12, v34, a10[2], 1, &v24, v25, 0LL, (__int64)a10);
      a10[320] = 2;
    }
    if ( a8 )
      *a8 = v16;
    v17 = 0;
  }
LABEL_13:
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v27 = a7;
    v28 = v16;
    v29 = a6;
    v30 = a5;
    v31 = v12;
    LODWORD(v26) = v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      (unsigned int)&unk_1800C5769,
      v21,
      v22,
      (__int64)&v26,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27);
  }
  if ( v17 < 0 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v26, a10);
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove(
      v32 + 40,
      &v26);
    ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(&v26);
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a10 + 32LL))(a10);
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v33);
  return (unsigned int)v17;
}
