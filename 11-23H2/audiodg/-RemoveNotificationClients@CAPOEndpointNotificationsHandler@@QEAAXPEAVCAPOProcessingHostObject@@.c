/*
 * XREFs of ?RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400725D8
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14006DC40 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x1400065E8 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x14003889C (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_.c)
 */

void __fastcall CAPOEndpointNotificationsHandler::RemoveNotificationClients(
        CAPOEndpointNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r8
  __int64 **v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // r8
  __int64 **v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // r8
  char *v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+60h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v5 = (__int64 **)((char *)this + 88);
  wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
    &v20,
    (__int64)a2);
  v18 = 0LL;
  v19 = &v18;
  v6 = (__int64 *)*((_QWORD *)this + 11);
  v17 = (char *)this + 88;
  if ( v6 )
  {
    v7 = v20;
    do
    {
      if ( v6[1] == v7 )
      {
        v8 = *v5;
        v6 = (__int64 *)**v5;
        *v8 = 0LL;
        *v5 = v6;
        *v19 = (__int64)v8;
        v19 = v8;
      }
      else
      {
        v5 = (__int64 **)v6;
        v6 = (__int64 *)*v6;
      }
    }
    while ( v6 );
  }
  std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v17);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v20);
  if ( v2 )
    LeaveCriticalSection(v2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v9 = (__int64 **)((char *)this + 152);
  wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
    &v20,
    (__int64)a2);
  v18 = 0LL;
  v19 = &v18;
  v10 = (__int64 *)*((_QWORD *)this + 19);
  v17 = (char *)this + 152;
  if ( v10 )
  {
    v11 = v20;
    do
    {
      if ( v10[1] == v11 )
      {
        v12 = *v9;
        v10 = (__int64 *)**v9;
        *v12 = 0LL;
        *v9 = v10;
        *v19 = (__int64)v12;
        v19 = v12;
      }
      else
      {
        v9 = (__int64 **)v10;
        v10 = (__int64 *)*v10;
      }
    }
    while ( v10 );
  }
  std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v17);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v20);
  v13 = (__int64 **)((char *)this + 160);
  wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
    &v20,
    (__int64)a2);
  v18 = 0LL;
  v19 = &v18;
  v14 = (__int64 *)*((_QWORD *)this + 20);
  v17 = (char *)this + 160;
  if ( v14 )
  {
    v15 = v20;
    do
    {
      if ( v14[1] == v15 )
      {
        v16 = *v13;
        v14 = (__int64 *)**v13;
        *v16 = 0LL;
        *v13 = v14;
        *v19 = (__int64)v16;
        v19 = v16;
      }
      else
      {
        v13 = (__int64 **)v14;
        v14 = (__int64 *)*v14;
      }
    }
    while ( v14 );
  }
  std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v17);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v20);
  if ( this != (CAPOEndpointNotificationsHandler *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
}
