/*
 * XREFs of ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC
 * Callers:
 *     ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290 (-Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180028BD0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@1@@Z @ 0x1800C87F0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$alloca.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C889C (--$_Try_emplace@AEBI$$V@-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C8990 (--$_Try_emplace@AEBI$$V@-$map@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     ??$advance@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@std@@_K@std@@YAXAEAV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@0@_K@Z @ 0x1800C8A7C (--$advance@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIT_LARGE_INTEGER@@@s.c)
 *     ?GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA?AT_LARGE_INTEGER@@I@Z @ 0x1800C9FE0 (-GetTimeOfVblank@RenderOutputD3D11@D3D11@Engine@Spectre@@AEBA-AT_LARGE_INTEGER@@I@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@2@0@Z @ 0x1800CB504 (-erase@-$_Tree@V-$_Tmap_traits@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARG.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::ReconcileFrameStats(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this)
{
  int v1; // eax
  __int64 *v3; // r15
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rbx
  char *v9; // rdx
  __int64 lower; // rax
  unsigned int v11; // r10d
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 *i; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 *v18; // rsi
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  __int64 v23; // r11
  unsigned __int64 v24; // rdx
  __int64 v25; // r11
  __int64 v26; // r9
  __int64 *v27; // rax
  _BYTE v28[16]; // [rsp+20h] [rbp-50h] BYREF
  char v29; // [rsp+30h] [rbp-40h] BYREF
  char v30; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v31[32]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v1 = *((_DWORD *)this + 410);
  if ( !v1 )
    return;
  v3 = (__int64 *)((char *)this + 1648);
  v4 = (*((_DWORD *)this + 411) - v1 + 21) % 0x14u;
  do
  {
    LODWORD(v32) = *((_DWORD *)this + 14 * (int)v4 + 134);
    v5 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
                       v3,
                       (__int64)v31,
                       (unsigned int *)&v32)
                   + 16);
    if ( !*(_BYTE *)(v5 + 25) && v6 >= *(_DWORD *)(v5 + 32) )
    {
      v7 = std::map<unsigned int,DXGI_FRAME_STATISTICS>::_Try_emplace<unsigned int const &,>(
             v3,
             (__int64)v28,
             (unsigned int *)&v32);
      Spectre::Engine::D3D11::RenderOutputD3D11::GetTimeOfVblank(this, &v33, *(_DWORD *)(*(_QWORD *)v7 + 44LL));
      v8 = v33;
      if ( v33 <= 0 )
        break;
      v9 = &v29;
      goto LABEL_27;
    }
    lower = std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
              v3,
              (__int64)v31,
              (unsigned int *)&v32);
    v12 = *v3;
    v13 = *(__int64 **)(lower + 16);
    if ( v13 == *(__int64 **)*v3 )
      break;
    if ( *((_BYTE *)v13 + 25) )
    {
      v13 = (__int64 *)v13[2];
    }
    else
    {
      v14 = (__int64 *)*v13;
      if ( *(_BYTE *)(*v13 + 25) )
      {
        for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
          v13 = i;
        if ( !*((_BYTE *)v13 + 25) )
          v13 = i;
      }
      else
      {
        do
        {
          v13 = v14;
          v14 = (__int64 *)v14[2];
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
    }
    v16 = *(_QWORD *)(v12 + 8);
    v17 = *v3;
    if ( *(_BYTE *)(v16 + 25) )
      break;
    do
    {
      if ( v11 >= *(_DWORD *)(v16 + 32) )
      {
        v16 = *(_QWORD *)(v16 + 16);
      }
      else
      {
        v17 = v16;
        v16 = *(_QWORD *)v16;
      }
    }
    while ( !*(_BYTE *)(v16 + 25) );
    if ( v17 == v12 )
      break;
    Spectre::Engine::D3D11::RenderOutputD3D11::GetTimeOfVblank(this, &v34, *((_DWORD *)v13 + 11));
    Spectre::Engine::D3D11::RenderOutputD3D11::GetTimeOfVblank(this, &v35, *(_DWORD *)(v17 + 44));
    if ( v34 <= 0 || v35 <= 0 )
      break;
    v9 = &v30;
    v8 = v34
       + ((int)v32 - *((_DWORD *)v13 + 8))
       * ((v35 - v34)
        / (unsigned int)(*(_DWORD *)(v17 + 32) - *((_DWORD *)v13 + 8)));
LABEL_27:
    *(_QWORD *)(*(_QWORD *)std::map<unsigned int,_LARGE_INTEGER>::_Try_emplace<unsigned int const &,>(
                             (__int64 *)this + 210,
                             (__int64)v9,
                             (unsigned int *)&v32)
              + 40LL) = v8;
    --*((_DWORD *)this + 410);
    v4 = (v4 + 1) % 0x14;
  }
  while ( *((_DWORD *)this + 410) );
  if ( *((_QWORD *)this + 207) > 0x14uLL )
  {
    v18 = (__int64 *)*((_QWORD *)this + 206);
    v32 = *v18;
    do
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v32);
    while ( v20 != 1 );
    v21 = v32;
    v32 = v19;
    if ( *(_BYTE *)(v21 + 25) )
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>,void *>>>(
        (__int64)this + 1648,
        (__int64)this + 1648,
        v18[1]);
      v18[1] = (__int64)v18;
      *v18 = (__int64)v18;
      v18[2] = (__int64)v18;
      *((_QWORD *)this + 207) = 0LL;
    }
    else
    {
      while ( v19 != v21 )
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v32);
        v27 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract((_QWORD *)this + 206, v26);
        std::_Deallocate<16,0>(v27, 0x48uLL);
        v19 = v32;
      }
    }
  }
  v22 = *((_QWORD *)this + 209);
  if ( v22 > 0x14 )
  {
    v32 = **((_QWORD **)this + 208);
    std::advance<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,_LARGE_INTEGER>>>>,unsigned __int64>(
      &v32,
      v22 - 20);
    std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::erase(
      (char *)this + 1664,
      &v32,
      v23,
      v32);
  }
  v24 = *((_QWORD *)this + 211);
  if ( v24 > 0x14 )
  {
    v32 = **((_QWORD **)this + 210);
    std::advance<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,_LARGE_INTEGER>>>>,unsigned __int64>(
      &v32,
      v24 - 20);
    std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::erase(
      (char *)this + 1680,
      &v32,
      v25,
      v32);
  }
}
