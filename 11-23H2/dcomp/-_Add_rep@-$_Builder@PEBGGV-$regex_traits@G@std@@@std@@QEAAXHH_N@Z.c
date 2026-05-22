/*
 * XREFs of ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x180041AC4
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18004184C (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x180043968 (-_Link_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_rep(
        _QWORD *a1,
        int a2,
        int a3,
        unsigned __int8 a4)
{
  __int64 v4; // r10
  int v6; // r12d
  __int64 v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _DWORD *v12; // rax
  _DWORD *v13; // r9
  int v14; // r8d
  __int64 v15; // r9
  __int64 result; // rax
  int v17; // eax
  unsigned int v18; // eax
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx

  v4 = a1[1];
  v6 = a4;
  if ( *(_DWORD *)(v4 + 8) == 6 )
  {
    v17 = *(_DWORD *)(v4 + 36);
    if ( v17 != 1 )
    {
      v18 = v17 - 1;
      *(_DWORD *)(v4 + 36) = v18;
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
        (__int64)a1,
        *(_WORD *)(*(_QWORD *)(v4 + 40) + 2LL * v18));
    }
  }
  v9 = a1[1];
  if ( *(_DWORD *)(v9 + 8) == 9 || *(_DWORD *)(v9 + 8) == 14 )
    v9 = *(_QWORD *)(v9 + 32);
  if ( a2 || a3 != 1 )
  {
    v10 = operator new(0x28uLL);
    v11 = v10;
    if ( v10 )
    {
      v10[1] = 19LL;
      v10[2] = 0LL;
      v10[3] = 0LL;
      *v10 = &std::_Node_capture::`vftable';
      v10[4] = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = operator new(0x38uLL);
    v13 = v12;
    if ( v12 )
    {
      v14 = *(_DWORD *)(*a1 + 36LL);
      *(_DWORD *)(*a1 + 36LL) = v14 + 1;
      v12[2] = 18;
      v12[13] = -1;
      v12[3] = 2 * v6;
      *((_QWORD *)v12 + 2) = 0LL;
      *((_QWORD *)v12 + 3) = 0LL;
      *(_QWORD *)v12 = &std::_Node_rep::`vftable';
      v12[8] = a2;
      v12[9] = a3;
      *((_QWORD *)v12 + 5) = v11;
      v12[12] = v14;
    }
    else
    {
      v13 = 0LL;
    }
    v11[4] = v13;
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v11);
    *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL) = v15;
    result = *(_QWORD *)(v9 + 24);
    *(_QWORD *)(v15 + 24) = result;
    *(_QWORD *)(v9 + 24) = v15;
    *(_QWORD *)(v15 + 16) = v9;
  }
  else
  {
    v19 = operator new(0x20uLL);
    v20 = v19;
    if ( v19 )
    {
      v19[1] = 17LL;
      v19[2] = 0LL;
      v19[3] = 0LL;
      *v19 = &std::_Node_endif::`vftable';
    }
    else
    {
      v20 = 0LL;
    }
    v21 = operator new(0x30uLL);
    if ( v21 )
    {
      v21[1] = 16LL;
      v21[2] = 0LL;
      v21[3] = 0LL;
      *v21 = &std::_Node_if::`vftable';
      v21[4] = v20;
      v21[5] = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = operator new(0x30uLL);
    v23 = v22;
    if ( v22 )
    {
      v22[1] = 16LL;
      v22[2] = 0LL;
      v22[3] = 0LL;
      *v22 = &std::_Node_if::`vftable';
      v22[4] = v20;
      v22[5] = 0LL;
    }
    else
    {
      v23 = 0LL;
    }
    v24 = operator new(0x20uLL);
    if ( v24 )
    {
      v24[1] = 8LL;
      *v24 = &std::_Node_endif::`vftable';
      v24[2] = 0LL;
      v24[3] = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    v25 = operator new(0x28uLL);
    if ( v25 )
    {
      v25[1] = 9LL;
      *v25 = &std::_Node_capture::`vftable';
      v25[4] = v24;
    }
    else
    {
      v25 = 0LL;
    }
    v23[2] = v24;
    v24[3] = v23;
    v24[2] = v25;
    v25[3] = v24;
    v25[2] = v20;
    v21[5] = v23;
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v20);
    *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL) = v21;
    result = *(_QWORD *)(v9 + 24);
    v21[3] = result;
    *(_QWORD *)(v9 + 24) = v21;
    v21[2] = v9;
    if ( !(_BYTE)v6 )
    {
      v26 = v23[2];
      v27 = *(_QWORD *)(v9 + 24);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(v26 + 24);
      *(_QWORD *)(v26 + 24) = v27;
      result = v23[2];
      v28 = v21[2];
      v21[2] = result;
      v23[2] = v28;
    }
  }
  return result;
}
