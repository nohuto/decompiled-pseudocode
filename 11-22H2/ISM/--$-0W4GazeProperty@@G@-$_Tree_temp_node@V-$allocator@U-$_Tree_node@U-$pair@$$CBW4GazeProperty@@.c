/*
 * XREFs of ??$?0W4GazeProperty@@G@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1801AE740
 * Callers:
 *     ??$_Emplace@W4GazeProperty@@G@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@_N@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1801AE7E4 (--$_Emplace@W4GazeProperty@@G@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180039C40 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _WORD *a5)
{
  size_t size_of; // rax
  _DWORD *v9; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v9;
  v9[7] = *a4;
  *((_WORD *)v9 + 16) = *a5;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
