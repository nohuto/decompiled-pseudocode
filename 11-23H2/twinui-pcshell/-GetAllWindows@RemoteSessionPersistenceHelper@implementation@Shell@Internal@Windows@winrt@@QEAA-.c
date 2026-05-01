/*
 * XREFs of ?GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@XZ @ 0x18008D5F0
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18008CE7C (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18008CD34 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180092148 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$?0V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@_KPEAX@std@@@1@@Z @ 0x180726A04 (--$-0V-$allocator@U-$_List_node@_KPEAX@std@@@std@@@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_.c)
 *     ??$_Emplace_reallocate@UWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@QEAAPEAUWindowId@UI@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x180726AD8 (--$_Emplace_reallocate@UWindowId@UI@Windows@winrt@@@-$vector@UWindowId@UI@Windows@winrt@@V-$allo.c)
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x180726F3C (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$vector@UWindow.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows(
        PSRWLOCK SRWLock,
        __int64 a2)
{
  _QWORD *v4; // rbx
  struct winrt::impl::hstring_header *v5; // rdx
  __int64 **Ptr; // r14
  __int64 **i; // rdi
  struct winrt::impl::hstring_header *v9; // rdx
  _QWORD *v10; // rsi
  _QWORD *j; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  unsigned __int64 *v14; // rdx
  void *v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD **v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  void *v20; // rcx
  unsigned __int64 v21; // rdx
  _QWORD **v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rbx
  winrt::impl *v25; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v26[8]; // [rsp+38h] [rbp-91h] BYREF
  _QWORD **v27; // [rsp+40h] [rbp-89h]
  __int128 v28; // [rsp+50h] [rbp-79h]
  __int64 v29; // [rsp+60h] [rbp-69h]
  PSRWLOCK v30; // [rsp+80h] [rbp-49h]
  _BYTE v31[8]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD **v32; // [rsp+98h] [rbp-31h]
  void *v33; // [rsp+A8h] [rbp-21h]
  __int128 v34; // [rsp+B0h] [rbp-19h]
  _BYTE v35[80]; // [rsp+D0h] [rbp+7h] BYREF
  unsigned __int64 v36; // [rsp+130h] [rbp+67h] BYREF
  __int64 v37; // [rsp+138h] [rbp+6Fh]
  void *v38; // [rsp+140h] [rbp+77h] BYREF
  struct winrt::impl::hstring_header *v39; // [rsp+148h] [rbp+7Fh] BYREF

  v37 = a2;
  *(_DWORD *)a2 = 0;
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::_Alloc_sentinel_and_proxy((_QWORD *)(a2 + 8));
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 7LL;
  *(_QWORD *)(a2 + 56) = 8LL;
  *(_DWORD *)a2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    a2 + 24,
    16LL,
    *v4);
  AcquireSRWLockShared(SRWLock);
  v30 = SRWLock;
  Ptr = (__int64 **)SRWLock[2].Ptr;
  for ( i = (__int64 **)*Ptr; i != Ptr; i = (__int64 **)*i )
  {
    v25 = winrt::impl::duplicate_hstring((winrt::impl *)i[2], v5);
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
      v26,
      i + 3);
    v39 = winrt::impl::duplicate_hstring(v25, v9);
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
      v31,
      v26);
    v10 = v32;
    for ( j = *v32; j != v10; j = (_QWORD *)*j )
    {
      v12 = j[2];
      v13 = *(_QWORD *)std::_Hash<std::_Umap_traits<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>,0>>::_Try_emplace<winrt::hstring const &,>(
                         a2,
                         v35,
                         &v39)
          + 24LL;
      v36 = v12;
      v14 = *(unsigned __int64 **)(v13 + 8);
      if ( v14 == *(unsigned __int64 **)(v13 + 16) )
      {
        std::vector<winrt::Windows::UI::WindowId>::_Emplace_reallocate<winrt::Windows::UI::WindowId>(v13, v14, &v36);
      }
      else
      {
        *v14 = v12;
        *(_QWORD *)(v13 + 8) += 8LL;
      }
    }
    v15 = v33;
    v16 = 8 * ((__int64)(v34 - (_QWORD)v33) >> 3);
    v36 = v16;
    v38 = v33;
    if ( v16 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v38, &v36);
      v16 = v36;
      v15 = v38;
    }
    operator delete(v15, v16);
    v33 = 0LL;
    v34 = 0LL;
    v17 = v32;
    *v32[1] = 0LL;
    v18 = *v17;
    if ( v18 )
    {
      do
      {
        v19 = (_QWORD *)*v18;
        std::_Deallocate<16,0>(v18, 24LL);
        v18 = v19;
      }
      while ( v19 );
    }
    std::_Deallocate<16,0>(v32, 24LL);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
    v20 = (void *)v28;
    v21 = (*((_QWORD *)&v28 + 1) - v28) & 0xFFFFFFFFFFFFFFF8uLL;
    v36 = v21;
    v38 = (void *)v28;
    if ( v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v38, &v36);
      v21 = v36;
      v20 = v38;
    }
    operator delete(v20, v21);
    v28 = 0LL;
    v29 = 0LL;
    v22 = v27;
    *v27[1] = 0LL;
    v23 = *v22;
    if ( v23 )
    {
      do
      {
        v24 = (_QWORD *)*v23;
        std::_Deallocate<16,0>(v23, 24LL);
        v23 = v24;
      }
      while ( v24 );
    }
    std::_Deallocate<16,0>(v27, 24LL);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return a2;
}
