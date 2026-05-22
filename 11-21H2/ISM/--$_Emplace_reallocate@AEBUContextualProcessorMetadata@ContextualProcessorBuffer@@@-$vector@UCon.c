/*
 * XREFs of ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x1800045B0
 * Callers:
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800166D0 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1801A2150 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 * Callees:
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x1800041E0 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??$emplace@AEBU?$pair@$$CBKW4ContextualProcessorState@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKW4ContextualProcessorState@@@1@@Z @ 0x180004D30 (--$emplace@AEBU-$pair@$$CBKW4ContextualProcessorState@@@std@@@-$_Hash@V-$_Umap_traits@KW4Context.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18013CC84 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x1801A10E4 (--$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@U.c)
 *     ??$emplace@AEBU?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKW4ContextualProcessorDecision@@@1@@Z @ 0x1801A1384 (--$emplace@AEBU-$pair@$$CBKW4ContextualProcessorDecision@@@std@@@-$_Hash@V-$_Umap_traits@KW4Cont.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
ContextualProcessorBuffer::ContextualProcessorMetadata *__fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        __int64 **a1,
        __int64 *a2,
        const struct ContextualProcessorBuffer::ContextualProcessorMetadata *a3)
{
  __int64 **v5; // r12
  __int64 *v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  size_t v14; // rcx
  char *v15; // r15
  __int64 *v16; // rax
  __int64 *v17; // rsi
  __int64 *v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // r15
  _QWORD *v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r12
  size_t v25; // r13
  unsigned __int64 *v26; // rdi
  unsigned __int64 *v27; // rax
  _QWORD **v28; // rdi
  _QWORD *j; // rbx
  _QWORD *v30; // rax
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r12
  size_t v34; // r13
  unsigned __int64 *v35; // rdi
  unsigned __int64 *v36; // rax
  _QWORD **v37; // rdi
  _QWORD *k; // rbx
  _QWORD *v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // r12
  size_t v43; // r13
  unsigned __int64 *v44; // rdi
  unsigned __int64 *v45; // rax
  _QWORD **v46; // rdi
  _QWORD *m; // rbx
  __int64 v48; // rcx
  __int64 *v49; // rsi
  __int64 *v50; // r15
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  void *v53; // rcx
  unsigned __int64 v54; // rdx
  _QWORD **v55; // rcx
  _QWORD *v56; // rcx
  void *v57; // rcx
  unsigned __int64 v58; // rdx
  _QWORD **v59; // rcx
  _QWORD *v60; // rcx
  void *v61; // rcx
  unsigned __int64 v62; // rdx
  _QWORD **v63; // rcx
  _QWORD *v64; // rcx
  _QWORD *v65; // rdi
  __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  void *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned __int64 v72; // rcx
  void *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  void *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  _QWORD *v81; // rdi
  _QWORD *v82; // rdi
  __int64 v83; // [rsp+20h] [rbp-D8h]
  __int64 v84; // [rsp+20h] [rbp-D8h]
  ContextualProcessorBuffer::ContextualProcessorMetadata *v85; // [rsp+30h] [rbp-C8h]
  char *i; // [rsp+50h] [rbp-A8h]
  __int64 *v87; // [rsp+60h] [rbp-98h]
  __int64 v88; // [rsp+68h] [rbp-90h]
  char v89[16]; // [rsp+88h] [rbp-70h] BYREF
  char v90[16]; // [rsp+98h] [rbp-60h] BYREF
  char v91[80]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v92; // [rsp+100h] [rbp+8h] BYREF
  void *v93; // [rsp+108h] [rbp+10h] BYREF
  char *v94; // [rsp+118h] [rbp+20h]

  v92 = (unsigned __int64)a1;
  v5 = a1;
  v6 = *a1;
  v7 = ((char *)a2 - (char *)*a1) / 224;
  v8 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a1[1] - (char *)*a1) >> 5);
  v9 = 0x124924924924924LL;
  v93 = (void *)0x124924924924924LL;
  if ( v8 == 0x124924924924924LL )
    std::_Xlength_error("vector too long");
  v10 = v8 + 1;
  v88 = v8 + 1;
  v11 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a1[2] - (char *)v6) >> 5);
  if ( v11 > 0x124924924924924LL - (v11 >> 1) )
  {
    v83 = 0x124924924924924LL;
    v14 = -128LL;
LABEL_81:
    v15 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v14);
    v94 = v15;
    goto LABEL_10;
  }
  v12 = (v11 >> 1) + v11;
  v13 = v10;
  if ( v12 >= v10 )
    v13 = v12;
  if ( v13 > 0x124924924924924LL )
    std::_Throw_bad_array_new_length();
  v9 = v13;
  v93 = (void *)v13;
  v14 = 224 * v13;
  v83 = v9;
  if ( v14 >= 0x1000 )
    goto LABEL_81;
  if ( v14 )
  {
    v15 = (char *)operator new(v14);
    v94 = v15;
  }
  else
  {
    v15 = 0LL;
    v94 = 0LL;
  }
  v83 = v9;
  v93 = (void *)v9;
LABEL_10:
  v85 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)&v15[224 * v7];
  ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(v85, a3);
  v16 = v5[1];
  v87 = v16;
  v17 = *v5;
  if ( a2 == v16 )
  {
    v18 = (__int64 *)v15;
    for ( i = v15; ; i += 224 )
    {
      if ( v17 == v16 )
      {
        v5 = (__int64 **)v92;
        v9 = (__int64)v93;
        v15 = v94;
        goto LABEL_53;
      }
      v19 = *v17;
      *v18 = *v17;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v20 = v18 + 1;
      *((_DWORD *)v18 + 2) = *((_DWORD *)v17 + 2);
      v18[2] = 0LL;
      v18[3] = 0LL;
      v21 = operator new(0x18uLL);
      *v21 = v21;
      v21[1] = v21;
      v18[2] = (__int64)v21;
      v18[4] = 0LL;
      v18[5] = 0LL;
      v18[6] = 0LL;
      v18[7] = v17[7];
      v18[8] = v17[8];
      v22 = v18[2];
      v23 = (v17[5] - v17[4]) >> 3;
      v24 = v18[5] >> 3;
      if ( v24 < v23 )
        break;
      v72 = (unsigned __int64)(v18[5] + 7) >> 3;
      if ( v72 )
        memset64(0LL, v22, v72);
LABEL_24:
      v28 = (_QWORD **)v17[2];
      for ( j = *v28; j != v28; j = (_QWORD *)*j )
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::emplace<std::pair<unsigned long const,enum ContextualProcessorState> const &>(
          v20,
          v91,
          j + 2);
      *((_DWORD *)i + 18) = *((_DWORD *)v17 + 18);
      *((_QWORD *)i + 10) = 0LL;
      *((_QWORD *)i + 11) = 0LL;
      v30 = operator new(0x18uLL);
      *v30 = v30;
      v30[1] = v30;
      *((_QWORD *)i + 10) = v30;
      *((_QWORD *)i + 12) = 0LL;
      *((_QWORD *)i + 13) = 0LL;
      *((_QWORD *)i + 14) = 0LL;
      *((_QWORD *)i + 15) = v17[15];
      *((_QWORD *)i + 16) = v17[16];
      v31 = (v17[13] - v17[12]) >> 3;
      v32 = *((_QWORD *)i + 10);
      v33 = *((__int64 *)i + 13) >> 3;
      if ( v33 < v31 )
      {
        if ( v31 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v34 = 8 * v31;
        if ( v34 >= 0x1000 )
        {
          if ( v34 + 39 < v34 )
            std::_Throw_bad_array_new_length();
          v73 = operator new(v34 + 39);
          if ( v73 )
          {
            v35 = (unsigned __int64 *)(((unsigned __int64)v73 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *(v35 - 1) = (unsigned __int64)v73;
            goto LABEL_31;
          }
          _o__invalid_parameter_noinfo_noreturn(v75, v74);
          __debugbreak();
        }
        else if ( v34 )
        {
          v35 = (unsigned __int64 *)operator new(v34);
LABEL_31:
          if ( v33 )
            std::_Deallocate<16,0>(*((_QWORD *)i + 12), 8 * v33);
          *((_QWORD *)i + 12) = v35;
          v36 = &v35[v34 / 8];
          *((_QWORD *)i + 13) = &v35[v34 / 8];
          for ( *((_QWORD *)i + 14) = &v35[v34 / 8]; v35 != v36; ++v35 )
            *v35 = v32;
          goto LABEL_35;
        }
        v35 = 0LL;
        goto LABEL_31;
      }
      v76 = (unsigned __int64)(*((_QWORD *)i + 13) + 7LL) >> 3;
      if ( v76 )
        memset64(0LL, v32, v76);
LABEL_35:
      v37 = (_QWORD **)v17[10];
      for ( k = *v37; k != v37; k = (_QWORD *)*k )
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
          i + 72,
          v90,
          k + 2);
      *((_DWORD *)i + 34) = *((_DWORD *)v17 + 34);
      *((_DWORD *)i + 36) = *((_DWORD *)v17 + 36);
      *((_QWORD *)i + 19) = 0LL;
      *((_QWORD *)i + 20) = 0LL;
      v39 = operator new(0x18uLL);
      *v39 = v39;
      v39[1] = v39;
      *((_QWORD *)i + 19) = v39;
      *((_QWORD *)i + 21) = 0LL;
      *((_QWORD *)i + 22) = 0LL;
      *((_QWORD *)i + 23) = 0LL;
      *((_QWORD *)i + 24) = v17[24];
      *((_QWORD *)i + 25) = v17[25];
      v40 = *((_QWORD *)i + 19);
      v41 = (v17[22] - v17[21]) >> 3;
      v42 = *((__int64 *)i + 22) >> 3;
      if ( v42 < v41 )
      {
        if ( v41 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v43 = 8 * v41;
        if ( v43 >= 0x1000 )
        {
          if ( v43 + 39 < v43 )
            std::_Throw_bad_array_new_length();
          v77 = operator new(v43 + 39);
          if ( v77 )
          {
            v44 = (unsigned __int64 *)(((unsigned __int64)v77 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *(v44 - 1) = (unsigned __int64)v77;
            goto LABEL_42;
          }
          _o__invalid_parameter_noinfo_noreturn(v79, v78);
          __debugbreak();
        }
        else if ( v43 )
        {
          v44 = (unsigned __int64 *)operator new(v43);
LABEL_42:
          if ( v42 )
            std::_Deallocate<16,0>(*((_QWORD *)i + 21), 8 * v42);
          *((_QWORD *)i + 21) = v44;
          v45 = &v44[v43 / 8];
          *((_QWORD *)i + 22) = &v44[v43 / 8];
          for ( *((_QWORD *)i + 23) = &v44[v43 / 8]; v44 != v45; ++v44 )
            *v44 = v40;
          goto LABEL_46;
        }
        v44 = 0LL;
        goto LABEL_42;
      }
      v80 = (unsigned __int64)(*((_QWORD *)i + 22) + 7LL) >> 3;
      if ( v80 )
        memset64(0LL, v40, v80);
LABEL_46:
      v46 = (_QWORD **)v17[19];
      for ( m = *v46; m != v46; m = (_QWORD *)*m )
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::emplace<std::pair<unsigned long const,enum ContextualProcessorDecision> const &>(
          i + 144,
          v89,
          m + 2);
      v48 = v17[26];
      *((_QWORD *)i + 26) = v48;
      if ( v48 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
      i[216] = *((_BYTE *)v17 + 216);
      v18 = (__int64 *)(i + 224);
      v17 += 28;
      v16 = v87;
    }
    if ( v23 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v25 = 8 * v23;
    if ( v25 >= 0x1000 )
    {
      if ( v25 + 39 < v25 )
        std::_Throw_bad_array_new_length();
      v69 = operator new(v25 + 39);
      if ( v69 )
      {
        v26 = (unsigned __int64 *)(((unsigned __int64)v69 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v26 - 1) = (unsigned __int64)v69;
        goto LABEL_20;
      }
      _o__invalid_parameter_noinfo_noreturn(v71, v70);
      __debugbreak();
    }
    else if ( v25 )
    {
      v26 = (unsigned __int64 *)operator new(v25);
LABEL_20:
      if ( v24 )
        std::_Deallocate<16,0>(v20[3], 8 * v24);
      v20[3] = v26;
      v27 = &v26[v25 / 8];
      v20[4] = &v26[v25 / 8];
      for ( v20[5] = &v26[v25 / 8]; v26 != v27; ++v26 )
        *v26 = v22;
      goto LABEL_24;
    }
    v26 = 0LL;
    goto LABEL_20;
  }
  std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *>(
    *v5,
    a2,
    v15,
    v5,
    v83,
    &v15[224 * v7]);
  std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *>(
    a2,
    v5[1],
    (char *)v85 + 224,
    v5,
    v84,
    v15);
LABEL_53:
  v49 = *v5;
  if ( *v5 )
  {
    v50 = v5[1];
    if ( v49 != v50 )
    {
      v51 = v49 + 22;
      do
      {
        v52 = v51[4];
        if ( v52 )
        {
          v51[4] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
        }
        v53 = (void *)*(v51 - 1);
        v54 = 8 * ((__int64)(*v51 - (_QWORD)v53) >> 3);
        v92 = v54;
        v93 = v53;
        if ( v54 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v93, &v92);
          v54 = v92;
          v53 = v93;
        }
        operator delete(v53, v54);
        *(v51 - 1) = 0LL;
        *v51 = 0LL;
        v51[1] = 0LL;
        v55 = (_QWORD **)*(v51 - 3);
        *v55[1] = 0LL;
        v56 = *v55;
        if ( v56 )
        {
          do
          {
            v81 = (_QWORD *)*v56;
            std::_Deallocate<16,0>(v56, 24LL);
            v56 = v81;
          }
          while ( v81 );
        }
        operator delete((void *)*(v51 - 3), 0x18uLL);
        v57 = (void *)*(v51 - 10);
        v58 = 8 * ((__int64)(*(v51 - 9) - (_QWORD)v57) >> 3);
        v92 = v58;
        v93 = v57;
        if ( v58 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v93, &v92);
          v58 = v92;
          v57 = v93;
        }
        operator delete(v57, v58);
        *(v51 - 10) = 0LL;
        *(v51 - 9) = 0LL;
        *(v51 - 8) = 0LL;
        v59 = (_QWORD **)*(v51 - 12);
        *v59[1] = 0LL;
        v60 = *v59;
        if ( v60 )
        {
          do
          {
            v82 = (_QWORD *)*v60;
            std::_Deallocate<16,0>(v60, 24LL);
            v60 = v82;
          }
          while ( v82 );
        }
        operator delete((void *)*(v51 - 12), 0x18uLL);
        v61 = (void *)*(v51 - 18);
        v62 = 8 * ((__int64)(*(v51 - 17) - (_QWORD)v61) >> 3);
        v92 = v62;
        v93 = v61;
        if ( v62 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v93, &v92);
          v62 = v92;
          v61 = v93;
        }
        operator delete(v61, v62);
        *(v51 - 18) = 0LL;
        *(v51 - 17) = 0LL;
        *(v51 - 16) = 0LL;
        v63 = (_QWORD **)*(v51 - 20);
        *v63[1] = 0LL;
        v64 = *v63;
        if ( v64 )
        {
          do
          {
            v65 = (_QWORD *)*v64;
            operator delete(v64, 0x18uLL);
            v64 = v65;
          }
          while ( v65 );
        }
        operator delete((void *)*(v51 - 20), 0x18uLL);
        v66 = *v49;
        if ( *v49 )
        {
          *v49 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
        }
        v49 += 28;
        v51 += 28;
      }
      while ( v49 != v50 );
      v49 = *v5;
    }
    v67 = 32 * (((char *)v5[2] - (char *)v49) >> 5);
    v92 = v67;
    v93 = v49;
    if ( v67 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v93, &v92);
      v67 = v92;
      v49 = (__int64 *)v93;
    }
    operator delete(v49, v67);
    v15 = v94;
  }
  *v5 = (__int64 *)v15;
  v5[1] = (__int64 *)&v15[224 * v88];
  v5[2] = (__int64 *)&v15[224 * v9];
  return v85;
}
