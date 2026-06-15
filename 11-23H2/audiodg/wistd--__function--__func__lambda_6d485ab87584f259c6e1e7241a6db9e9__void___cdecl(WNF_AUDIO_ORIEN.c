/*
 * XREFs of wistd::__function::__func__lambda_6d485ab87584f259c6e1e7241a6db9e9__void___cdecl(WNF_AUDIO_ORIENTATION_STATE_const_&)_::operator() @ 0x140076B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x140070654 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wistd::__function::__func__lambda_6d485ab87584f259c6e1e7241a6db9e9__void___cdecl_WNF_AUDIO_ORIENTATION_STATE_const____::operator()(
        __int64 a1,
        __int64 a2)
{
  struct IWeakReference *v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(struct IWeakReference **)(*(_QWORD *)(a1 + 8) + 96LL);
  v7 = 0LL;
  wil::details::weak_query_policy::query(v3, &GUID_489d1d10_a85f_43ce_a941_da100723509a, &v7);
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
        (const char *)(unsigned int)v4);
  }
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v7);
}
