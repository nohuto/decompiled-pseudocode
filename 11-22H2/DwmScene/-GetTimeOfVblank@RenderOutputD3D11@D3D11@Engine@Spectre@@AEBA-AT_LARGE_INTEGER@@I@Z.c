/*
 * XREFs of ?GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA?AT_LARGE_INTEGER@@I@Z @ 0x1800C9FE0
 * Callers:
 *     ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC (-ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$alloca.c)
 *     ?at@?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEBAAEBT_LARGE_INTEGER@@AEBI@Z @ 0x1800CB478 (-at@-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800CB4C8 (-count@-$_Tree@V-$_Tmap_traits@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARG.c)
 *     ?upper_bound@?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800CB5A8 (-upper_bound@-$_Tree@V-$_Tmap_traits@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 */

union _LARGE_INTEGER __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::GetTimeOfVblank(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 *v6; // r11
  __int64 v7; // r11
  __int64 *v8; // r10
  __int64 **v9; // r11
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *i; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 j; // rcx
  __int64 *v16; // rcx
  __int64 *k; // rcx
  char v19[32]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+30h] BYREF

  v21 = a3;
  if ( std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::count(
         (char *)this + 1664,
         &v21) )
  {
    *a2 = *(_QWORD *)std::map<unsigned int,_LARGE_INTEGER>::at(v6, &v21);
    return (union _LARGE_INTEGER)a2;
  }
  if ( *((_QWORD *)this + 209) < 2uLL )
  {
    *a2 = 0LL;
    return (union _LARGE_INTEGER)a2;
  }
  std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
    v6,
    (__int64)v19,
    &v21);
  std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::upper_bound(
    v7,
    &v20,
    &v21);
  v10 = *v9;
  if ( v8 != (__int64 *)**v9 )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v11 = (__int64 *)*v8;
      if ( *(_BYTE *)(*v8 + 25) )
      {
        for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)*i; i = (__int64 *)i[1] )
          v8 = i;
        if ( *((_BYTE *)v8 + 25) )
          i = v8;
        v8 = i;
      }
      else
      {
        do
        {
          v8 = v11;
          v11 = (__int64 *)v11[2];
        }
        while ( !*((_BYTE *)v11 + 25) );
      }
    }
  }
  v13 = (__int64)v20;
  if ( v20 == v10 )
  {
    if ( *((_BYTE *)v20 + 25) )
    {
      v13 = v20[2];
    }
    else
    {
      v14 = *v20;
      if ( *(_BYTE *)(*v20 + 25) )
      {
        for ( j = v20[1]; !*(_BYTE *)(j + 25) && v13 == *(_QWORD *)j; j = *(_QWORD *)(j + 8) )
        {
          v13 = j;
          v20 = (__int64 *)j;
        }
        if ( !*(_BYTE *)(v13 + 25) )
        {
          v13 = j;
          v20 = (__int64 *)j;
        }
        goto LABEL_29;
      }
      do
      {
        v13 = v14;
        v14 = *(_QWORD *)(v14 + 16);
      }
      while ( !*(_BYTE *)(v14 + 25) );
    }
    v20 = (__int64 *)v13;
  }
LABEL_29:
  if ( v8 == (__int64 *)v13 )
  {
    if ( v8 == (__int64 *)*v10 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++((__int64 *)&v20);
      v13 = (__int64)v20;
    }
    else if ( *((_BYTE *)v8 + 25) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v16 = (__int64 *)*v8;
      if ( *(_BYTE *)(*v8 + 25) )
      {
        for ( k = (__int64 *)v8[1]; !*((_BYTE *)k + 25) && v8 == (__int64 *)*k; k = (__int64 *)k[1] )
          v8 = k;
        if ( *((_BYTE *)v8 + 25) )
          k = v8;
        v8 = k;
      }
      else
      {
        do
        {
          v8 = v16;
          v16 = (__int64 *)v16[2];
        }
        while ( !*((_BYTE *)v16 + 25) );
      }
    }
  }
  *a2 = v8[5]
      + (int)(a3 - *((_DWORD *)v8 + 8))
      * ((*(_QWORD *)(v13 + 40) - v8[5])
       / (unsigned int)(*(_DWORD *)(v13 + 32) - *((_DWORD *)v8 + 8)));
  return (union _LARGE_INTEGER)a2;
}
