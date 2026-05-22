/*
 * XREFs of ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x1800369F0
 * Callers:
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x180036894 (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequire.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x18019FC48 (--$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCo.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Emplace_reallocate<ContextualProcessorManager::ContextualProcessorEntry>(
        char **a1,
        unsigned __int64 a2,
        char *a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  char *v13; // r15
  unsigned __int64 v14; // r14
  char *v15; // rcx
  char *v16; // r8
  char *v17; // rcx
  char *i; // rdx
  char *v19; // rbx
  char *v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v24; // [rsp+20h] [rbp-58h]
  char *v25; // [rsp+30h] [rbp-48h]
  void *v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp+10h] BYREF
  char *v28; // [rsp+98h] [rbp+20h]

  v27 = a2;
  v4 = a2;
  v6 = a2 - (_QWORD)*a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v26 = (void *)0xFFFFFFFFFFFFFFFLL;
    v12 = -16LL;
    v24 = -16LL;
LABEL_30:
    v13 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v12);
    v28 = v13;
    v4 = v27;
    goto LABEL_10;
  }
  v11 = v7 + 1;
  if ( v10 + v9 >= v8 )
    v11 = v10 + v9;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v12 = 16 * v11;
  v24 = 16 * v11;
  v26 = (void *)v11;
  if ( 16 * v11 >= 0x1000 )
    goto LABEL_30;
  if ( v12 )
  {
    v13 = (char *)operator new(16 * v11);
    v28 = v13;
    v4 = v27;
  }
  else
  {
    v13 = 0LL;
    v28 = 0LL;
  }
  v26 = (void *)v11;
LABEL_10:
  v14 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = &v13[v14];
  v25 = v15;
  *(_QWORD *)v15 = 0LL;
  if ( &v13[v14] != a3 )
  {
    *(_QWORD *)v15 = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0LL;
  }
  *((_DWORD *)v15 + 2) = *((_DWORD *)a3 + 2);
  v16 = a1[1];
  v17 = *a1;
  if ( (char *)v4 == v16 )
  {
    for ( i = v13; v17 != v16; v17 += 16 )
    {
      *(_QWORD *)i = 0LL;
      if ( i != v17 )
      {
        *(_QWORD *)i = *(_QWORD *)v17;
        *(_QWORD *)v17 = 0LL;
      }
      *((_DWORD *)i + 2) = *((_DWORD *)v17 + 2);
      i += 16;
    }
  }
  else
  {
    std::_Uninitialized_move<ContextualProcessorManager::ContextualProcessorEntry *>(v17, v4, v13);
    std::_Uninitialized_move<ContextualProcessorManager::ContextualProcessorEntry *>(v27, a1[1], &v13[v14 + 16]);
  }
  v19 = *a1;
  if ( *a1 )
  {
    v20 = a1[1];
    if ( v19 != v20 )
    {
      do
      {
        v21 = *(_QWORD *)v19;
        if ( *(_QWORD *)v19 )
        {
          *(_QWORD *)v19 = 0LL;
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 16LL))(v21, i);
        }
        v19 += 16;
      }
      while ( v19 != v20 );
      v19 = *a1;
    }
    v22 = (a1[2] - v19) & 0xFFFFFFFFFFFFFFF0uLL;
    v27 = v22;
    v26 = v19;
    if ( v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, &v27);
      v22 = v27;
      v19 = (char *)v26;
    }
    operator delete(v19, v22);
  }
  *a1 = v13;
  a1[1] = &v13[16 * v8];
  a1[2] = &v13[v24];
  return v25;
}
