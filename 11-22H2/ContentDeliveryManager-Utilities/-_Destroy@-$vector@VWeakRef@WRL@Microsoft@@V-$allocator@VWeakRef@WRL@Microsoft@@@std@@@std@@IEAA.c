/*
 * XREFs of ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x18006B1A0
 * Callers:
 *     ?_Reallocate@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18006B69C (-_Reallocate@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@I.c)
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXXZ @ 0x18006B894 (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXXZ.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18006BC90 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 * Callees:
 *     ??$destroy@VWeakRef@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@@Z @ 0x180066890 (--$destroy@VWeakRef@WRL@Microsoft@@@-$_Wrap_alloc@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@st.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(a1, v4++);
    while ( v4 != a3 );
  }
  return result;
}
