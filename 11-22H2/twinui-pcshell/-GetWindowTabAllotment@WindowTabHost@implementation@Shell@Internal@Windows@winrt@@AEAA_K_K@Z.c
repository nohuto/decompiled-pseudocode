/*
 * XREFs of ?GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x1802E7C50
 * Callers:
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x180637DDC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??0?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1802D3BD2 (--0-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180635E9C (--$emplace@AEB_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@1@AEB_K@Z @ 0x18063615C (--$find@X@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetWindowTabAllotment(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  void **v11; // rax
  void *v12; // rcx
  _QWORD **v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  _BYTE v17[16]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD **v19; // [rsp+38h] [rbp-38h]
  void *v20; // [rsp+48h] [rbp-28h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  unsigned __int64 v22; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+48h]
  void *v24; // [rsp+C0h] [rbp+50h] BYREF

  v23 = a2;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 90);
  v5 = *((int *)this + 198);
  if ( v4 >= qword_1808349C0[v5] )
    v4 = qword_1808349C0[v5];
  std::unordered_set<unsigned __int64>::unordered_set<unsigned __int64>((__int64)v18);
  v6 = 0LL;
  if ( !v4 )
    goto LABEL_11;
  do
  {
    v7 = (*((_QWORD *)this + 88) - 1LL) & ((v6 + *((_QWORD *)this + 89)) >> 1);
    v8 = ((_DWORD)v6 + *((_DWORD *)this + 178)) & 1;
    v9 = *((_QWORD *)this + 87);
    v10 = v3 + 1;
    if ( *(_QWORD *)(*(_QWORD *)(v9 + 8 * v7) + 8 * v8) != v23 )
      v10 = v3;
    v3 = v10;
    v11 = (void **)std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::find<void>(
                     v18,
                     &v22);
    if ( *v11 == v19 )
    {
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::emplace<unsigned __int64 const &>(
        v18,
        v17,
        *(_QWORD *)(v9 + 8 * v7) + 8 * v8);
      if ( *((_QWORD *)this + 90) < ++v4 )
        v4 = *((_QWORD *)this + 90);
    }
    ++v6;
  }
  while ( v6 < v4 );
  if ( !v3 )
LABEL_11:
    v3 = 1LL;
  v12 = v20;
  v22 = (v21 - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL;
  v24 = v20;
  if ( v22 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v24, &v22);
    v12 = v24;
  }
  operator delete(v12);
  v20 = 0LL;
  v21 = 0LL;
  v13 = v19;
  *v19[1] = 0LL;
  v14 = *v13;
  if ( v14 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      std::_Deallocate<16,0>(v14, 0x18uLL);
      v14 = v15;
    }
    while ( v15 );
  }
  std::_Deallocate<16,0>(v19, 0x18uLL);
  return v3;
}
