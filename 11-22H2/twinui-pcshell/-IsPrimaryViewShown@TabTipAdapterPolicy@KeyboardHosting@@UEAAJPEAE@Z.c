/*
 * XREFs of ?IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180098610
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1800986A0 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewShown(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned __int8 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned __int8 v5; // di
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 520);
  v7 = *((_DWORD *)this + 160);
  AcquireSRWLockShared((PSRWLOCK)this + 65);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    (char *)this + 456,
    &v8,
    &v7);
  if ( v8 == *((_QWORD *)this + 58) )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    v5 = 0;
  }
  else
  {
    v5 = *(_BYTE *)(v8 + 20);
    if ( v2 )
      ReleaseSRWLockShared(v2);
  }
  result = 0LL;
  *a2 = v5;
  return result;
}
