/*
 * XREFs of ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140017A70
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140003840 (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectCache@@PEBG@Z @ 0x140017C5C (-GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectC.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140017E1C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObje.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1400180E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjec.c)
 *     ?SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache@@@Z @ 0x14001F428 (-SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDeviceGraphObjectCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140070988 (--1-$com_ptr_t@VCDeviceGraphObjectCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140070B80 (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint(
        CDeviceGraphObjectCacheManager *this,
        const unsigned __int16 *a2,
        struct OBJECTCACHE_INITIALIZATION_PARAMS *a3,
        struct IDeviceGraphObjectCache **a4)
{
  const wchar_t *v7; // rax
  HRESULT v8; // eax
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // edi
  _DWORD *v12; // rcx
  RTL_SRWLOCK *v13; // rdi
  struct IDeviceGraphObjectCache *ObjectCacheForEndpoint_UnderLock; // rax
  int v16; // eax
  unsigned int v17; // ebx
  struct CDeviceGraphObjectCache *v18; // rbx
  int v19; // eax
  int v20; // r15d
  int v21; // eax
  unsigned int v22; // esi
  struct IDeviceGraphObjectCache *v23; // rax
  int v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+20h] [rbp-E0h]
  struct IDeviceGraphObjectCache *v26; // [rsp+30h] [rbp-D0h] BYREF
  struct CDeviceGraphObjectCache *v27; // [rsp+38h] [rbp-C8h] BYREF
  char *v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v29[104]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  *a4 = 0LL;
  v7 = L"1";
  if ( !*((_DWORD *)a3 + 4) )
    v7 = (const wchar_t *)L"0";
  v8 = StringCchPrintfW(v29, 0x64uLL, (size_t *)L"%s%s", a2, v7);
  v11 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v8,
      v24);
    return v11;
  }
  v12 = (_DWORD *)*((_QWORD *)this + 13);
  if ( *v12 > 4u )
  {
    v27 = (struct CDeviceGraphObjectCache *)v29;
    v26 = *(struct IDeviceGraphObjectCache **)a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      (_DWORD)v12,
      (unsigned int)&unk_1400B3ACD,
      v9,
      v10,
      (__int64)&v26,
      (__int64)&v27);
  }
  v13 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockShared((PSRWLOCK)this + 12);
  *a4 = CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock(this, v29);
  if ( this != (CDeviceGraphObjectCacheManager *)-96LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 12);
  if ( *a4 )
    return 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  v28 = (char *)this + 96;
  ObjectCacheForEndpoint_UnderLock = CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock(this, v29);
  *a4 = ObjectCacheForEndpoint_UnderLock;
  if ( ObjectCacheForEndpoint_UnderLock )
  {
LABEL_16:
    if ( v13 )
      ReleaseSRWLockExclusive(v13);
    return 0LL;
  }
  v27 = 0LL;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectCache,CDeviceGraphObjectCache,__int64 &,float &,unsigned int &,_tlgProvider_t const * &>(
          (volatile signed __int64 **)&v27,
          (__int64 *)a3,
          (float *)a3 + 2,
          (unsigned int *)a3 + 3,
          (const struct _tlgProvider_t **)this + 13);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v16,
      v25);
LABEL_21:
    wil::com_ptr_t<CDeviceGraphObjectCache,wil::err_returncode_policy>::~com_ptr_t<CDeviceGraphObjectCache,wil::err_returncode_policy>(&v27);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v28);
    return v17;
  }
  v26 = 0LL;
  v18 = v27;
  v19 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>>(
          v27,
          &GUID_f1be3847_41e2_49da_9192_78fbf3cb400d,
          &v26);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v19,
      v25);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v26);
    v17 = v20;
    goto LABEL_21;
  }
  v21 = CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint(this, v29, v18);
  v22 = v21;
  if ( v21 >= 0 )
  {
    v23 = v26;
    v26 = 0LL;
    *a4 = v23;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v26);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(v18);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x260,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)v21,
    v25);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v26);
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(v18);
  if ( v13 )
    ReleaseSRWLockExclusive(v13);
  return v22;
}
