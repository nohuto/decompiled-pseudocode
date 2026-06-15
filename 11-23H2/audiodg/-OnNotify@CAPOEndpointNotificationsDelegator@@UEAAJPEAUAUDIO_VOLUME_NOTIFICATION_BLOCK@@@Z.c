/*
 * XREFs of ?OnNotify@CAPOEndpointNotificationsDelegator@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140071CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x140070654 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEndpointNotificationsDelegator::OnNotify(
        struct IWeakReference **this,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  wil::details::weak_query_policy::query(this[2], &GUID_b46be134_9ede_4863_85c3_0df45cb0a1b1, &v7);
  if ( v7
    && (v3 = (*(__int64 (__fastcall **)(void *, struct AUDIO_VOLUME_NOTIFICATION_BLOCK *))(*(_QWORD *)v7 + 24LL))(
               v7,
               a2),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v4 = 0;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v7);
  return v4;
}
