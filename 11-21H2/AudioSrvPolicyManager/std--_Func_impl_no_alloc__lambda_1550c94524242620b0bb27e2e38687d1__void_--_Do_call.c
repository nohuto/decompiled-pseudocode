/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Do_call @ 0x18001D390
 * Callers:
 *     <none>
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18001DE58 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbp
  __int64 ***v2; // rdi
  __int64 **i; // rbx
  void *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
  v5 = v1 + 24;
  v2 = *(__int64 ****)(v1 + 72);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    v4 = 0LL;
    if ( (int)wil::details::weak_query_policy::query(
                (struct IWeakReference *)i[3],
                &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
                &v4) >= 0 )
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v4 + 80LL))(v4, v1);
    if ( v4 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v1 != -24 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
}
