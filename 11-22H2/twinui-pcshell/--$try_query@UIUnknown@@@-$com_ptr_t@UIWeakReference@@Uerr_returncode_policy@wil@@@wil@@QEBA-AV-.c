/*
 * XREFs of ??$try_query@UIUnknown@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1805B2688
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::Invoke @ 0x1805B39B0 (CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___--Invoke.c)
 *     wistd::__function::__func__lambda_2ac7e78171f5987cb68832f690693247__void___cdecl(void)_::operator() @ 0x180600710 (wistd--__function--__func__lambda_2ac7e78171f5987cb68832f690693247__void___cdecl(void)_--operato.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_::Run @ 0x180603410 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__-_--Run.c)
 *     wistd::__function::__func__lambda_a0755dde8b594d59faba0fbbcacd729d__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1806E1D60 (wistd--__function--__func__lambda_a0755dde8b594d59faba0fbbcacd729d__void___cdecl(un_ea_1806E1D60.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180062114 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_query<IUnknown>(
        struct IWeakReference **a1,
        void **a2)
{
  struct IWeakReference *v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  wil::details::weak_query_policy::query(v3, &GUID_00000000_0000_0000_c000_000000000046, a2);
  return a2;
}
