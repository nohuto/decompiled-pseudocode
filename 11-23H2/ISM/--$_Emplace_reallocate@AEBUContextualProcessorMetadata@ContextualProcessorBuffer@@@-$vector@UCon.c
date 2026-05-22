/*
 * XREFs of ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180046B30
 * Callers:
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18001DBF0 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1801C00B0 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$emplace@AEBU?$pair@$$CBKW4ContextualProcessorState@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKW4ContextualProcessorState@@@1@@Z @ 0x18004725C (--$emplace@AEBU-$pair@$$CBKW4ContextualProcessorState@@@std@@@-$_Hash@V-$_Umap_traits@KW4Context.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x1800473E0 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18015BE84 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x1801BF1A0 (--$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@U.c)
 *     ??$emplace@AEBU?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKW4ContextualProcessorDecision@@@1@@Z @ 0x1801BF440 (--$emplace@AEBU-$pair@$$CBKW4ContextualProcessorDecision@@@std@@@-$_Hash@V-$_Umap_traits@KW4Cont.c)
 */

// Hidden C++ exception states: #wind=13
char *__fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        _QWORD *a1,
        __int64 *a2,
        const struct ContextualProcessorBuffer::ContextualProcessorMetadata *a3)
{
  __int64 **v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  char *v12; // r13
  char *v13; // r14
  __int64 *v14; // rax
  __int64 *v15; // r15
  char *v16; // rdi
  __int64 v17; // rcx
  char *v18; // r14
  _QWORD *v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r13
  size_t v23; // r12
  unsigned __int64 *v24; // rdi
  unsigned __int64 *v25; // rax
  _QWORD **v26; // rbx
  _QWORD *j; // rdi
  _QWORD *v28; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r12
  size_t v32; // r13
  unsigned __int64 *v33; // rdi
  unsigned __int64 *v34; // rax
  _QWORD **v35; // rdi
  _QWORD *k; // rbx
  _QWORD *v37; // rax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r12
  size_t v41; // r13
  unsigned __int64 *v42; // rdi
  unsigned __int64 *v43; // rax
  _QWORD **v44; // rdi
  _QWORD *m; // rbx
  __int64 v46; // rcx
  __int64 *v47; // r14
  __int64 *v48; // r15
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  void *v51; // rcx
  void *v52; // rdx
  _QWORD **v53; // rcx
  _QWORD *v54; // rcx
  void *v55; // rcx
  void *v56; // rdx
  _QWORD **v57; // rcx
  _QWORD *v58; // rcx
  void *v59; // rcx
  void *v60; // rdx
  _QWORD **v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rdi
  __int64 v64; // rcx
  void *v65; // rcx
  void *v66; // rdx
  void *v68; // rax
  unsigned __int64 v69; // rcx
  void *v70; // rax
  unsigned __int64 v71; // rcx
  void *v72; // rax
  unsigned __int64 v73; // rcx
  _QWORD *v74; // rdi
  _QWORD *v75; // rdi
  char *v76; // [rsp+20h] [rbp-C8h]
  char *i; // [rsp+38h] [rbp-B0h]
  __int64 *v78; // [rsp+48h] [rbp-A0h]
  __int64 v79; // [rsp+50h] [rbp-98h]
  __int64 v80; // [rsp+58h] [rbp-90h]
  char *v81; // [rsp+60h] [rbp-88h]
  char v82[16]; // [rsp+78h] [rbp-70h] BYREF
  char v83[16]; // [rsp+88h] [rbp-60h] BYREF
  char v84[80]; // [rsp+98h] [rbp-50h] BYREF
  void *v85; // [rsp+F0h] [rbp+8h] BYREF
  void *v86; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v87; // [rsp+108h] [rbp+20h]

  v85 = a1;
  v5 = (__int64 **)a1;
  v6 = ((__int64)a2 - *a1) / 224;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[1] - *a1) >> 5);
  if ( v7 == 0x124924924924924LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v79 = v7 + 1;
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[2] - *a1) >> 5);
  if ( v9 > 0x124924924924924LL - (v9 >> 1) )
  {
    v11 = 0x124924924924924LL;
    v87 = 0x124924924924924LL;
  }
  else
  {
    v10 = (v9 >> 1) + v9;
    v11 = v8;
    if ( v10 >= v8 )
      v11 = v10;
    v87 = v11;
    if ( v11 > 0x124924924924924LL )
      std::_Throw_bad_array_new_length();
  }
  v80 = 224 * v11;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(224 * v11);
  v76 = v12;
  v13 = &v12[224 * v6];
  v81 = v13;
  v86 = v13 + 224;
  ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
    (ContextualProcessorBuffer::ContextualProcessorMetadata *)v13,
    a3);
  v86 = v13;
  v14 = v5[1];
  v78 = v14;
  v15 = *v5;
  if ( a2 == v14 )
  {
    v16 = v12;
    for ( i = v12; ; i += 224 )
    {
      if ( v15 == v14 )
      {
        v5 = (__int64 **)v85;
        v12 = v76;
        goto LABEL_49;
      }
      v17 = *v15;
      *(_QWORD *)v16 = *v15;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v18 = v16 + 8;
      *((_DWORD *)v16 + 2) = *((_DWORD *)v15 + 2);
      *((_QWORD *)v16 + 2) = 0LL;
      *((_QWORD *)v16 + 3) = 0LL;
      v19 = operator new(0x18uLL);
      *v19 = v19;
      v19[1] = v19;
      *((_QWORD *)v16 + 2) = v19;
      *((_QWORD *)v16 + 4) = 0LL;
      *((_QWORD *)v16 + 5) = 0LL;
      *((_QWORD *)v16 + 6) = 0LL;
      *((_QWORD *)v16 + 7) = v15[7];
      *((_QWORD *)v16 + 8) = v15[8];
      v20 = *((_QWORD *)v16 + 2);
      v21 = (v15[5] - v15[4]) >> 3;
      v22 = *((__int64 *)v16 + 5) >> 3;
      if ( v22 < v21 )
        break;
      v69 = (unsigned __int64)(*((_QWORD *)v16 + 5) + 7LL) >> 3;
      if ( v69 )
        memset64(0LL, v20, v69);
LABEL_20:
      v26 = (_QWORD **)v15[2];
      for ( j = *v26; j != v26; j = (_QWORD *)*j )
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::emplace<std::pair<unsigned long const,enum ContextualProcessorState> const &>(
          v18,
          v84,
          j + 2);
      *((_DWORD *)i + 18) = *((_DWORD *)v15 + 18);
      *((_QWORD *)i + 10) = 0LL;
      *((_QWORD *)i + 11) = 0LL;
      v28 = operator new(0x18uLL);
      *v28 = v28;
      v28[1] = v28;
      *((_QWORD *)i + 10) = v28;
      *((_QWORD *)i + 12) = 0LL;
      *((_QWORD *)i + 13) = 0LL;
      *((_QWORD *)i + 14) = 0LL;
      *((_QWORD *)i + 15) = v15[15];
      *((_QWORD *)i + 16) = v15[16];
      v29 = (v15[13] - v15[12]) >> 3;
      v30 = *((_QWORD *)i + 10);
      v31 = *((__int64 *)i + 13) >> 3;
      if ( v31 < v29 )
      {
        if ( v29 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v32 = 8 * v29;
        if ( v32 >= 0x1000 )
        {
          if ( v32 + 39 < v32 )
            std::_Throw_bad_array_new_length();
          v70 = operator new(v32 + 39);
          if ( v70 )
          {
            v33 = (unsigned __int64 *)(((unsigned __int64)v70 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *(v33 - 1) = (unsigned __int64)v70;
            goto LABEL_27;
          }
          _o__invalid_parameter_noinfo_noreturn();
          __debugbreak();
        }
        else if ( v32 )
        {
          v33 = (unsigned __int64 *)operator new(v32);
LABEL_27:
          if ( v31 )
            std::_Deallocate<16,0>(*((void **)i + 12), 8 * v31);
          *((_QWORD *)i + 12) = v33;
          v34 = &v33[v32 / 8];
          *((_QWORD *)i + 13) = &v33[v32 / 8];
          for ( *((_QWORD *)i + 14) = &v33[v32 / 8]; v33 != v34; ++v33 )
            *v33 = v30;
          goto LABEL_31;
        }
        v33 = 0LL;
        goto LABEL_27;
      }
      v71 = (unsigned __int64)(*((_QWORD *)i + 13) + 7LL) >> 3;
      if ( v71 )
        memset64(0LL, v30, v71);
LABEL_31:
      v35 = (_QWORD **)v15[10];
      for ( k = *v35; k != v35; k = (_QWORD *)*k )
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
          i + 72,
          v83,
          k + 2);
      *((_DWORD *)i + 34) = *((_DWORD *)v15 + 34);
      *((_DWORD *)i + 36) = *((_DWORD *)v15 + 36);
      *((_QWORD *)i + 19) = 0LL;
      *((_QWORD *)i + 20) = 0LL;
      v37 = operator new(0x18uLL);
      *v37 = v37;
      v37[1] = v37;
      *((_QWORD *)i + 19) = v37;
      *((_QWORD *)i + 21) = 0LL;
      *((_QWORD *)i + 22) = 0LL;
      *((_QWORD *)i + 23) = 0LL;
      *((_QWORD *)i + 24) = v15[24];
      *((_QWORD *)i + 25) = v15[25];
      v38 = *((_QWORD *)i + 19);
      v39 = (v15[22] - v15[21]) >> 3;
      v40 = *((__int64 *)i + 22) >> 3;
      if ( v40 < v39 )
      {
        if ( v39 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v41 = 8 * v39;
        if ( v41 >= 0x1000 )
        {
          if ( v41 + 39 < v41 )
            std::_Throw_bad_array_new_length();
          v72 = operator new(v41 + 39);
          if ( v72 )
          {
            v42 = (unsigned __int64 *)(((unsigned __int64)v72 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *(v42 - 1) = (unsigned __int64)v72;
            goto LABEL_38;
          }
          _o__invalid_parameter_noinfo_noreturn();
          __debugbreak();
        }
        else if ( v41 )
        {
          v42 = (unsigned __int64 *)operator new(v41);
LABEL_38:
          if ( v40 )
            std::_Deallocate<16,0>(*((void **)i + 21), 8 * v40);
          *((_QWORD *)i + 21) = v42;
          v43 = &v42[v41 / 8];
          *((_QWORD *)i + 22) = &v42[v41 / 8];
          for ( *((_QWORD *)i + 23) = &v42[v41 / 8]; v42 != v43; ++v42 )
            *v42 = v38;
          goto LABEL_42;
        }
        v42 = 0LL;
        goto LABEL_38;
      }
      v73 = (unsigned __int64)(*((_QWORD *)i + 22) + 7LL) >> 3;
      if ( v73 )
        memset64(0LL, v38, v73);
LABEL_42:
      v44 = (_QWORD **)v15[19];
      for ( m = *v44; m != v44; m = (_QWORD *)*m )
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::emplace<std::pair<unsigned long const,enum ContextualProcessorDecision> const &>(
          i + 144,
          v82,
          m + 2);
      v46 = v15[26];
      *((_QWORD *)i + 26) = v46;
      if ( v46 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
      i[216] = *((_BYTE *)v15 + 216);
      v16 = i + 224;
      v15 += 28;
      v14 = v78;
    }
    if ( v21 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v23 = 8 * v21;
    if ( v23 >= 0x1000 )
    {
      if ( v23 + 39 < v23 )
        std::_Throw_bad_array_new_length();
      v68 = operator new(v23 + 39);
      if ( v68 )
      {
        v24 = (unsigned __int64 *)(((unsigned __int64)v68 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v24 - 1) = (unsigned __int64)v68;
        goto LABEL_16;
      }
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    else if ( v23 )
    {
      v24 = (unsigned __int64 *)operator new(v23);
LABEL_16:
      if ( v22 )
        std::_Deallocate<16,0>(*((void **)v18 + 3), 8 * v22);
      *((_QWORD *)v18 + 3) = v24;
      v25 = &v24[v23 / 8];
      *((_QWORD *)v18 + 4) = &v24[v23 / 8];
      for ( *((_QWORD *)v18 + 5) = &v24[v23 / 8]; v24 != v25; ++v24 )
        *v24 = v20;
      goto LABEL_20;
    }
    v24 = 0LL;
    goto LABEL_16;
  }
  std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *>(*v5, a2, v12, v5);
  v86 = v12;
  std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *>(a2, v5[1], v13 + 224, v5);
LABEL_49:
  v47 = *v5;
  if ( *v5 )
  {
    v48 = v5[1];
    if ( v47 != v48 )
    {
      v49 = v47 + 22;
      do
      {
        v50 = v49[4];
        if ( v50 )
        {
          v49[4] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        }
        v51 = (void *)*(v49 - 1);
        v52 = (void *)(8 * ((__int64)(*v49 - (_QWORD)v51) >> 3));
        v85 = v52;
        v86 = v51;
        if ( (unsigned __int64)v52 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v86, (unsigned __int64 *)&v85);
          v52 = v85;
          v51 = v86;
        }
        operator delete(v51, (unsigned __int64)v52);
        *(v49 - 1) = 0LL;
        *v49 = 0LL;
        v49[1] = 0LL;
        v53 = (_QWORD **)*(v49 - 3);
        *v53[1] = 0LL;
        v54 = *v53;
        if ( v54 )
        {
          do
          {
            v74 = (_QWORD *)*v54;
            std::_Deallocate<16,0>(v54, 0x18uLL);
            v54 = v74;
          }
          while ( v74 );
        }
        operator delete((void *)*(v49 - 3), 0x18uLL);
        v55 = (void *)*(v49 - 10);
        v56 = (void *)(8 * ((__int64)(*(v49 - 9) - (_QWORD)v55) >> 3));
        v85 = v56;
        v86 = v55;
        if ( (unsigned __int64)v56 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v86, (unsigned __int64 *)&v85);
          v56 = v85;
          v55 = v86;
        }
        operator delete(v55, (unsigned __int64)v56);
        *(v49 - 10) = 0LL;
        *(v49 - 9) = 0LL;
        *(v49 - 8) = 0LL;
        v57 = (_QWORD **)*(v49 - 12);
        *v57[1] = 0LL;
        v58 = *v57;
        if ( v58 )
        {
          do
          {
            v75 = (_QWORD *)*v58;
            std::_Deallocate<16,0>(v58, 0x18uLL);
            v58 = v75;
          }
          while ( v75 );
        }
        operator delete((void *)*(v49 - 12), 0x18uLL);
        v59 = (void *)*(v49 - 18);
        v60 = (void *)(8 * ((__int64)(*(v49 - 17) - (_QWORD)v59) >> 3));
        v85 = v60;
        v86 = v59;
        if ( (unsigned __int64)v60 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v86, (unsigned __int64 *)&v85);
          v60 = v85;
          v59 = v86;
        }
        operator delete(v59, (unsigned __int64)v60);
        *(v49 - 18) = 0LL;
        *(v49 - 17) = 0LL;
        *(v49 - 16) = 0LL;
        v61 = (_QWORD **)*(v49 - 20);
        *v61[1] = 0LL;
        v62 = *v61;
        if ( v62 )
        {
          do
          {
            v63 = (_QWORD *)*v62;
            operator delete(v62, 0x18uLL);
            v62 = v63;
          }
          while ( v63 );
        }
        operator delete((void *)*(v49 - 20), 0x18uLL);
        v64 = *v47;
        if ( *v47 )
        {
          *v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
        }
        v47 += 28;
        v49 += 28;
      }
      while ( v47 != v48 );
    }
    v65 = *v5;
    v66 = (void *)(32 * (((char *)v5[2] - (char *)*v5) >> 5));
    v86 = v66;
    v85 = v65;
    if ( (unsigned __int64)v66 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v85, (unsigned __int64 *)&v86);
      v65 = v85;
      v66 = v86;
    }
    operator delete(v65, (unsigned __int64)v66);
  }
  *v5 = (__int64 *)v12;
  v5[1] = (__int64 *)&v12[224 * v79];
  v5[2] = (__int64 *)&v12[v80];
  return v81;
}
