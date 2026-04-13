/*
 * XREFs of ?push_back@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18006BE48
 * Callers:
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006A350 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 * Callees:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18006B760 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::WeakRef>::push_back(__int64 **a1, __int64 *a2)
{
  bool v4; // al
  __int64 *v5; // rcx
  __int64 v6; // rdi
  __int64 *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = a2 < a1[1] && *a1 <= a2;
  v5 = a1[2];
  if ( v4 )
  {
    v6 = a2 - *a1;
    if ( a1[1] == v5 )
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
    result = *a1;
    v8 = (*a1)[v6];
    *a1[1] = v8;
    if ( v8 )
      result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    if ( a1[1] == v5 )
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
    result = a1[1];
    v9 = *a2;
    *result = *a2;
    if ( v9 )
      result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  ++a1[1];
  return result;
}
