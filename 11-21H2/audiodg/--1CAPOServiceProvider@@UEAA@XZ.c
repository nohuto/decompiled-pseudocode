/*
 * XREFs of ??1CAPOServiceProvider@@UEAA@XZ @ 0x140067404
 * Callers:
 *     ??_ECAPOServiceProvider@@UEAAPEAXI@Z @ 0x1400674E0 (--_ECAPOServiceProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z @ 0x14006C88C (-UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z.c)
 */

void __fastcall CAPOServiceProvider::~CAPOServiceProvider(CAPOServiceProvider *this)
{
  bool v1; // zf
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CRTThreadManager *v4; // rcx
  HRESULT v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 24) == 0;
  *(_QWORD *)this = &CAPOServiceProvider::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  *((_QWORD *)this + 1) = &CAPOServiceProvider::`vftable'{for `IAudioProcessingObjectLoggingService'};
  *((_QWORD *)this + 2) = &CAPOServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectRTQueueService>'};
  if ( !v1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v4 = (CRTThreadManager *)*((_QWORD *)this + 11);
    v8 = v2;
    if ( v4 )
    {
      v5 = CRTThreadManager::UnlockMmcssWorkQueue(v4, *((_DWORD *)this + 24));
      if ( v5 < 0 )
      {
        v6 = 149LL;
LABEL_7:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v6,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
          (const char *)(unsigned int)v5);
      }
    }
    else
    {
      v5 = RtwqUnlockWorkQueue(*((_DWORD *)this + 24));
      if ( v5 < 0 )
      {
        v6 = 153LL;
        goto LABEL_7;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 11);
  DeleteCriticalSection(v2);
  *((_DWORD *)this + 7) = -1073741823;
}
