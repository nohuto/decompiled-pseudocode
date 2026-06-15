/*
 * XREFs of ??1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ @ 0x14006A5C8
 * Callers:
 *     ??_ECAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAPEAXI@Z @ 0x140065140 (--_ECAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::~CAudioSystemEffectsPropertyChangeNotificationsHandler(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rdx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioSystemEffectsPropertyChangeNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAudioSystemEffectsPropertyChangeNotificationsHandler::`vftable'{for `IAudioSystemEffectsPropertyChangeNotificationClient'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v6 = v2;
  if ( *((_BYTE *)this + 136) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 72LL))(
      *((_QWORD *)this + 18),
      *((_QWORD *)this + 23));
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v6);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 23);
  v3 = (_QWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v3 + 1);
      std::_Deallocate<16,0>(v3, 0x10uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 21);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 20);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 19);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 18);
  DeleteCriticalSection(v2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 11);
  v5 = *((_QWORD *)this + 10);
  if ( v5 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 7), 2 * v5 + 2);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_WORD *)this + 28) = 0;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
}
