/*
 * XREFs of ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x1400A0510
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140015A0C (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001A794 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x14001AC50 (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x14006BAAC (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14007A980 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessEvent@@@Z @ 0x140095194 (--4-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProce.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14009C9B8 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14009DF4C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x1400A0424 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 *     wil::details::lambda_call__lambda_add5652c2373d1431c22ec933018652d___::_lambda_call__lambda_add5652c2373d1431c22ec933018652d___ @ 0x1400A0470 (wil--details--lambda_call__lambda_add5652c2373d1431c22ec933018652d___--_lambda_call__lambda_add5.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x1400A04AC (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialCrossProcessServerEndpoint::Initialize(
        CSpatialCrossProcessServerEndpoint *this,
        struct SPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS *a2,
        struct ICrossProcessMemory **a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // eax
  void *v21; // rbx
  void **v22; // rax
  void *v23; // rdx
  void *v24; // r14
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *Block; // [rsp+50h] [rbp-30h] BYREF
  char *v33; // [rsp+58h] [rbp-28h] BYREF
  char v34; // [rsp+60h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-18h] BYREF
  char v36; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  void *v38; // [rsp+B0h] [rbp+30h] BYREF
  struct ICrossProcessMemory *v39; // [rsp+C8h] [rbp+48h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 1296);
  v36 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::Initialize", 36, v6, v7);
  v39 = 0LL;
  if ( *((_BYTE *)this - 1232) )
  {
    v8 = -2005139440;
    v9 = 41LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)v8);
    goto LABEL_43;
  }
  if ( !a3 )
  {
    v8 = -2147467261;
    v9 = 44LL;
    goto LABEL_42;
  }
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 45LL;
    goto LABEL_42;
  }
  if ( *(_DWORD *)a2 != 160 )
  {
    v8 = -2147024809;
    v9 = 46LL;
    goto LABEL_42;
  }
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 17);
  *((_DWORD *)this + 24) = IsEqualGUID((const struct _GUID *)a2 + 9, &GUID_9cf2a70b_f377_403b_bd6b_360863e0355c) ? 2 : 4;
  v10 = *((unsigned int *)a2 + 21) * (unsigned __int64)*(unsigned __int16 *)(*((_QWORD *)a2 + 16) + 12LL);
  if ( v10 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    v9 = 57LL;
    goto LABEL_42;
  }
  v11 = (unsigned int)v10;
  v12 = (void *)AERTCreateZoneHeap((unsigned int)v10);
  *((_QWORD *)this - 152) = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    v9 = 60LL;
    goto LABEL_42;
  }
  v33 = (char *)this - 1328;
  v34 = 1;
  v14 = (void *)AE_ALLOCATE_SAFEMULT(v13, v11, v12, AERTZoneAllocate);
  *((_QWORD *)this - 153) = v14;
  if ( !v14 )
  {
    v8 = -2147024882;
    v15 = 2147942414LL;
    v16 = 68LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)v15);
LABEL_15:
    wil::details::lambda_call__lambda_add5652c2373d1431c22ec933018652d___::_lambda_call__lambda_add5652c2373d1431c22ec933018652d___(
      &v33,
      v17,
      v18);
LABEL_43:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v39);
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return v8;
  }
  memset_0(v14, 0, v11);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset((__int64 *)&v39);
  v19 = CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
          (CSpatialCrossProcessServerEndpoint *)((char *)this - 1328),
          *((struct ICrossProcessMemoryManager **)a2 + 14),
          *((struct tWAVEFORMATEX **)a2 + 16),
          *((size_t **)a2 + 11),
          *((_DWORD *)a2 + 21),
          *((_DWORD *)a2 + 2),
          *((_DWORD *)a2 + 5),
          *((_DWORD *)a2 + 6),
          *((_DWORD *)a2 + 7),
          &v39);
  v8 = v19;
  if ( v19 < 0 )
  {
    v15 = (unsigned int)v19;
    v16 = 80LL;
    goto LABEL_14;
  }
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 2);
  v20 = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 18) = v20;
  v21 = 0LL;
  v38 = 0LL;
  if ( v20 )
  {
    v22 = (void **)std::make_unique<unsigned char [0],0>(&Block, v20);
    v23 = 0LL;
    v24 = 0LL;
    if ( &v38 != v22 )
    {
      v21 = *v22;
      v23 = v21;
      *v22 = 0LL;
      v38 = v21;
      v24 = v21;
    }
    if ( Block )
    {
      operator delete[](Block);
      v23 = v24;
    }
    if ( !v23 )
    {
      v8 = -2147024882;
      v25 = 2147942414LL;
      v26 = 89LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        (const char *)v25);
      std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(&v38);
      goto LABEL_15;
    }
    memcpy_0(v21, *((const void **)a2 + 7), *((unsigned int *)this + 18));
  }
  _InterlockedExchange(
    (volatile __int32 *)(*((_QWORD *)this - 4) + 44LL),
    (int)((float)((float)*(int *)(*((_QWORD *)a2 + 16) + 8LL) / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 16) + 12LL))
        * (double)(int)*((_QWORD *)a2 + 9)
        / 10000000.0
        + 0.5));
  v27 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 163) + 24LL))(
          (char *)this - 1304,
          0LL,
          *((unsigned int *)a2 + 16));
  v8 = v27;
  if ( v27 < 0 )
  {
    v25 = (unsigned int)v27;
    v26 = 100LL;
    goto LABEL_25;
  }
  v28 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 163) + 32LL))(
          (char *)this - 1304,
          *((unsigned int *)a2 + 16),
          0LL);
  v8 = v28;
  if ( v28 < 0 )
  {
    v25 = (unsigned int)v28;
    v26 = 102LL;
    goto LABEL_25;
  }
  v29 = *((_QWORD *)a2 + 13);
  if ( v29 )
  {
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 2, v29);
    *((_QWORD *)this + 3) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 4) + 64LL), 0x20u);
  }
  else if ( *((_QWORD *)a2 + 11) )
  {
    v30 = *((_QWORD *)a2 + 12);
    if ( v30 )
    {
      *(_QWORD *)(v30 + 32) = (char *)this + 32;
      *((_DWORD *)this + 11) = *(_DWORD *)(*((_QWORD *)a2 + 12) + 16LL);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=((__int64 *)this - 69, *((_QWORD *)a2 + 15));
  if ( v38 )
    *((_QWORD *)this + 10) = v38;
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>((__int64 *)&v39, a3);
  *((_BYTE *)this - 1232) = 1;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v39);
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
