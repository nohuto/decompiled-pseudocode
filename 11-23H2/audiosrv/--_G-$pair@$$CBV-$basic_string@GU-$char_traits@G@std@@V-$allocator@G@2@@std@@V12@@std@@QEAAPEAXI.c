/*
 * XREFs of ??_G?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAAPEAXI@Z @ 0x18015F694
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x18005C4AC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18015F514 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_18015F514.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::pair<std::wstring const,std::wstring>::`scalar deleting destructor'(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rcx
  unsigned __int64 v4; // rdx
  void *v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+10h] BYREF
  void *v8; // [rsp+40h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 >= 8 )
  {
    v3 = *(void **)(a1 + 32);
    v7 = 2 * v1 + 2;
    v8 = v3;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v7);
      v3 = v8;
    }
    operator delete(v3);
  }
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 >= 8 )
  {
    v5 = *(void **)a1;
    v7 = 2 * v4 + 2;
    v8 = v5;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v7);
      v5 = v8;
    }
    operator delete(v5);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = a1;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 7LL;
  return result;
}
