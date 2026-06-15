/*
 * XREFs of ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14006DC40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUIAudioProcessingObject@@@Z @ 0x1400064B4 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessingHostOb.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$com_query_to_nothrow@UIAudioProcessingObject@@AEAPEAUIAudioProcessingObjectNotifications@@@wil@@YAJAEAPEAUIAudioProcessingObjectNotifications@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1400229CC (--$com_query_to_nothrow@UIAudioProcessingObject@@AEAPEAUIAudioProcessingObjectNotifications@@@wi.c)
 *     wil::details::lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___::_lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___ @ 0x14002D4E0 (wil--details--lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___--_lambda_call__lambda_39f0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x1400704A4 (-StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 *     ?RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400725D8 (-RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@.c)
 *     ?RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400733B8 (-RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOP.c)
 *     ?RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140077188 (-RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObj.c)
 *     ?RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140078570 (-RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHost::UnregisterAPONotifications(
        CAPOProcessingHost *this,
        struct IAudioProcessingObjectNotifications *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct CAPOProcessingHostObject *v5; // rcx
  struct CAPOProcessingHostObject *v6; // rdi
  int v7; // eax
  __int64 ***v8; // rdi
  __int64 **i; // rbx
  __int64 **j; // rbx
  CDeviceOrientationNotificationsHandler *v11; // rcx
  __int64 ***v12; // rdi
  __int64 **k; // rbx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+28h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IAudioProcessingObjectNotifications *v19; // [rsp+78h] [rbp+38h] BYREF
  struct CAPOProcessingHostObject *v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v19 = a2;
  v21 = 0LL;
  v3 = wil::com_query_to_nothrow<IAudioProcessingObject,IAudioProcessingObjectNotifications * &>(&v19, (__int64)&v21);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v20 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    v15 = v21;
    std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::find<void>(
      (unsigned __int64)this + 184,
      v16,
      (const unsigned __int8 *)&v15);
    if ( v16[0] == *((_QWORD *)this + 24) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x224,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)0x80070490LL);
      if ( this != (CAPOProcessingHost *)-144LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v20);
      v4 = -2147023728;
    }
    else
    {
      v5 = *(struct CAPOProcessingHostObject **)(v16[0] + 24LL);
      v6 = v20;
      v20 = v5;
      if ( v5 )
        (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v6 )
        (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v6 + 16LL))(v6);
      if ( this != (CAPOProcessingHost *)-144LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
      v16[0] = &v21;
      v16[1] = &v20;
      v17 = 1;
      v7 = CAPOProcessingHostObject::StopSendingNotifications(v20);
      v4 = v7;
      if ( v7 >= 0 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
        v8 = (__int64 ***)*((_QWORD *)this + 11);
        for ( i = *v8; i != (__int64 **)v8; i = (__int64 **)*i )
          CAPOEndpointNotificationsHandler::RemoveNotificationClients((CAPOEndpointNotificationsHandler *)i[6], v20);
        if ( this != (CAPOProcessingHost *)-32LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
        for ( j = (__int64 **)*((_QWORD *)this + 36); j; j = (__int64 **)*j )
          CAudioSystemEffectsPropertyChangeNotificationsHandler::RemoveNotificationClients(
            (CAudioSystemEffectsPropertyChangeNotificationsHandler *)j[1],
            v20);
        if ( this != (CAPOProcessingHost *)-248LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
        v11 = (CDeviceOrientationNotificationsHandler *)*((_QWORD *)this + 37);
        if ( v11 )
          CDeviceOrientationNotificationsHandler::RemoveNotificationClient(v11, v20);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
        v12 = (__int64 ***)*((_QWORD *)this + 45);
        for ( k = *v12; k != (__int64 **)v12; k = (__int64 **)*k )
          CMicBoostNotificationsHandler::RemoveNotificationClient((CMicBoostNotificationsHandler *)k[6], v20);
        if ( this != (CAPOProcessingHost *)-312LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
        wil::details::lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___::_lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___((__int64)v16);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v20);
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x231,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v7);
        wil::details::lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___::_lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___((__int64)v16);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v20);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v3);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
  return v4;
}
