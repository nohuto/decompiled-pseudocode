/*
 * XREFs of ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400089B0
 * Callers:
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x1400066F0 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140006B60 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140008868 (-ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x1400088E4 (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?AddHead@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCSubmixImpl@@@Z @ 0x140009C64 (-AddHead@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009D48 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B748 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140025F08 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSubmixImpl::Initialize(CSubmixImpl *this, struct SUBMIX_DESCRIPTOR *a2)
{
  int v4; // ebx
  unsigned __int16 **v5; // r12
  const unsigned __int16 *v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int16 *v9; // rax
  void *v10; // rax
  void *v11; // rcx
  void **v12; // rbx
  void *v13; // rax
  void *v14; // rcx
  int DeviceGraphObjectCacheManager; // eax
  CSubmixImpl *v16; // rbx
  void (__fastcall *v17)(CSubmixImpl *, _QWORD); // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  struct IDeviceGraphObjectCacheManager *v21; // rbx
  __int64 (__fastcall *v22)(struct IDeviceGraphObjectCacheManager *, _QWORD, void ***, char *); // rdi
  __int64 v23; // rcx
  CPipeInstance **v24; // rdi
  __int64 v25; // rcx
  __int64 v27; // rdx
  void *v28; // rcx
  __int64 v29; // rdx
  unsigned __int16 **v30; // [rsp+20h] [rbp-88h]
  unsigned __int64 *v31; // [rsp+28h] [rbp-80h]
  unsigned int v32; // [rsp+30h] [rbp-78h]
  struct IDeviceGraphObjectCacheManager *v33; // [rsp+40h] [rbp-68h] BYREF
  CSubmixImpl *v34; // [rsp+48h] [rbp-60h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+50h] [rbp-58h] BYREF
  void **v36; // [rsp+60h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v37; // [rsp+68h] [rbp-40h] BYREF
  int v38; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = ValidateSubmixDescriptor(a2);
  if ( v4 < 0 )
  {
    v27 = 423LL;
    goto LABEL_44;
  }
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 7);
  *((_OWORD *)this + 15) = *(_OWORD *)((char *)a2 + 68);
  *((_DWORD *)this + 64) = *(_DWORD *)a2;
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 12);
  *((_BYTE *)this + 313) = *((_BYTE *)a2 + 13);
  v5 = (unsigned __int16 **)((char *)this + 8);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 8,
    0LL);
  v6 = (const unsigned __int16 *)*((_QWORD *)a2 + 4);
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  *v5 = 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 || !is_mul_ok(v8, 2uLL) )
  {
    v4 = -2147024362;
    goto LABEL_43;
  }
  v9 = (unsigned __int16 *)CoTaskMemAlloc(2 * v8);
  *v5 = v9;
  if ( !v9 )
  {
    v4 = -2147024882;
LABEL_43:
    v27 = 431LL;
    goto LABEL_44;
  }
  StringCchCopyNExW(v9, v7 + 1, v6, v7, v30, v31, v32);
  v10 = CoTaskMemAlloc(*((unsigned int *)a2 + 10));
  v11 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v10;
  if ( v11 )
  {
    CoTaskMemFree(v11);
    v10 = (void *)*((_QWORD *)this + 27);
  }
  if ( !v10 )
  {
    v4 = -2147024882;
    v27 = 434LL;
    goto LABEL_44;
  }
  memcpy_0(v10, *((const void **)a2 + 6), *((unsigned int *)a2 + 10));
  v12 = (void **)((char *)this + 224);
  if ( *((_DWORD *)a2 + 4) )
  {
    v13 = CoTaskMemAlloc(*((unsigned int *)a2 + 4));
    v14 = *v12;
    *v12 = v13;
    if ( v14 )
    {
      CoTaskMemFree(v14);
      v13 = (void *)*((_QWORD *)this + 28);
    }
    if ( v13 )
    {
      memcpy_0(v13, *((const void **)a2 + 3), *((unsigned int *)a2 + 4));
      goto LABEL_15;
    }
    v4 = -2147024882;
    v27 = 440LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4,
      (int)v30);
    return (unsigned int)v4;
  }
  v36 = (void **)((char *)this + 224);
  v37 = 0LL;
  LOBYTE(v38) = 1;
  v4 = CloneWaveFormat(*((const struct tWAVEFORMATEX **)this + 27), &v37);
  if ( (_BYTE)v38 )
  {
    v28 = *v36;
    *v36 = v37;
    if ( v28 )
      CoTaskMemFree(v28);
  }
  if ( v4 < 0 )
  {
    v27 = 446LL;
    goto LABEL_44;
  }
LABEL_15:
  if ( !*((_BYTE *)this + 313) )
  {
    v33 = 0LL;
    DeviceGraphObjectCacheManager = GetDeviceGraphObjectCacheManager(&v33);
    v4 = DeviceGraphObjectCacheManager;
    if ( DeviceGraphObjectCacheManager < 0 )
    {
      v29 = 453LL;
    }
    else
    {
      v34 = 0LL;
      (**(void (__fastcall ***)(struct IDeviceGraphObjectCacheManager *, GUID *, CSubmixImpl **))v33)(
        v33,
        &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
        &v34);
      v16 = v34;
      v17 = *(void (__fastcall **)(CSubmixImpl *, _QWORD))(*(_QWORD *)v34 + 24LL);
      v19 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
              v18,
              _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v17(v16, *(_QWORD *)(v19 + 8));
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
      v36 = (void **)*((_QWORD *)a2 + 7);
      v20 = *((_QWORD *)this + 27);
      *(float *)&v37 = (float)*(int *)(v20 + 4);
      HIDWORD(v37) = *(unsigned __int16 *)(v20 + 2);
      v38 = *((unsigned __int8 *)a2 + 12);
      v21 = v33;
      v22 = *(__int64 (__fastcall **)(struct IDeviceGraphObjectCacheManager *, _QWORD, void ***, char *))(*(_QWORD *)v33 + 24LL);
      v23 = *((_QWORD *)this + 33);
      *((_QWORD *)this + 33) = 0LL;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      DeviceGraphObjectCacheManager = v22(v21, *((_QWORD *)a2 + 4), &v36, (char *)this + 264);
      v4 = DeviceGraphObjectCacheManager;
      if ( DeviceGraphObjectCacheManager < 0 )
      {
        v29 = 467LL;
      }
      else
      {
        if ( !*((_BYTE *)a2 + 84) )
        {
LABEL_24:
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
          goto LABEL_25;
        }
        v24 = (CPipeInstance **)((char *)this + 24);
        DeviceGraphObjectCacheManager = CPipeInstance::CreateSubmixPipeInstance(
                                          *((struct IDeviceGraphObjectCache **)this + 33),
                                          a2,
                                          (struct CPipeInstance **)this + 3);
        v4 = DeviceGraphObjectCacheManager;
        if ( DeviceGraphObjectCacheManager < 0 )
        {
          v29 = 473LL;
        }
        else
        {
          DeviceGraphObjectCacheManager = CPipeInstance::Initialize(*v24);
          v4 = DeviceGraphObjectCacheManager;
          if ( DeviceGraphObjectCacheManager < 0 )
          {
            v29 = 474LL;
          }
          else
          {
            DeviceGraphObjectCacheManager = CPipeInstance::ConnectAPOs(*v24, 0LL);
            v4 = DeviceGraphObjectCacheManager;
            if ( DeviceGraphObjectCacheManager >= 0 )
              goto LABEL_24;
            v29 = 475LL;
          }
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCacheManager,
      (int)v30);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
    return (unsigned int)v4;
  }
LABEL_25:
  EnterCriticalSection(&g_CritSecSubmixList);
  v35 = &g_CritSecSubmixList;
  v34 = this;
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::AddHead(v25, &v34);
  v4 = 0;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v35);
  return (unsigned int)v4;
}
