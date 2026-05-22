/*
 * XREFs of ??$emplace@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18003A918
 * Callers:
 *     ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x18003C5B0 (-AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEve.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x18003C6F8 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800549BC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClien.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180099978 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::emplace<unsigned int &,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> &>(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 **v8; // r12
  char *v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 appended; // r14
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 *v18; // rdx
  _QWORD *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-28h] BYREF
  char *v27; // [rsp+28h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v8 = (__int64 **)(a1 + 8);
  v26 = a1 + 8;
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v27 = v9;
  *((_DWORD *)v9 + 4) = *a3;
  wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
    v9 + 24,
    *a4);
  appended = std::_Fnv1a_append_bytes(v10, (const unsigned __int8 *const)v9 + 16, 4uLL);
  v12 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v12 < 0 )
    v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
        + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
  else
    v13 = (float)(int)v12;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 < 0 )
  {
    v24 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v14 >> 1);
    v15 = (float)(int)v24 + (float)(int)v24;
  }
  else
  {
    v15 = (float)(int)v14;
  }
  if ( (float)(v13 / v15) > *(float *)a1 )
  {
    v25 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v25);
  }
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(__int64 **)(v16 + 16 * (appended & *(_QWORD *)(a1 + 48)) + 8);
  v18 = *v8;
  if ( v17 != *v8 )
  {
    while ( *((_DWORD *)v9 + 4) != *((_DWORD *)v17 + 4) )
    {
      if ( v17 == *(__int64 **)(v16 + 16 * (appended & *(_QWORD *)(a1 + 48))) )
      {
        v18 = v17;
        goto LABEL_9;
      }
      v17 = (__int64 *)v17[1];
    }
    v18 = (__int64 *)*v17;
  }
LABEL_9:
  v27 = 0LL;
  v19 = (_QWORD *)v18[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v9 = v18;
  *((_QWORD *)v9 + 1) = v19;
  *v19 = v9;
  v18[1] = (__int64)v9;
  v20 = *(_QWORD *)(a1 + 24);
  v21 = 2 * (appended & *(_QWORD *)(a1 + 48));
  v22 = *(__int64 **)(v20 + 16 * (appended & *(_QWORD *)(a1 + 48)));
  if ( v22 == *v8 )
  {
    *(_QWORD *)(v20 + 16 * (appended & *(_QWORD *)(a1 + 48))) = v9;
  }
  else
  {
    if ( v22 == v18 )
    {
      *(_QWORD *)(v20 + 16 * (appended & *(_QWORD *)(a1 + 48))) = v9;
      goto LABEL_12;
    }
    if ( *(_QWORD **)(v20 + 16 * (appended & *(_QWORD *)(a1 + 48)) + 8) != v19 )
      goto LABEL_12;
  }
  *(_QWORD *)(v20 + 8 * v21 + 8) = v9;
LABEL_12:
  *a2 = v9;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>>>(&v26);
  return a2;
}
