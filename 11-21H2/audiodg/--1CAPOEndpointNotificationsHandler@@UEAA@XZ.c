/*
 * XREFs of ??1CAPOEndpointNotificationsHandler@@UEAA@XZ @ 0x140069364
 * Callers:
 *     ??_GCAPOEndpointNotificationsHandler@@UEAAPEAXI@Z @ 0x1400650C0 (--_GCAPOEndpointNotificationsHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAPOEndpointNotificationsHandler::~CAPOEndpointNotificationsHandler(
        CAPOEndpointNotificationsHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAPOEndpointNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAPOEndpointNotificationsHandler::`vftable'{for `IAudioEndpointVolumeCallback'};
  *((_QWORD *)this + 2) = &CAPOEndpointNotificationsHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v8 = v2;
  if ( *((_BYTE *)this + 168) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 32LL))(
      *((_QWORD *)this + 22),
      *((_QWORD *)this + 26));
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 26);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 25);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 24);
  v3 = (_QWORD *)*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
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
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 22);
  DeleteCriticalSection(v2);
  v5 = (_QWORD *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v5 + 1);
      std::_Deallocate<16,0>(v5, 0x10uLL);
      v5 = v6;
    }
    while ( v6 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 9);
  v7 = *((_QWORD *)this + 8);
  if ( v7 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 5), 2 * v7 + 2);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 7LL;
  *((_WORD *)this + 20) = 0;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
}
