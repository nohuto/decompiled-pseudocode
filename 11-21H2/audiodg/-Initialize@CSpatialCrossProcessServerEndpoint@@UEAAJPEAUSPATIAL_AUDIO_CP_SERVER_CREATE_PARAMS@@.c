/*
 * XREFs of ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140094BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x14001F108 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x14001F18C (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001F1C8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140021C74 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     memcmp_0 @ 0x140031D33 (memcmp_0.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessEvent@@@Z @ 0x140088170 (--4-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProce.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x1400907D8 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x1400922C8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x140094B30 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x140094B7C (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialCrossProcessServerEndpoint::Initialize(
        CSpatialCrossProcessServerEndpoint *this,
        struct SPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS *a2,
        struct ICrossProcessMemory **a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  void *v12; // rax
  __int64 v13; // rcx
  char *v14; // rbx
  char v15; // r12
  void *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  unsigned int v22; // eax
  void *v23; // r15
  char *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rcx
  char v32; // [rsp+50h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-18h] BYREF
  char v34; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  struct ICrossProcessMemory *v36; // [rsp+B0h] [rbp+40h] BYREF
  void *Block; // [rsp+C8h] [rbp+58h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 1296);
  v34 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::Initialize", 36, v6, v7);
  v36 = 0LL;
  if ( *((_BYTE *)this - 1232) )
  {
    v8 = -2005139440;
    v9 = 41LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)v8);
    goto LABEL_46;
  }
  if ( !a3 )
  {
    v8 = -2147467261;
    v9 = 44LL;
    goto LABEL_45;
  }
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 45LL;
    goto LABEL_45;
  }
  if ( *(_DWORD *)a2 != 160 )
  {
    v8 = -2147024809;
    v9 = 46LL;
    goto LABEL_45;
  }
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 17);
  *((_DWORD *)this + 24) = memcmp_0((char *)a2 + 144, &GUID_9cf2a70b_f377_403b_bd6b_360863e0355c, 0x10uLL) != 0 ? 4 : 2;
  v10 = *((unsigned int *)a2 + 21) * (unsigned __int64)*(unsigned __int16 *)(*((_QWORD *)a2 + 16) + 12LL);
  if ( v10 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    v9 = 57LL;
    goto LABEL_45;
  }
  v11 = (unsigned int)v10;
  v12 = (void *)AERTCreateZoneHeap((unsigned int)v10);
  *((_QWORD *)this - 152) = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    v9 = 60LL;
    goto LABEL_45;
  }
  v14 = (char *)this - 1328;
  v15 = 1;
  v16 = (void *)AE_ALLOCATE_SAFEMULT(v13, v11, v12, AERTZoneAllocate);
  *((_QWORD *)this - 153) = v16;
  if ( v16 )
  {
    memset_0(v16, 0, v11);
    wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v36);
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
            &v36);
    v8 = v19;
    if ( v19 < 0 )
    {
      v17 = (unsigned int)v19;
      v18 = 80LL;
      goto LABEL_16;
    }
    *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 2);
    v22 = *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 18) = v22;
    v23 = 0LL;
    if ( v22 )
    {
      v24 = (char *)std::make_unique<unsigned char [0],0>(&Block, v22);
      if ( &v32 != v24 )
      {
        v23 = *(void **)v24;
        *(_QWORD *)v24 = 0LL;
      }
      if ( Block )
        operator delete[](Block);
      if ( !v23 )
      {
        v8 = -2147024882;
        v25 = 2147942414LL;
        v26 = 89LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
          (const char *)v25);
        v15 = 1;
        if ( v23 )
          operator delete[](v23);
        goto LABEL_40;
      }
      memcpy_0(v23, *((const void **)a2 + 7), *((unsigned int *)this + 18));
    }
    _InterlockedExchange(
      (volatile __int32 *)(*((_QWORD *)this - 4) + 44LL),
      (int)((float)((float)*(int *)(*((_QWORD *)a2 + 16) + 8LL)
                  / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 16) + 12LL))
          * (double)(int)*((_QWORD *)a2 + 9)
          / 10000000.0
          + 0.5));
    v27 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 163) + 24LL))(
            (char *)this - 1304,
            0LL,
            *((unsigned int *)a2 + 16));
    v8 = v27;
    if ( v27 >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 163) + 32LL))(
              (char *)this - 1304,
              *((unsigned int *)a2 + 16),
              0LL);
      v8 = v27;
      if ( v27 >= 0 )
      {
        v28 = *((_QWORD *)a2 + 13);
        if ( v28 )
        {
          wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 2, v28);
          *((_QWORD *)this + 3) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 4) + 64LL), 0x20u);
        }
        else if ( *((_QWORD *)a2 + 11) )
        {
          v29 = *((_QWORD *)a2 + 12);
          if ( v29 )
          {
            *(_QWORD *)(v29 + 32) = (char *)this + 32;
            *((_DWORD *)this + 11) = *(_DWORD *)(*((_QWORD *)a2 + 12) + 16LL);
          }
        }
        Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=(
          (__int64 *)this - 69,
          *((_QWORD *)a2 + 15));
        v15 = 0;
        if ( v23 )
          *((_QWORD *)this + 10) = v23;
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(
          (__int64 *)&v36,
          a3);
        *((_BYTE *)this - 1232) = 1;
        v8 = 0;
        goto LABEL_40;
      }
      v26 = 102LL;
    }
    else
    {
      v26 = 100LL;
    }
    v25 = (unsigned int)v27;
    goto LABEL_30;
  }
  v8 = -2147024882;
  v17 = 2147942414LL;
  v18 = 68LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
    (const char *)v17);
LABEL_40:
  if ( v15 )
  {
    v30 = (void *)*((_QWORD *)v14 + 14);
    if ( v30 )
    {
      AERTDestroyZoneHeap(v30, v20, v21);
      *((_QWORD *)v14 + 14) = 0LL;
    }
  }
LABEL_46:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v36);
  if ( v34 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
