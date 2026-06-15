/*
 * XREFs of ?GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x14006D13C
 * Callers:
 *     ?AddMicBoostNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14002D628 (-AddMicBoostNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICAT.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1400382EC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x14006A7BC (--$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft.c)
 *     ??$emplace@PEAGAEAPEAVCMicBoostNotificationsHandler@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAGAEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x14006AE84 (--$emplace@PEAGAEAPEAVCMicBoostNotificationsHandler@@@-$_Hash@V-$_Umap_traits@V-$basic_string@GU.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x14006B054 (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CAPOProcessingHost::GetMicBoostNotificationHandler(
        CAPOProcessingHost *this,
        struct IMMDevice *a2,
        struct CMicBoostNotificationsHandler **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // ebx
  struct CMicBoostNotificationsHandler *v12; // rcx
  LPVOID pv; // [rsp+20h] [rbp-78h] BYREF
  struct IMMDevice *v14; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-68h] BYREF
  void *v16[3]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v14 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 312);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
  v15[2] = v6;
  pv = 0LL;
  GetId = a2->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a2, &pv);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v8);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v9;
  }
  std::wstring::wstring(v16, (__int64)pv);
  std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::find<void>(
    (_QWORD *)this + 44,
    v15,
    (__int64)v16);
  if ( v17 >= 8 )
    std::_Deallocate<16,0>(v16[0], 2 * v17 + 2);
  if ( v15[0] == *((_QWORD *)this + 45) )
  {
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CMicBoostNotificationsHandler,CMicBoostNotificationsHandler,IMMDevice * &>(
            a3,
            &v14);
    if ( v11 < 0 )
    {
      if ( pv )
        CoTaskMemFree(pv);
      if ( v6 )
        LeaveCriticalSection(v6);
      return (unsigned int)v11;
    }
    v14 = (struct IMMDevice *)pv;
    std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>>,0>>::emplace<unsigned short *,CMicBoostNotificationsHandler * &>(
      (float *)this + 88,
      (__int64)v15,
      (__int64 *)&v14,
      (__int64 *)a3);
  }
  else
  {
    v12 = *(struct CMicBoostNotificationsHandler **)(v15[0] + 48LL);
    if ( v12 )
    {
      *a3 = v12;
      (*(void (__fastcall **)(struct CMicBoostNotificationsHandler *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    else
    {
      *a3 = 0LL;
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
