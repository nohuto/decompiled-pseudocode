/*
 * XREFs of ?OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@UEAAJI@Z @ 0x1805344F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1800986A0 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::OnViewDestroyed(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v4; // rcx
  const unsigned __int8 *Ptr; // rdi
  __int64 appended; // rax
  _QWORD *v7; // r11
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const unsigned __int8 *v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v2 = this + 65;
  AcquireSRWLockExclusive(this + 65);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    &this[57].Ptr,
    &v12,
    &v13);
  Ptr = (const unsigned __int8 *)this[58].Ptr;
  if ( v12 != Ptr )
  {
    appended = std::_Fnv1a_append_bytes(v4, v12 + 16, 4uLL);
    v8 = this[60].Ptr;
    v9 = 2 * ((__int64)this[63].Ptr & appended);
    if ( (_QWORD *)v8[2 * ((__int64)this[63].Ptr & appended) + 1] == v7 )
    {
      if ( (_QWORD *)v8[2 * ((__int64)this[63].Ptr & appended)] == v7 )
        v8[2 * ((__int64)this[63].Ptr & appended)] = Ptr;
      else
        Ptr = (const unsigned __int8 *)v7[1];
      v8[v9 + 1] = Ptr;
    }
    else if ( (_QWORD *)v8[2 * ((__int64)this[63].Ptr & appended)] == v7 )
    {
      v8[2 * ((__int64)this[63].Ptr & appended)] = *v7;
    }
    v10 = *v7;
    --this[59].Ptr;
    *(_QWORD *)v7[1] = v10;
    *(_QWORD *)(v10 + 8) = v7[1];
    std::_Deallocate<16,0>(v7, 0x58uLL);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
