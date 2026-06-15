/*
 * XREFs of ?RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400771D8
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14006DC90 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x1400065E8 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1400388DC (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_.c)
 */

void __fastcall CDeviceOrientationNotificationsHandler::RemoveNotificationClient(
        struct _RTL_CRITICAL_SECTION *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  LONG *p_LockCount; // rbx
  LONG *v6; // rax
  __int64 v7; // rcx
  LONG *v8; // r8
  LONG *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = this + 1;
  EnterCriticalSection(this + 1);
  p_LockCount = &this[2].LockCount;
  wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
    &v12,
    (__int64)a2);
  v10 = 0LL;
  v11 = &v10;
  v6 = *(LONG **)p_LockCount;
  v9 = p_LockCount;
  if ( v6 )
  {
    v7 = v12;
    do
    {
      if ( *((_QWORD *)v6 + 1) == v7 )
      {
        v8 = *(LONG **)p_LockCount;
        v6 = **(LONG ***)p_LockCount;
        *(_QWORD *)v8 = 0LL;
        *(_QWORD *)p_LockCount = v6;
        *v11 = (__int64)v8;
        v11 = (__int64 *)v8;
      }
      else
      {
        p_LockCount = v6;
        v6 = *(LONG **)v6;
      }
    }
    while ( v6 );
  }
  std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v9);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
  if ( v2 )
    LeaveCriticalSection(v2);
}
