/*
 * XREFs of ?_Insert@?$_Buf@G@std@@QEAAXG@Z @ 0x1800418BC
 * Callers:
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18004184C (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Add_range@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x180043638 (-_Add_range@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXGG@Z.c)
 *     ?_Add_char_to_array@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x1801500A8 (-_Add_char_to_array@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x1801504B8 (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180043FA0 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::_Buf<unsigned short>::_Insert(unsigned int *a1, __int16 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // rdi
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 size_of; // rax
  __int64 v9; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  v3 = (__int64 *)(a1 + 2);
  if ( *a1 <= v2 )
  {
    v7 = v2 + 16;
    size_of = std::_Get_size_of_n<2>(v2 + 16);
    v9 = _o_realloc(*v3, size_of);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *v3 = v9;
    *a1 = v7;
  }
  result = *v3;
  *(_WORD *)(*v3 + 2LL * a1[1]++) = a2;
  return result;
}
