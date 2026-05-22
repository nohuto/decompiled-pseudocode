/*
 * XREFs of ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x18004A9C0
 * Callers:
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x1800185BC (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequire.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800A9FB8 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1801CB69C (--$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCo.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Emplace_reallocate<ContextualProcessorManager::ContextualProcessorEntry>(
        _QWORD *a1,
        char *a2,
        __int64 a3)
{
  char *v4; // r9
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  char *v13; // rbx
  char *v14; // r12
  char *v15; // r8
  char *v16; // rcx
  char *v17; // rdx
  char *v18; // rdi
  char *v19; // r13
  __int64 v20; // rcx
  char *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v24; // [rsp+20h] [rbp-48h]
  unsigned __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  void *v26; // [rsp+78h] [rbp+10h] BYREF
  char *v27; // [rsp+88h] [rbp+20h]

  v26 = a2;
  v4 = a2;
  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v25 = 0xFFFFFFFFFFFFFFFLL;
    v12 = -16LL;
    v24 = -16LL;
LABEL_31:
    v13 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v12);
    v4 = (char *)v26;
    goto LABEL_10;
  }
  v11 = v7 + 1;
  if ( v10 + v9 >= v8 )
    v11 = v10 + v9;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v12 = 16 * v11;
  v24 = 16 * v11;
  v25 = v11;
  if ( 16 * v11 >= 0x1000 )
    goto LABEL_31;
  if ( v12 )
  {
    v13 = (char *)operator new(v12);
    v4 = (char *)v26;
  }
  else
  {
    v13 = 0LL;
  }
  v25 = v11;
LABEL_10:
  v27 = v13;
  v14 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  *(_QWORD *)v14 = 0LL;
  if ( v14 != (char *)a3 )
  {
    *(_QWORD *)v14 = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0LL;
  }
  *((_DWORD *)v14 + 2) = *(_DWORD *)(a3 + 8);
  v15 = (char *)a1[1];
  v16 = (char *)*a1;
  if ( v4 == v15 )
  {
    v17 = v13;
    while ( v16 != v15 )
    {
      *(_QWORD *)v17 = 0LL;
      if ( v17 != v16 )
      {
        *(_QWORD *)v17 = *(_QWORD *)v16;
        *(_QWORD *)v16 = 0LL;
      }
      *((_DWORD *)v17 + 2) = *((_DWORD *)v16 + 2);
      v17 += 16;
      v16 += 16;
    }
  }
  else
  {
    std::_Uninitialized_move<ContextualProcessorManager::ContextualProcessorEntry *>(v16, v4, v13);
    std::_Uninitialized_move<ContextualProcessorManager::ContextualProcessorEntry *>(v26, a1[1], v14 + 16);
  }
  v18 = (char *)*a1;
  if ( *a1 )
  {
    v19 = (char *)a1[1];
    while ( v18 != v19 )
    {
      v20 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
      {
        *(_QWORD *)v18 = 0LL;
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 16LL))(v20, v17);
      }
      v18 += 16;
    }
    v21 = (char *)*a1;
    v22 = (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL;
    v25 = v22;
    v26 = v21;
    if ( v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, &v25);
      v21 = (char *)v26;
      v22 = v25;
    }
    operator delete(v21, v22);
  }
  *a1 = v13;
  a1[1] = &v13[16 * v8];
  a1[2] = &v13[v24];
  return v14;
}
