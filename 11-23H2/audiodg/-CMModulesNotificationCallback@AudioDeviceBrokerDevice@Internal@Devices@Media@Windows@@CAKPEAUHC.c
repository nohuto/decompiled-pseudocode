/*
 * XREFs of ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140082270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x14007BDDC (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140082E10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // r9
  int v10; // r8d
  int (__fastcall *v11)(__int64, __int64 *); // rsi
  void *v12; // rdx
  RTL_SRWLOCK *v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  if ( a2 && *(_QWORD *)(a2 + 144) == a1 )
  {
    v7 = a3 - 1;
    if ( v7 && (v8 = v7 - 1) != 0 )
    {
      if ( v8 == 4 )
      {
        v16[0] = 0LL;
        v15 = 0LL;
        v16[1] = 0LL;
        if ( a5 >= 0x24 && *(_DWORD *)a4 == 1 )
        {
          if ( *(_DWORD *)(a4 + 28) )
          {
            if ( IsEqualGUID((const struct _GUID *)(a4 + 8), &GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2)
              && *(_DWORD *)(v9 + 28) >= 0x28u
              && IsEqualGUID((const struct _GUID *)(v9 + 32), (const struct _GUID *)(a2 + 120)) )
            {
              v16[0] = 0LL;
              v18 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                &hstringHeader,
                L"Windows.Storage.Streams.DataWriter",
                v10 + 31,
                v10 + 30);
              if ( (int)Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v18, v16) >= 0 )
              {
                if ( v16[0] )
                {
                  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16[0] + 96LL))(
                         v16[0],
                         *(unsigned int *)(a4 + 28),
                         a4 + 32) >= 0 )
                  {
                    v11 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16[0] + 248LL);
                    v15 = 0LL;
                    if ( v11(v16[0], &v15) >= 0
                      && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 192) + 104LL))(
                           *(_QWORD *)(a2 + 192),
                           v15) >= 0 )
                    {
                      wil::details::SetEvent(*(wil::details **)(a2 + 184), v12);
                    }
                  }
                }
              }
            }
          }
        }
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v15);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v16);
      }
    }
    else
    {
      v13 = (RTL_SRWLOCK *)(a2 + 200);
      AcquireSRWLockExclusive((PSRWLOCK)(a2 + 200));
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)(a2 + 112),
        0LL);
      *(_BYTE *)(a2 + 208) = 1;
      if ( v13 )
        ReleaseSRWLockExclusive(v13);
    }
  }
  return 0LL;
}
