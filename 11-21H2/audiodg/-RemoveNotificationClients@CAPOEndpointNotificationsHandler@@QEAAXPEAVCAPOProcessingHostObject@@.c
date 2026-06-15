/*
 * XREFs of ?RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x14006A00C
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140066420 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x14001CB80 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1400694F4 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_.c)
 */

void __fastcall CAPOEndpointNotificationsHandler::RemoveNotificationClients(
        CAPOEndpointNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 **v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r8
  __int64 **v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // r8
  char *v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+70h] [rbp+30h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  v17 = v2;
  v5 = (__int64 **)((char *)this + 120);
  wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
    &v16,
    (__int64)a2);
  v14 = 0LL;
  v15 = &v14;
  v6 = (__int64 *)*((_QWORD *)this + 15);
  v13 = (char *)this + 120;
  if ( v6 )
  {
    v7 = v16;
    do
    {
      if ( v6[1] == v7 )
      {
        v8 = *v5;
        v6 = (__int64 *)**v5;
        *v8 = 0LL;
        *v5 = v6;
        *v15 = (__int64)v8;
        v15 = v8;
      }
      else
      {
        v5 = (__int64 **)v6;
        v6 = (__int64 *)*v6;
      }
    }
    while ( v6 );
  }
  std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v13);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  v9 = (__int64 **)((char *)this + 184);
  wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
    &v16,
    (__int64)a2);
  v14 = 0LL;
  v15 = &v14;
  v10 = (__int64 *)*((_QWORD *)this + 23);
  v13 = (char *)this + 184;
  if ( v10 )
  {
    v11 = v16;
    do
    {
      if ( v10[1] == v11 )
      {
        v12 = *v9;
        v10 = (__int64 *)**v9;
        *v12 = 0LL;
        *v9 = v10;
        *v15 = (__int64)v12;
        v15 = v12;
      }
      else
      {
        v9 = (__int64 **)v10;
        v10 = (__int64 *)*v10;
      }
    }
    while ( v10 );
  }
  std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v13);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
}
