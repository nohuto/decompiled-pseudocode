/*
 * XREFs of ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@AEBG@Z @ 0x18005ABF8
 * Callers:
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBG@Z @ 0x18005AA44 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@$0A.c)
 *     ?at@?$map@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@@std@@QEBAAEBIAEBG@Z @ 0x18005AEE0 (-at@-$map@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@@std@@QEBAAEBIAEBG@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@@2@AEBG@Z @ 0x18005AF30 (-find@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@$0A@@std@@@st.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int16 v5; // r8
  int v6; // eax

  v3 = qword_180268CA0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_WORD *)v4 + 14) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
