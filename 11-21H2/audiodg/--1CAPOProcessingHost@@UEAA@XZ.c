/*
 * XREFs of ??1CAPOProcessingHost@@UEAA@XZ @ 0x140064DF8
 * Callers:
 *     ??_GCAPOProcessingHost@@UEAAPEAXI@Z @ 0x140065100 (--_GCAPOProcessingHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x140064648 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1400646CC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUIAudioProcessingObject@@V-$com_ptr_t@VC.c)
 */

void __fastcall CAPOProcessingHost::~CAPOProcessingHost(CAPOProcessingHost *this)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CAPOProcessingHost::`vftable'{for `IAPOProcessingHost'};
  *((_QWORD *)this + 1) = &CAPOProcessingHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMMNotificationClient>'};
  if ( *((_BYTE *)this + 72) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
  v2 = (_QWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v2 + 1);
      std::_Deallocate<16,0>(v2, 0x10uLL);
      v2 = v3;
    }
    while ( v3 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  std::_Deallocate<16,0>(
    *((void **)this + 26),
    (*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>(
    v4,
    *((_QWORD ***)this + 24));
  std::_Deallocate<16,0>(*((void **)this + 24), 0x20uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  std::_Deallocate<16,0>(
    *((void **)this + 13),
    (*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>,void *>>>(
    v5,
    *((_QWORD *)this + 11));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x38uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
