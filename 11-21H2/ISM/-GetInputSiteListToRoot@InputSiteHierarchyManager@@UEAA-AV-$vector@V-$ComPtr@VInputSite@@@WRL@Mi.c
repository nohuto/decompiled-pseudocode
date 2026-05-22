/*
 * XREFs of ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x180002BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180001990 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180002FB4 (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180007BB0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyMa.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180084064 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Copy_unchecked@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@00@Z @ 0x180123344 (--$_Copy_unchecked@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV-$ComPtr@VInputS.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180123724 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 **__fastcall InputSiteHierarchyManager::GetInputSiteListToRoot(_QWORD *a1, __int64 **a2, __int64 a3)
{
  __int64 v5; // r9
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  char *v10; // rbx
  __int64 *v11; // rsi
  __int64 *v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  char *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rcx
  __int64 *v19; // r12
  __int64 *v20; // r15
  __int64 v21; // rax
  unsigned __int64 i; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  __int128 *v28; // rsi
  __int64 *v29; // r9
  unsigned __int64 v30; // rcx
  __int64 *v31; // r14
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r13
  __int64 v37; // r12
  __int64 *v38; // rbx
  __int64 *v39; // r12
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rbx
  int v43[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v44; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v45; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v47; // [rsp+90h] [rbp+40h] BYREF
  __int64 v48; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+58h]

  v48 = a3;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  v5 = v48;
  v6 = (_QWORD *)(a1[13]
                + 16
                * ((0x100000001B3LL
                  * (HIBYTE(v48) ^ (0x100000001B3LL
                                  * (BYTE6(v48) ^ (0x100000001B3LL
                                                 * (BYTE5(v48) ^ (0x100000001B3LL
                                                                * (BYTE4(v48) ^ (0x100000001B3LL
                                                                               * (BYTE3(v48) ^ (0x100000001B3LL
                                                                                              * (BYTE2(v48) ^ (0x100000001B3LL * (BYTE1(v48) ^ (0x100000001B3LL * ((unsigned __int8)v48 ^ 0xCBF29CE484222325uLL)))))))))))))))) & a1[16]));
  v7 = v6[1];
  v8 = a1[11];
  if ( v7 != v8 )
  {
    while ( v48 != *(_QWORD *)(v7 + 16) )
    {
      if ( v7 == *v6 )
        goto LABEL_18;
      v7 = *(_QWORD *)(v7 + 8);
    }
    if ( !v7 )
      v7 = a1[11];
    if ( v7 != v8 )
    {
      v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                        (__int64)(a1 + 10),
                        (__int64)v43,
                        (unsigned __int8 *)&v48);
      v10 = 0LL;
      *a2 = 0LL;
      a2[1] = 0LL;
      a2[2] = 0LL;
      v11 = *(__int64 **)(v9 + 24);
      v12 = *(__int64 **)(v9 + 32);
      if ( v11 == v12 )
        return a2;
      v13 = v12 - v11;
      if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      v14 = 8 * v13;
      if ( 8 * v13 >= 0x1000 )
      {
        v15 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * v13);
      }
      else
      {
        if ( !v14 )
          goto LABEL_12;
        v15 = (char *)operator new(8 * v13);
      }
      v10 = v15;
LABEL_12:
      *a2 = (__int64 *)v10;
      a2[1] = (__int64 *)v10;
      a2[2] = (__int64 *)&v10[v14];
      v16 = *a2;
      do
      {
        v17 = *v11;
        *v16 = *v11;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        ++v16;
        ++v11;
      }
      while ( v11 != v12 );
      a2[1] = v16;
      return a2;
    }
  }
LABEL_18:
  v44 = 0LL;
  v19 = 0LL;
  v45 = 0LL;
  v47 = v48;
  v20 = 0LL;
  if ( v48 )
  {
    do
    {
      v21 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 8; ++i )
        v21 = 0x100000001B3LL * (*((unsigned __int8 *)&v47 + i) ^ (unsigned __int64)v21);
      v23 = (_QWORD *)(a1[5] + 16 * (v21 & a1[8]));
      v24 = v23[1];
      if ( v24 == a1[3] )
        break;
      while ( v5 != *(_QWORD *)(v24 + 16) )
      {
        if ( v24 == *v23 )
          goto LABEL_30;
        v24 = *(_QWORD *)(v24 + 8);
      }
      if ( !v24 )
        break;
      v25 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
              a1 + 2,
              v43,
              &v47);
      v26 = *(_QWORD *)v25;
      v27 = *(_QWORD *)(*(_QWORD *)v25 + 24LL);
      if ( !v27 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x25,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsitehierarchymanager.cpp",
          (const char *)0x8000FFFFLL,
          v43[0]);
      if ( v20 == v19 )
      {
        std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
          &v44,
          v20,
          v26 + 24);
        v20 = (__int64 *)*((_QWORD *)&v44 + 1);
        v19 = v45;
      }
      else
      {
        *v20 = v27;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v20++);
        *((_QWORD *)&v44 + 1) = v20;
      }
      v5 = *(_QWORD *)(v26 + 32);
      v47 = v5;
    }
    while ( v5 );
  }
LABEL_30:
  v28 = (__int128 *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                  (__int64)(a1 + 10),
                                  (__int64)v43,
                                  (unsigned __int8 *)&v48)
                   + 24LL);
  if ( v28 != &v44 )
  {
    v29 = (__int64 *)v44;
    v30 = (__int64)((__int64)v20 - v44) >> 3;
    v31 = (__int64 *)*((_QWORD *)v28 + 1);
    v32 = *(_QWORD *)v28;
    v49 = v32;
    v33 = ((__int64)v31 - v32) >> 3;
    if ( v30 <= v33 )
    {
      v42 = v32 + 8 * v30;
      std::_Copy_unchecked<Microsoft::WRL::ComPtr<InputSite> *,Microsoft::WRL::ComPtr<InputSite> *>(v44, v20);
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v42, *((_QWORD *)v28 + 1));
      *((_QWORD *)v28 + 1) = v42;
    }
    else
    {
      v34 = (*((_QWORD *)v28 + 2) - v32) >> 3;
      if ( v30 > v34 )
      {
        if ( v30 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Xlength_error("vector too long");
        v35 = v34 >> 1;
        if ( v34 > 0x1FFFFFFFFFFFFFFFLL - (v34 >> 1) )
        {
          v36 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v36 = v34 + v35;
          if ( v34 + v35 < v30 )
            v36 = (__int64)((__int64)v20 - v44) >> 3;
        }
        if ( v32 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v32, v31);
          std::_Deallocate<16,0>(*(_QWORD *)v28, 8 * ((__int64)(*((_QWORD *)v28 + 2) - *(_QWORD *)v28) >> 3));
          *(_QWORD *)v28 = 0LL;
          *((_QWORD *)v28 + 1) = 0LL;
          *((_QWORD *)v28 + 2) = 0LL;
          v29 = (__int64 *)v44;
        }
        if ( v36 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v37 = v36;
        if ( 8 * v36 >= 0x1000 )
        {
          v31 = (__int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * v36);
          v29 = (__int64 *)v44;
        }
        else if ( v37 * 8 )
        {
          v31 = (__int64 *)operator new(8 * v36);
          v29 = (__int64 *)v44;
        }
        else
        {
          v31 = 0LL;
        }
        *(_QWORD *)v28 = v31;
        *((_QWORD *)v28 + 1) = v31;
        *((_QWORD *)v28 + 2) = &v31[v37];
        v33 = 0LL;
        v49 = *(_QWORD *)v28;
      }
      v38 = &v29[v33];
      v39 = v29;
      if ( v29 != v38 )
      {
        v41 = v49 - (_QWORD)v29;
        do
        {
          Microsoft::WRL::ComPtr<InputSite>::operator=((char *)v39 + v41, v39);
          ++v39;
        }
        while ( v39 != v38 );
        v31 = (__int64 *)*((_QWORD *)v28 + 1);
        v20 = (__int64 *)*((_QWORD *)&v44 + 1);
      }
      for ( ; v38 != v20; ++v38 )
      {
        v40 = *v38;
        *v31 = *v38;
        if ( v40 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
        ++v31;
      }
      *((_QWORD *)v28 + 1) = v31;
    }
  }
  *a2 = (__int64 *)v44;
  a2[1] = v20;
  a2[2] = v45;
  return a2;
}
