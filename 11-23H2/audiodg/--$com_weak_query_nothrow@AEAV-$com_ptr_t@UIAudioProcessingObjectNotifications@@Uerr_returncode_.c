/*
 * XREFs of ??$com_weak_query_nothrow@AEAV?$com_ptr_t@UIAudioProcessingObjectNotifications@@Uerr_returncode_policy@wil@@@wil@@@wil@@YAJAEAV?$com_ptr_t@UIAudioProcessingObjectNotifications@@Uerr_returncode_policy@wil@@@0@PEAPEAUIWeakReference@@@Z @ 0x14003848A
 * Callers:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070030 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::com_weak_query_nothrow<wil::com_ptr_t<IAudioProcessingObjectNotifications,wil::err_returncode_policy> &>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rax
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  *a2 = 0LL;
  v4 = *v3;
  v7 = 0LL;
  v5 = (*v4)(v3, &GUID_00000038_0000_0000_c000_000000000046, &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 24LL))(v7, a2);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v7);
  return (unsigned int)v5;
}
