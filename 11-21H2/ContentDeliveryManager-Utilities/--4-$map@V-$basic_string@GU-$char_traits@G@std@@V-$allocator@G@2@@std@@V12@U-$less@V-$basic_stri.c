/*
 * XREFs of ??4?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18007E5A4
 * Callers:
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180080FA4 (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18006E450 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x1800734A8 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocat_ea_1800734A8.c)
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x18007CB48 (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$cha.c)
 */

// Hidden C++ exception states: #wind=1
void ***__fastcall std::map<std::wstring,std::wstring>::operator=(void ***a1, void ***a2)
{
  void **v4; // rax
  void **v5; // rdi
  void **v6; // rsi
  void **v7; // rdx
  _BYTE *v8; // r8
  _BYTE *i; // rcx
  _QWORD *v10; // rax
  __int64 j; // rcx
  char v13; // [rsp+30h] [rbp+8h]

  if ( a1 != a2 )
  {
    v4 = *a1;
    v5 = (void **)(*a1)[1];
    v6 = v5;
    if ( !*((_BYTE *)v5 + 25) )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
          (__int64)a1,
          v6[2]);
        v6 = (void **)*v6;
        std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>((__int64)(v5 + 4));
        operator delete(v5);
        v5 = v6;
      }
      while ( !*((_BYTE *)v6 + 25) );
      v4 = *a1;
    }
    v4[1] = v4;
    **a1 = *a1;
    (*a1)[2] = *a1;
    a1[1] = 0LL;
    (*a1)[1] = std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Copy_nodes<std::integral_constant<bool,0>>(
                 a1,
                 (__int64)(*a2)[1],
                 *a1,
                 v13);
    a1[1] = a2[1];
    v7 = *a1;
    v8 = (*a1)[1];
    if ( v8[25] )
    {
      *v7 = v7;
      (*a1)[2] = *a1;
    }
    else
    {
      for ( i = *(_BYTE **)v8; !i[25]; i = *(_BYTE **)i )
        v8 = i;
      *v7 = v8;
      v10 = (*a1)[1];
      for ( j = v10[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
        v10 = (_QWORD *)j;
      (*a1)[2] = v10;
    }
  }
  return a1;
}
