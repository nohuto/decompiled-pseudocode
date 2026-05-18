/*
 * XREFs of ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800A18C0
 * Callers:
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800A0728 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ??$_Emplace_back_internal@_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX$$QEA_K@Z @ 0x1800A07DC (--$_Emplace_back_internal@_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX$$QEA_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017058 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_value_construct_n_unchecked1@PEAPEA_K_K@std@@YAPEAPEA_KPEAPEA_K_K@Z @ 0x1800A0904 (--$_Uninitialized_value_construct_n_unchecked1@PEAPEA_K_K@std@@YAPEAPEA_KPEAPEA_K_K@Z.c)
 *     ??$uninitialized_copy@PEAPEA_KPEAPEA_K@std@@YAPEAPEA_KQEAPEA_K0PEAPEA_K@Z @ 0x1800A0970 (--$uninitialized_copy@PEAPEA_KPEAPEA_K@std@@YAPEAPEA_KQEAPEA_K0PEAPEA_K@Z.c)
 */

void __fastcall std::deque<unsigned __int64>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 size_of; // rax
  char *v7; // r14
  void *v8; // rax
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 != v1 && v3 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2LL;
  }
  v5 = a1[3] >> 1;
  size_of = std::_Get_size_of_n<8>(v3);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8 = (void *)std::uninitialized_copy<unsigned __int64 * *,unsigned __int64 * *>(
                 (void *)(a1[1] + 8 * v5),
                 a1[1] + 8LL * a1[2],
                 &v7[8 * v5]);
  v9 = (void *)a1[1];
  if ( v5 > v4 )
  {
    std::uninitialized_copy<unsigned __int64 * *,unsigned __int64 * *>(v9, (__int64)v9 + 8 * v4, v8);
    v11 = std::uninitialized_copy<unsigned __int64 * *,unsigned __int64 * *>(
            (void *)(a1[1] + 8 * v4),
            a1[1] + 8 * v5,
            v7);
    v5 = v4;
  }
  else
  {
    v10 = std::uninitialized_copy<unsigned __int64 * *,unsigned __int64 * *>(v9, (__int64)v9 + 8 * v5, v8);
    std::_Uninitialized_value_construct_n_unchecked1<unsigned __int64 * *,unsigned __int64>(v10, v4 - v5);
    v11 = (__int64)v7;
  }
  std::_Uninitialized_value_construct_n_unchecked1<unsigned __int64 * *,unsigned __int64>(v11, v5);
  v12 = (void *)a1[1];
  if ( v12 )
    std::_Deallocate<16,0>(v12, 8LL * a1[2]);
  a1[1] = v7;
  a1[2] += v4;
}
