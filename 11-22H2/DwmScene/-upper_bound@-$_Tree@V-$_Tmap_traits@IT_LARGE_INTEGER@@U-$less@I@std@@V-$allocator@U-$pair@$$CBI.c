/*
 * XREFs of ?upper_bound@?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800CB5A8
 * Callers:
 *     ?GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA?AT_LARGE_INTEGER@@I@Z @ 0x1800C9FE0 (-GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA-AT_LARGE_INTEGER@@I@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::upper_bound(
        __int64 *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax

  v3 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *a3 >= *((_DWORD *)v4 + 8) )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  *a2 = v3;
  return a2;
}
