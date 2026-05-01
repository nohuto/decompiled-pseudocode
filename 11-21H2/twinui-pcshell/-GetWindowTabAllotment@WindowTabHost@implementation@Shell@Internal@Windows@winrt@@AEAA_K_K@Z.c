/*
 * XREFs of ?GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x18001AE64
 * Callers:
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x18001AF78 (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 * Callees:
 *     ??0?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x18001AF48 (--0-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1803283D0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@.c)
 *     ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1805776F4 (--$emplace@AEB_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetWindowTabAllotment(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  void *v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  _QWORD **v12; // r12
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 appended; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD **v22; // rcx
  _QWORD *v23; // rbx
  char v24[8]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD **v25; // [rsp+58h] [rbp-31h]
  void *v26; // [rsp+68h] [rbp-21h]
  __int128 v27; // [rsp+70h] [rbp-19h]
  char v28[16]; // [rsp+90h] [rbp+7h] BYREF
  char v29[64]; // [rsp+A0h] [rbp+17h] BYREF
  unsigned __int64 v30; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+F8h] [rbp+6Fh]
  void *v32; // [rsp+100h] [rbp+77h] BYREF

  v31 = a2;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 88);
  v5 = *((int *)this + 194);
  if ( v4 >= qword_180699C88[v5] )
    v4 = qword_180699C88[v5];
  std::unordered_set<unsigned __int64>::unordered_set<unsigned __int64>(v24);
  v6 = 0LL;
  if ( !v4 )
    goto LABEL_4;
  v12 = v25;
  do
  {
    v13 = v6 + *((_QWORD *)this + 87);
    v14 = v13 >> 1;
    v30 = v13 >> 1;
    v15 = (v13 >> 1) & (*((_QWORD *)this + 86) - 1LL);
    v16 = v13 & 1;
    v17 = v3 + 1;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 85) + 8 * v15) + 8 * v16) != v31 )
      v17 = v3;
    v3 = v17;
    v18 = *(_QWORD *)(*((_QWORD *)this + 85) + 8 * (v14 & (*((_QWORD *)this + 86) - 1LL)));
    appended = std::_Fnv1a_append_bytes(v18, (const unsigned __int8 *const)(v18 + 8 * v16), 8uLL);
    v21 = std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::_Find_last<unsigned __int64>(
            v24,
            v28,
            v20,
            appended,
            (char *)this + 672);
    v22 = v12;
    if ( *(_QWORD *)(v21 + 8) )
      v22 = *(_QWORD ***)(v21 + 8);
    if ( v22 == v12 )
    {
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::emplace<unsigned __int64 const &>(
        v24,
        v29,
        *(_QWORD *)(*((_QWORD *)this + 85) + 8 * (v30 & (*((_QWORD *)this + 86) - 1LL))) + 8 * v16);
      if ( *((_QWORD *)this + 88) < ++v4 )
        v4 = *((_QWORD *)this + 88);
      v12 = v25;
    }
    ++v6;
  }
  while ( v6 < v4 );
  if ( !v3 )
LABEL_4:
    v3 = 1LL;
  v7 = v26;
  v8 = (v27 - (_QWORD)v26) & 0xFFFFFFFFFFFFFFF8uLL;
  v30 = v8;
  v32 = v26;
  if ( v8 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v32, &v30);
    v8 = v30;
    v7 = v32;
  }
  operator delete(v7, v8);
  v26 = 0LL;
  v27 = 0LL;
  v9 = v25;
  *v25[1] = 0LL;
  v10 = *v9;
  if ( v10 )
  {
    do
    {
      v23 = (_QWORD *)*v10;
      std::_Deallocate<16,0>(v10, 24LL);
      v10 = v23;
    }
    while ( v23 );
  }
  std::_Deallocate<16,0>(v25, 24LL);
  return v3;
}
