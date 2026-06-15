/*
 * XREFs of ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140087608
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001C7D0 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14001C758 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001DEC4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14004B464 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1400503F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1400584F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x14007FC90 (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x140082244 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x14008E504 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents(RTL_SRWLOCK *pv)
{
  char *v2; // rbx
  PVOID Ptr; // r15
  RTL_SRWLOCK *v4; // r14
  PVOID v5; // rcx
  int LastError; // edi
  void *v7; // rax
  char v8; // dl
  __int64 v9; // rax
  __int64 v10; // rdx
  HANDLE *p_Ptr; // rdi
  __int64 v12; // rdx
  wil::details *v13; // rcx
  __int64 v14; // r8
  const char *v15; // r9
  wil::details *Event; // r12
  signed int Error; // eax
  unsigned __int64 v18; // r9
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, LPCWSTR *); // rdi
  int v24; // eax
  HANDLE FileW; // rax
  const char *v26; // r9
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  LPCWSTR lpFileName; // [rsp+48h] [rbp-B8h] BYREF
  char *v30; // [rsp+50h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v31; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v32[4]; // [rsp+60h] [rbp-A0h] BYREF
  void *v33; // [rsp+70h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v2 = 0LL;
  v30 = 0LL;
  Ptr = pv[14].Ptr;
  v28 = 0LL;
  lpFileName = 0LL;
  v4 = pv + 25;
  AcquireSRWLockExclusive(pv + 25);
  v31 = v4;
  v5 = pv[24].Ptr;
  pv[24].Ptr = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  pv[24].Ptr = 0LL;
  LastError = 0;
  v7 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7
    && (v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>(
               (__int64)v7,
               v8)) != 0 )
  {
    pv[24].Ptr = (PVOID)v9;
  }
  else
  {
    LastError = -2147024882;
  }
  if ( LastError < 0 )
  {
    v10 = 2129LL;
LABEL_30:
    v18 = (unsigned int)LastError;
    goto LABEL_31;
  }
  p_Ptr = &pv[23].Ptr;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)&pv[23],
      Event);
  }
  else
  {
    wil::details::GetLastErrorFailHr(v13, v12, v14, v15);
  }
  if ( !*p_Ptr )
  {
    Error = ATL::AtlHresultFromLastError();
    LastError = Error;
    if ( Error < 0 )
    {
      v18 = (unsigned int)Error;
      v10 = 2132LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)v18);
    }
LABEL_32:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v31);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpFileName);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v28);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)&v30);
    return (unsigned int)LastError;
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback,
                     pv,
                     0LL);
  pv[22].Ptr = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v10 = 2135LL;
LABEL_29:
    LastError = -2147467259;
    goto LABEL_30;
  }
  SetThreadpoolWait(ThreadpoolWait, *p_Ptr, 0LL);
  if ( (((unsigned __int64)Ptr + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v20 = v28;
    v28 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v21 = (**(__int64 (__fastcall ***)(PVOID, GUID *, __int64 *))pv[13].Ptr)(
            pv[13].Ptr,
            &GUID_3ade56af_4375_4413_9c91_4c652595ab07,
            &v28);
    LastError = v21;
    if ( v21 < 0 )
    {
      v18 = (unsigned int)v21;
      v10 = 2144LL;
      goto LABEL_31;
    }
    v22 = v28;
    v23 = *(__int64 (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v28 + 32LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpFileName,
      0LL);
    v24 = v23(v22, &lpFileName);
    LastError = v24;
    if ( v24 < 0 )
    {
      v18 = (unsigned int)v24;
      v10 = 2147LL;
      goto LABEL_31;
    }
    FileW = CreateFileW(lpFileName, 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)&v30,
      FileW);
    v2 = v30;
    Ptr = v30;
    if ( !v30 || v30 == (char *)-1LL )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x873,
                    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
                    v26);
      goto LABEL_32;
    }
  }
  memset_0(v32, 0, 0x1A0uLL);
  v32[0] = 416;
  v32[2] = 1;
  v33 = Ptr;
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    &pv[18],
    0LL);
  if ( (unsigned int)CM_Register_Notification(
                       v32,
                       pv,
                       Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback,
                       &pv[18]) )
  {
    v10 = 2175LL;
    goto LABEL_29;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( lpFileName )
    CoTaskMemFree((LPVOID)lpFileName);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v28);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  return 0LL;
}
