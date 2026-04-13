/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18006BC40
 * Callers:
 *     ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x18006AE40 (-UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA.c)
 * Callees:
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x18006B150 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v7; // rsi
  __int64 *v8; // r8
  __int64 *v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a4;
  v7 = a1;
  if ( a3 == *(__int64 **)a1 && (v8 = *(__int64 **)(a1 + 8), a4 == v8) )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, *(__int64 **)a1, v8);
    *(_QWORD *)(v7 + 8) = *(_QWORD *)v7;
  }
  else if ( a3 != a4 )
  {
    v9 = *(__int64 **)(a1 + 8);
    v10 = a3;
    if ( a4 != v9 )
    {
      do
      {
        v11 = 0LL;
        if ( &v13 != (char *)v4 )
        {
          v11 = *v4;
          *v4 = 0LL;
        }
        a1 = *v10;
        *v10 = v11;
        if ( a1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        ++v10;
        ++v4;
      }
      while ( v4 != v9 );
    }
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, v10, *(__int64 **)(v7 + 8));
    *(_QWORD *)(v7 + 8) = v10;
  }
  *a2 = a3;
  return a2;
}
