/*
 * XREFs of _lambda_aaa9b3e3e77bc6900f26072d6eeeed96_::operator() @ 0x18015A614
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_aaa9b3e3e77bc6900f26072d6eeeed96___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::Invoke @ 0x18015BDD0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18015BDD0.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x18015D5F0 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_aaa9b3e3e77bc6900f26072d6eeeed96_::operator()(_QWORD *a1)
{
  _BYTE *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-30h] BYREF

  if ( *a1 )
  {
    v4 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v4) >= 0 && v4 )
    {
      if ( (unsigned int)dword_1801CD2B8 > 5 )
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801CD2B8,
          (unsigned __int8 *)dword_180198BD4,
          0LL,
          0LL,
          2u,
          &v5);
      v2 = (_BYTE *)a1[1];
      v2[264] = 1;
      AtmosCheck::ScheduleGracePeriodTimer(v2);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v4);
  }
  return 0LL;
}
