/*
 * XREFs of ??$com_weak_query_failfast@AEAPEAUIAsyncDeferral@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIAsyncDeferral@Internal@Windows@@@Z @ 0x180114F24
 * Callers:
 *     ?SetStartupDeferral@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferral@25@@Z @ 0x180117B6C (-SetStartupDeferral@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferr.c)
 *     ?SetStartupDeferral@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferral@25@@Z @ 0x18011A624 (-SetStartupDeferral@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAXPEAUIAsy.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 *__fastcall wil::com_weak_query_failfast<Windows::Internal::IAsyncDeferral * &>(
        __int64 *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rax
  int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset(a1);
  *a1 = 0LL;
  v4 = *v2;
  v9 = 0LL;
  v5 = (*v4)(v2, &GUID_00000038_0000_0000_c000_000000000046, &v9);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, a1);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v9);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1833LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v5,
      v7);
  return a1;
}
