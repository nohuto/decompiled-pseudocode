/*
 * XREFs of ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140066420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001C5CC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUIAudioProcessingObject@@@Z @ 0x14001CBE0 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessingHostOb.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query_to_nothrow@UIAudioProcessingObject@@AEAPEAUIAudioProcessingObjectNotifications@@@wil@@YAJAEAPEAUIAudioProcessingObjectNotifications@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1400293A4 (--$com_query_to_nothrow@UIAudioProcessingObject@@AEAPEAUIAudioProcessingObjectNotifications@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_923d6aba5004cbac79a7907f80600ecf_::operator() @ 0x140064F8C (_lambda_923d6aba5004cbac79a7907f80600ecf_--operator().c)
 *     ??$?9VCSerialWorkQueue@@@std@@YA_NAEBV?$shared_ptr@VCSerialWorkQueue@@@0@$$T@Z @ 0x140067AA8 (--$-9VCSerialWorkQueue@@@std@@YA_NAEBV-$shared_ptr@VCSerialWorkQueue@@@0@$$T@Z.c)
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x1400683E4 (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 *     ?RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x14006A00C (-RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@.c)
 *     ?RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x14006ADF0 (-RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHost::UnregisterAPONotifications(
        CAPOProcessingHost *this,
        struct IAudioProcessingObjectNotifications *a2)
{
  int v3; // eax
  int v4; // ebx
  struct CAPOProcessingHostObject *v5; // rcx
  struct CAPOProcessingHostObject *v6; // rbx
  CAPOProcessingHostObject *v7; // rdi
  char *v8; // rbx
  int v9; // eax
  __int64 ***v10; // rdi
  __int64 **i; // rbx
  __int64 **j; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  char v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IAudioProcessingObjectNotifications *v20; // [rsp+88h] [rbp+28h] BYREF
  struct CAPOProcessingHostObject *v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+98h] [rbp+38h] BYREF

  v20 = a2;
  v22 = 0LL;
  v3 = wil::com_query_to_nothrow<IAudioProcessingObject,IAudioProcessingObjectNotifications * &>(&v20, (__int64)&v22);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v21 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
    v15 = v22;
    std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::find<void>(
      (__int64)this + 184,
      &v16,
      (__int64)&v15);
    if ( (_QWORD)v16 == *((_QWORD *)this + 24) )
    {
      v4 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)0x80070490LL);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
    }
    else
    {
      v5 = *(struct CAPOProcessingHostObject **)(v16 + 24);
      v6 = v21;
      v21 = v5;
      if ( v5 )
        (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v6 )
        (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v6 + 16LL))(v6);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
      *(_QWORD *)&v16 = &v22;
      *((_QWORD *)&v16 + 1) = &v21;
      v17 = v16;
      v18 = 1;
      v7 = v21;
      v8 = (char *)v21 + 40;
      EnterCriticalSection((LPCRITICAL_SECTION)v21 + 1);
      *(_QWORD *)&v16 = v8;
      if ( (unsigned __int8)std::operator!=<CSerialWorkQueue>((char *)v7 + 80)
        && (v9 = CAPOProcessingHostObject::ShutdownWorkQueue(v7), v4 = v9, v9 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x70,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
          (const char *)(unsigned int)v9);
      }
      else
      {
        v4 = 0;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v16);
      if ( v4 >= 0 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
        *(_QWORD *)&v16 = (char *)this + 32;
        v10 = (__int64 ***)*((_QWORD *)this + 11);
        for ( i = *v10; i != (__int64 **)v10; i = (__int64 **)*i )
          CAPOEndpointNotificationsHandler::RemoveNotificationClients((CAPOEndpointNotificationsHandler *)i[6], v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v16);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
        *(_QWORD *)&v16 = (char *)this + 248;
        for ( j = (__int64 **)*((_QWORD *)this + 36); j; j = (__int64 **)*j )
          CAudioSystemEffectsPropertyChangeNotificationsHandler::RemoveNotificationClients(
            (CAudioSystemEffectsPropertyChangeNotificationsHandler *)j[1],
            v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v16);
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x171,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v4);
      }
      v18 = 0;
      lambda_923d6aba5004cbac79a7907f80600ecf_::operator()((__int64 **)&v17);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v3);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
  return (unsigned int)v4;
}
