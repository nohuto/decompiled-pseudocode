/*
 * XREFs of ??1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ @ 0x140072B28
 * Callers:
 *     ??_ECAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAPEAXI@Z @ 0x14006BEF0 (--_ECAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::~CAudioSystemEffectsPropertyChangeNotificationsHandler(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  volatile int *v5; // rdx

  *(_QWORD *)this = &CAudioSystemEffectsPropertyChangeNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAudioSystemEffectsPropertyChangeNotificationsHandler::`vftable'{for `IAudioSystemEffectsPropertyChangeNotificationClient'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( *((_BYTE *)this + 136) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 72LL))(
      *((_QWORD *)this + 18),
      *((_QWORD *)this + 23));
  if ( v2 )
    LeaveCriticalSection(v2);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 23);
  v3 = (_QWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v3 + 1);
      std::_Deallocate<16,0>(v3, 0x10uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 21);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 20);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 19);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 18);
  DeleteCriticalSection(v2);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 11);
  v5 = (volatile int *)*((_QWORD *)this + 10);
  if ( (unsigned __int64)v5 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 7), 2LL * (_QWORD)v5 + 2);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_WORD *)this + 28) = 0;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>(
    (__int64)this,
    v5);
}
