/*
 * XREFs of ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14007A4C8
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140020EE4 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x14001F710 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x14002116C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140021194 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x140022618 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14002B73C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x140073054 (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x140075104 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents(char *pv)
{
  void *v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rcx
  int v5; // ebx
  void *v6; // rax
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  wil::details *v11; // rcx
  __int64 v12; // r8
  const char *v13; // r9
  HANDLE Event; // r15
  wil::details *v15; // r14
  DWORD LastError; // ebx
  void *v17; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int Error; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, LPCWSTR *); // rdi
  int v25; // eax
  HANDLE FileW; // rax
  const char *v27; // r9
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  LPCWSTR lpFileName; // [rsp+50h] [rbp-B8h] BYREF
  void *v31; // [rsp+58h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v32; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v33[4]; // [rsp+68h] [rbp-A0h] BYREF
  void *v34; // [rsp+78h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v31 = 0LL;
  v2 = (void *)*((_QWORD *)pv + 14);
  v29 = 0LL;
  lpFileName = 0LL;
  v3 = (RTL_SRWLOCK *)(pv + 200);
  AcquireSRWLockExclusive((PSRWLOCK)pv + 25);
  v32 = v3;
  v4 = *((_QWORD *)pv + 24);
  *((_QWORD *)pv + 24) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)pv + 24) = 0LL;
  v5 = 0;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>(
               (__int64)v6,
               v7)) != 0 )
  {
    *((_QWORD *)pv + 24) = v8;
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v5 < 0 )
  {
    v9 = 2208LL;
LABEL_31:
    v20 = (unsigned int)v5;
    goto LABEL_32;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v15 = (wil::details *)*((_QWORD *)pv + 23);
    if ( v15 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v15, v17);
      SetLastError(LastError);
    }
    *((_QWORD *)pv + 23) = Event;
LABEL_13:
    ThreadpoolWait = CreateThreadpoolWait(
                       Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback,
                       pv,
                       0LL);
    *((_QWORD *)pv + 22) = ThreadpoolWait;
    if ( !ThreadpoolWait )
    {
      v9 = 2214LL;
LABEL_30:
      v5 = -2147467259;
      goto LABEL_31;
    }
    SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 23), 0LL);
    if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_28;
    v21 = v29;
    v29 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 13))(
            *((_QWORD *)pv + 13),
            &GUID_3ade56af_4375_4413_9c91_4c652595ab07,
            &v29);
    v5 = v22;
    if ( v22 < 0 )
    {
      v20 = (unsigned int)v22;
      v9 = 2223LL;
      goto LABEL_32;
    }
    v23 = v29;
    v24 = *(__int64 (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v29 + 32LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpFileName,
      0LL);
    v25 = v24(v23, &lpFileName);
    v5 = v25;
    if ( v25 < 0 )
    {
      v20 = (unsigned int)v25;
      v9 = 2226LL;
      goto LABEL_32;
    }
    FileW = CreateFileW(lpFileName, 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v31,
      FileW);
    v2 = v31;
    if ( v31 )
    {
      if ( v31 != (void *)-1LL )
      {
LABEL_28:
        memset_0(v33, 0, 0x1A0uLL);
        v33[0] = 416;
        v33[2] = 1;
        v34 = v2;
        wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
          (__int64 *)pv + 18,
          0LL);
        if ( !(unsigned int)CM_Register_Notification(
                              v33,
                              pv,
                              Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback,
                              pv + 144) )
        {
          v5 = 0;
          goto LABEL_34;
        }
        v9 = 2254LL;
        goto LABEL_30;
      }
    }
    v5 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x8C2,
           (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
           v27);
    goto LABEL_34;
  }
  wil::details::GetLastErrorFailHr(v11, v10, v12, v13);
  if ( *((_QWORD *)pv + 23) )
    goto LABEL_13;
  Error = ATL::AtlHresultFromLastError();
  v5 = Error;
  if ( Error < 0 )
  {
    v20 = (unsigned int)Error;
    v9 = 2211LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v20);
  }
LABEL_34:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v32);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpFileName);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v31);
  return (unsigned int)v5;
}
