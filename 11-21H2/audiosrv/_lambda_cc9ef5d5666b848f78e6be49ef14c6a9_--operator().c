/*
 * XREFs of _lambda_cc9ef5d5666b848f78e6be49ef14c6a9_::operator() @ 0x180153314
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_cc9ef5d5666b848f78e6be49ef14c6a9___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::Invoke @ 0x180154D40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180154D40.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x180156600 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_cc9ef5d5666b848f78e6be49ef14c6a9_::operator()(_QWORD *a1)
{
  _BYTE *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-30h] BYREF

  if ( *a1 )
  {
    v4 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v4) >= 0 && v4 )
    {
      if ( (unsigned int)dword_1801C02B0 > 5 )
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801C02B0,
          (unsigned __int8 *)dword_18018F455,
          0LL,
          0LL,
          2u,
          &v5);
      v2 = (_BYTE *)a1[1];
      v2[264] = 1;
      AtmosCheck::ScheduleGracePeriodTimer(v2);
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v4);
  }
  return 0LL;
}
