/*
 * XREFs of ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180088008
 * Callers:
 *     ??$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAX$$QEAW4NodeType@JSONOutputArchive@cereal@@@Z @ 0x180086C28 (--$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@-$deque@W4NodeType@JSONOutputArc.c)
 *     ??$_Emplace_back_internal@I@?$deque@IV?$allocator@I@std@@@std@@AEAAX$$QEAI@Z @ 0x180086CEC (--$_Emplace_back_internal@I@-$deque@IV-$allocator@I@std@@@std@@AEAAX$$QEAI@Z.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1802DE4C0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

void *__fastcall std::deque<unsigned int>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r15
  size_t v6; // rcx
  char *v7; // rax
  char *v8; // r14
  __int64 v9; // r12
  size_t v10; // rbx
  const void *v11; // rdx
  char *v12; // rbx
  size_t v13; // r8
  char *v14; // rcx
  void *result; // rax
  __int64 v16; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( 1 )
  {
    v4 = v2 - v3;
    if ( v2 >= 8 )
    {
      if ( v4 )
        break;
    }
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v5 = a1[3] >> 2;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v6 = 8 * v2;
  if ( 8 * v2 >= 0x1000 )
  {
    v7 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v6);
    goto LABEL_11;
  }
  if ( v6 )
  {
    v7 = (char *)operator new(v6);
LABEL_11:
    v8 = v7;
    goto LABEL_12;
  }
  v8 = 0LL;
LABEL_12:
  v9 = 8 * v5;
  v10 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v8[8 * v5], (const void *)(a1[1] + 8 * v5), v10);
  v11 = (const void *)a1[1];
  v12 = &v8[8 * v5 + v10];
  if ( v5 > v4 )
  {
    memmove_0(v12, v11, 8 * v4);
    memmove_0(v8, (const void *)(8 * v4 + a1[1]), v9 - 8 * v4);
    v14 = &v8[v9 - 8 * v4];
    v13 = 8 * v4;
  }
  else
  {
    memmove_0(v12, v11, 8 * v5);
    memset_0(&v12[v9], 0, 8 * (v4 - v5));
    v13 = 8 * v5;
    v14 = v8;
  }
  result = memset_0(v14, 0, v13);
  v16 = a1[1];
  if ( v16 )
    result = (void *)std::_Deallocate<16,0>(v16, 8LL * a1[2]);
  a1[1] = v8;
  a1[2] += v4;
  return result;
}
