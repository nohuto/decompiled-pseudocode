/*
 * XREFs of ??1CAPOProcessingHost@@UEAA@XZ @ 0x14006BBB4
 * Callers:
 *     ??_GCAPOProcessingHost@@UEAAPEAXI@Z @ 0x14006BF00 (--_GCAPOProcessingHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x14006AAAC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x14006AB30 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUIAudioProcessingObject@@V-$com_ptr_t@VC.c)
 */

void __fastcall CAPOProcessingHost::~CAPOProcessingHost(CAPOProcessingHost *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CAPOProcessingHost::`vftable'{for `IAPOProcessingHost'};
  *((_QWORD *)this + 1) = &CAPOProcessingHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMMNotificationClient>'};
  if ( *((_BYTE *)this + 72) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
  std::_Deallocate<16,0>(
    *((void **)this + 47),
    (*((_QWORD *)this + 48) - *((_QWORD *)this + 47)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>,void *>>>(
    v2,
    *((_QWORD *)this + 45));
  std::_Deallocate<16,0>(*((void **)this + 45), 0x38uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 37);
  v3 = (_QWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
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
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  std::_Deallocate<16,0>(
    *((void **)this + 26),
    (*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>(
    v5,
    *((_QWORD ***)this + 24));
  std::_Deallocate<16,0>(*((void **)this + 24), 0x20uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  std::_Deallocate<16,0>(
    *((void **)this + 13),
    (*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>,void *>>>(
    v6,
    *((_QWORD *)this + 11));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x38uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
