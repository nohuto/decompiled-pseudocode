/*
 * XREFs of ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140075130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x14002116C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x14006F19C (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140075CD0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  RTL_SRWLOCK *v9; // rbx
  int (__fastcall *v10)(RTL_SRWLOCK *, __int64 *); // rsi
  __int64 v11; // rcx
  void *v12; // rdx
  RTL_SRWLOCK *v13; // rbx
  RTL_SRWLOCK *v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  if ( a2 && *(_QWORD *)(a2 + 144) == a1 && a3 > 0 )
  {
    if ( a3 <= 2 )
    {
      v13 = (RTL_SRWLOCK *)(a2 + 200);
      AcquireSRWLockExclusive((PSRWLOCK)(a2 + 200));
      v15 = v13;
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)(a2 + 112),
        0LL);
      *(_BYTE *)(a2 + 208) = 1;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    }
    else if ( a3 == 6 )
    {
      v15 = 0LL;
      v16[0] = 0LL;
      v16[1] = 0LL;
      if ( a5 >= 0x24 && *(_DWORD *)a4 == 1 && *(_DWORD *)(a4 + 28) )
      {
        v7 = *(_QWORD *)(a4 + 8) - *(_QWORD *)&GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2.Data1;
        if ( !v7 )
          v7 = *(_QWORD *)(a4 + 16) - *(_QWORD *)GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2.Data4;
        if ( !v7 && *(_DWORD *)(a4 + 28) >= 0x28u )
        {
          v8 = *(_QWORD *)(a4 + 32) - *(_QWORD *)(a2 + 120);
          if ( !v8 )
            v8 = *(_QWORD *)(a4 + 40) - *(_QWORD *)(a2 + 128);
          if ( !v8 )
          {
            v15 = 0LL;
            v18 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.Storage.Streams.DataWriter",
              0x23u,
              0x22u);
            if ( (int)Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v18, &v15) >= 0
              && v15
              && (*((int (__fastcall **)(RTL_SRWLOCK *, _QWORD, __int64))v15->Ptr + 12))(
                   v15,
                   *(unsigned int *)(a4 + 28),
                   a4 + 32) >= 0 )
            {
              v9 = v15;
              v10 = (int (__fastcall *)(RTL_SRWLOCK *, __int64 *))*((_QWORD *)v15->Ptr + 31);
              v11 = v16[0];
              v16[0] = 0LL;
              if ( v11 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
              if ( v10(v9, v16) >= 0
                && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 192) + 104LL))(
                     *(_QWORD *)(a2 + 192),
                     v16[0]) >= 0 )
              {
                wil::details::SetEvent(*(wil::details **)(a2 + 184), v12);
              }
            }
          }
        }
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v16);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v15);
    }
  }
  return 0LL;
}
