/*
 * XREFs of ?OnNotify@CMicBoostNotificationsDelegator@@UEAAJKPEBU_GUID@@@Z @ 0x140078130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x140070654 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMicBoostNotificationsDelegator::OnNotify(
        struct IWeakReference **this,
        unsigned int a2,
        const struct _GUID *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  wil::details::weak_query_policy::query(this[2], &GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947, &v9);
  if ( v9
    && (v5 = (*(__int64 (__fastcall **)(void *, _QWORD, const struct _GUID *))(*(_QWORD *)v9 + 24LL))(v9, a2, a3),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v9);
  return v6;
}
