/*
 * XREFs of ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140006FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache@@@Z @ 0x140006C58 (-SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache.c)
 *     ?GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectCache@@PEBG@Z @ 0x140007248 (-GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140007380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjec.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140011F94 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObje.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014AC8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140020B80 (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct OBJECTCACHE_INITIALIZATION_PARAMS *a3,
        struct IDeviceGraphObjectCache **a4)
{
  const wchar_t *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  _QWORD *Ptr; // rcx
  __int64 v11; // rax
  struct IDeviceGraphObjectCache *ObjectCacheForEndpoint_UnderLock; // rax
  int v14; // eax
  struct CDeviceGraphObjectCache *v15; // rbx
  int v16; // eax
  struct CDeviceGraphObjectCache *v17; // rax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+20h] [rbp-E0h]
  struct CDeviceGraphObjectCache *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+5Ch] [rbp-A4h]
  void *v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+6Ch] [rbp-94h]
  __int64 *v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+8Ch] [rbp-74h]
  unsigned __int16 v36[104]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *a4 = 0LL;
  v7 = L"1";
  if ( !*((_DWORD *)a3 + 4) )
    v7 = (const wchar_t *)L"0";
  v8 = StringCchPrintfW(v36, 0x64uLL, L"%s%s", a2, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v8,
      v19);
  }
  else
  {
    Ptr = this[13].Ptr;
    if ( *(_DWORD *)Ptr > 4u )
    {
      v22 = *(_QWORD *)a3;
      v11 = -1LL;
      do
        ++v11;
      while ( v36[v11] );
      v33 = v36;
      v34 = 2 * v11 + 2;
      v35 = 0;
      v31 = &v22;
      v32 = 8LL;
      v23[0] = 184549376;
      v23[1] = 4;
      v24 = 0LL;
      v25 = (unsigned __int16 *)Ptr[1];
      v26 = *v25;
      v27 = 2;
      v28 = &unk_1400A6DFB;
      v29 = 55;
      v30 = 1;
      ((void (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int, __int64))EtwEventWriteTransfer)(
        Ptr[4],
        v23,
        0LL,
        0LL,
        4,
        &v25,
        (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata,
        v22);
    }
    AcquireSRWLockShared(this + 12);
    *a4 = CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock(
            (CDeviceGraphObjectCacheManager *)this,
            v36);
    if ( this != (RTL_SRWLOCK *)-96LL )
      ReleaseSRWLockShared(this + 12);
    if ( *a4 )
      return 0LL;
    AcquireSRWLockExclusive(this + 12);
    ObjectCacheForEndpoint_UnderLock = CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock(
                                         (CDeviceGraphObjectCacheManager *)this,
                                         v36);
    *a4 = ObjectCacheForEndpoint_UnderLock;
    if ( ObjectCacheForEndpoint_UnderLock )
    {
LABEL_18:
      if ( this != (RTL_SRWLOCK *)-96LL )
        ReleaseSRWLockExclusive(this + 12);
      return 0LL;
    }
    v21 = 0LL;
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectCache,CDeviceGraphObjectCache,__int64 &,float &,unsigned int &,_tlgProvider_t const * &>(
            (unsigned int)&v21,
            (_DWORD)a3,
            (int)a3 + 8,
            (int)a3 + 12,
            (__int64)&this[13]);
    v9 = v14;
    v15 = v21;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)(unsigned int)v14,
        v20);
    }
    else
    {
      v21 = 0LL;
      v16 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>>(
              v15,
              &GUID_f1be3847_41e2_49da_9192_78fbf3cb400d,
              &v21);
      v9 = v16;
      if ( v16 < 0 )
      {
        v18 = 607LL;
      }
      else
      {
        v16 = CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint(
                (CDeviceGraphObjectCacheManager *)this,
                v36,
                v15);
        v9 = v16;
        if ( v16 >= 0 )
        {
          v17 = v21;
          v21 = 0LL;
          *a4 = v17;
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
          if ( v15 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(v15);
          goto LABEL_18;
        }
        v18 = 608LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)(unsigned int)v16,
        v20);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
    }
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(v15);
    if ( this != (RTL_SRWLOCK *)-96LL )
      ReleaseSRWLockExclusive(this + 12);
  }
  return v9;
}
