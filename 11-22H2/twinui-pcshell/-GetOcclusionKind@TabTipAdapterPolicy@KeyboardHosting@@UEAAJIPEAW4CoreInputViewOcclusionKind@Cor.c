/*
 * XREFs of ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1805323C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1800986A0 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind *a3)
{
  RTL_SRWLOCK *v3; // rdi
  int v7; // ebx
  int v8; // eax
  __int128 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+90h] [rbp+30h] BYREF
  int v12; // [rsp+98h] [rbp+38h] BYREF

  v12 = a2;
  v3 = this + 65;
  v7 = 2;
  AcquireSRWLockExclusive(this + 65);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    &this[57].Ptr,
    &v11,
    &v12);
  if ( (PVOID)v11 != this[58].Ptr )
  {
    v8 = *(_DWORD *)(v11 + 24);
    v10 = *(_OWORD *)(v11 + 56);
    if ( v8 == 1 || a2 == LODWORD(this[80].Ptr) )
    {
      if ( WORD4(v10) )
        goto LABEL_10;
      v7 = 0;
      if ( (*(_QWORD *)(v11 + 48) & 2) == 0 )
        goto LABEL_10;
    }
    else if ( v8 == 5 && BYTE8(v10) && BYTE9(v10) )
    {
LABEL_10:
      v7 = 1;
    }
  }
  *(_DWORD *)a3 = v7;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
