/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180041408
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180041280 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180037CC0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18003F0D0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180041690 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180041724 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180041760 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18004292C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180044300 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ??1?$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x18004DCD0 (--1-$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004F874 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18008FDE8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
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
  int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rdi
  int v16; // eax
  unsigned __int8 v17; // bl
  int v18; // r14d
  __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  _QWORD *v25; // rdi
  _QWORD *v26; // rbx
  __int64 v27; // rsi
  _QWORD *v28; // r13
  _QWORD *v29; // rax
  unsigned __int8 v30; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[7]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v35; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+6Ch] [rbp-94h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  _QWORD v39[3]; // [rsp+78h] [rbp-88h] BYREF
  int v40[300]; // [rsp+90h] [rbp-70h] BYREF

  v10 = (ExecutionModel::_ResourceInfo *)v40;
  v12 = a3;
  v13 = a1;
  v32 = a1;
  v14 = 50LL;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v10);
    v10 = (ExecutionModel::_ResourceInfo *)((char *)v10 + 24);
    --v14;
  }
  while ( v14 );
  v39[2] = 0LL;
  v39[0] = v39;
  v30 = 0;
  v39[1] = v39;
  v15 = v12;
  memcpy_0(v40, a4, 24 * v12);
  if ( a9 == 1 )
  {
    v17 = 1;
  }
  else
  {
    v16 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
            v13,
            v12,
            (unsigned int)v40,
            a6,
            a5,
            a7,
            (__int64)&v30,
            (__int64)v31,
            (__int64)v39);
    v17 = v30;
    v18 = v16;
    if ( v16 < 0 )
      goto LABEL_13;
    if ( !v31[0] )
    {
LABEL_20:
      v18 = -2147220992;
      goto LABEL_13;
    }
    if ( !v30 )
      goto LABEL_7;
  }
  if ( !a8 )
    goto LABEL_20;
LABEL_7:
  v19 = v32;
  a10[322] = a5;
  a10[2] = a6;
  if ( (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(v19 + 40) < 0 )
  {
    v18 = -2147024882;
  }
  else
  {
    if ( v17 )
    {
      a10[320] = 1;
      if ( (_DWORD)v12 )
      {
        do
        {
          if ( *(_DWORD *)a4 <= 0x31u )
          {
            v20 = 3 * (*(int *)a4 + 3LL);
            *(_OWORD *)&a10[2 * v20] = *(_OWORD *)a4;
            *(_QWORD *)&a10[2 * v20 + 4] = a4[2];
          }
          a4 += 3;
          --v15;
        }
        while ( v15 );
      }
      ExecutionModel::BaseResourceSet::RevokeResourceList(v20, v39);
    }
    else
    {
      ExecutionModel::BaseResourceSet::RecursiveVisit(v19, 1, v12, v40, a10[2], 1, &v30, v31, 0LL, (__int64)a10);
      a10[320] = 2;
    }
    if ( a8 )
      *a8 = v17;
    v18 = 0;
  }
LABEL_13:
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v33 = a7;
    v34 = v17;
    v35 = a6;
    v36 = a5;
    v37 = v12;
    v38 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v21,
      (unsigned int)&unk_1800C5004,
      v22,
      v23,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33);
  }
  if ( v18 < 0 )
  {
    v25 = (_QWORD *)(v32 + 40);
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v32, a10);
    v26 = (_QWORD *)*v25;
    v27 = v32;
    while ( v26 != v25 )
    {
      v28 = (_QWORD *)*v26;
      if ( v26[2] == v27 )
      {
        v29 = (_QWORD *)v26[1];
        *v29 = v28;
        v28[1] = v29;
        ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(v26 + 2);
        operator delete(v26);
        --v25[2];
      }
      v26 = v28;
    }
    ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(&v32);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a10 + 32LL))(a10, 0LL);
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v39);
  return (unsigned int)v18;
}
