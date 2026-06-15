/*
 * XREFs of ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18001450C
 * Callers:
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800157D0 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x18001DA90 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::emplace<IAudioSessionInfo * &,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy> &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v8; // r15
  HANDLE ProcessHeap; // rax
  char *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 i; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  float v20; // xmm0_4
  __int64 v21; // rcx
  float v22; // xmm1_4
  __int64 v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rcx
  char **v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // r8
  _QWORD *v31; // [rsp+20h] [rbp-28h]

  v8 = (_QWORD *)(a1 + 8);
  ProcessHeap = GetProcessHeap();
  v10 = (char *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  *((_QWORD *)v10 + 2) = *a3;
  v11 = *a4;
  *((_QWORD *)v10 + 3) = *a4;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v12 = 0x100000001B3LL * ((unsigned __int8)v10[i + 16] ^ (unsigned __int64)v12);
  v14 = *(_QWORD *)(a1 + 24);
  v15 = *(_QWORD **)(v14 + 16 * (*(_QWORD *)(a1 + 48) & v12) + 8);
  v16 = (_QWORD *)*v8;
  if ( v15 == (_QWORD *)*v8 )
    goto LABEL_16;
  while ( *((_QWORD *)v10 + 2) != v15[2] )
  {
    if ( v15 == *(_QWORD **)(v14 + 16 * (*(_QWORD *)(a1 + 48) & v12)) )
    {
      v16 = v15;
      v15 = 0LL;
      goto LABEL_11;
    }
    v15 = (_QWORD *)v15[1];
  }
  v16 = (_QWORD *)*v15;
LABEL_11:
  if ( !v15 )
  {
LABEL_16:
    v18 = *(_QWORD *)(a1 + 16);
    if ( v18 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v19 = v18 + 1;
    if ( v18 + 1 < 0 )
      v20 = (float)(int)(v19 & 1 | (v19 >> 1)) + (float)(int)(v19 & 1 | (v19 >> 1));
    else
      v20 = (float)(int)v19;
    v21 = *(_QWORD *)(a1 + 56);
    if ( v21 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v21 >> 1);
      v22 = (float)(int)v23 + (float)(int)v23;
    }
    else
    {
      v22 = (float)(int)v21;
    }
    if ( (float)(v20 / v22) > *(float *)a1 )
    {
      std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Rehash_for_1(a1);
      v24 = *(_QWORD *)(a1 + 24);
      v25 = *(_QWORD **)(v24 + 16 * (*(_QWORD *)(a1 + 48) & v12) + 8);
      if ( v25 == (_QWORD *)*v8 )
      {
        v31 = (_QWORD *)*v8;
      }
      else
      {
        while ( *((_QWORD *)v10 + 2) != v25[2] )
        {
          if ( v25 == *(_QWORD **)(v24 + 16 * (*(_QWORD *)(a1 + 48) & v12)) )
          {
            v31 = v25;
            goto LABEL_32;
          }
          v25 = (_QWORD *)v25[1];
        }
        v31 = (_QWORD *)*v25;
      }
LABEL_32:
      v18 = *(_QWORD *)(a1 + 16);
      v16 = v31;
    }
    v26 = (char **)v16[1];
    *(_QWORD *)(a1 + 16) = v18 + 1;
    *(_QWORD *)v10 = v16;
    *((_QWORD *)v10 + 1) = v26;
    *v26 = v10;
    v16[1] = v10;
    v27 = *(_QWORD *)(a1 + 24);
    v28 = 2 * (*(_QWORD *)(a1 + 48) & v12);
    v29 = *(_QWORD **)(v27 + 8 * v28);
    if ( v29 == (_QWORD *)*v8 )
    {
      *(_QWORD *)(v27 + 8 * v28) = v10;
LABEL_38:
      *(_QWORD *)(v27 + 8 * v28 + 8) = v10;
      goto LABEL_39;
    }
    if ( v29 == v16 )
    {
      *(_QWORD *)(v27 + 8 * v28) = v10;
    }
    else if ( *(char ***)(v27 + 8 * v28 + 8) == v26 )
    {
      goto LABEL_38;
    }
LABEL_39:
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v15;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v10 )
  {
    v17 = *((_QWORD *)v10 + 3);
    if ( v17 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 16LL))(v17, v16);
    std::_Deallocate<16,0>(v10, 0x20uLL);
  }
  return a2;
}
