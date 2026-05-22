/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180046200
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180029410 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180045EB0 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800979BC (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18013F0B8 (--$_Uninitialized_move@PEAV-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$a.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  size_t v11; // rcx
  __int64 *v12; // r13
  __int64 *v13; // rcx
  _QWORD *v14; // rbx
  __int64 *v15; // r8
  __int64 *v16; // rcx
  __int64 *i; // rdx
  __int64 *v18; // rbx
  __int64 *j; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 *v25; // [rsp+30h] [rbp-48h]
  void *v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp+10h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v24 = v7 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v26 = (void *)0x1FFFFFFFFFFFFFFFLL;
    v11 = -8LL;
    v28 = -8LL;
LABEL_29:
    v12 = (__int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    v27 = (unsigned __int64)v12;
    goto LABEL_10;
  }
  v10 = v7 + 1;
  if ( v9 + v8 >= v7 + 1 )
    v10 = v9 + v8;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = 8 * v10;
  v28 = 8 * v10;
  v26 = (void *)v10;
  if ( 8 * v10 >= 0x1000 )
    goto LABEL_29;
  if ( v11 )
  {
    v12 = (__int64 *)operator new(v11);
    v27 = (unsigned __int64)v12;
  }
  else
  {
    v12 = 0LL;
    v27 = 0LL;
  }
  v26 = (void *)v10;
LABEL_10:
  v13 = &v12[v6];
  v25 = v13;
  v14 = v13 + 1;
  *v13 = 0LL;
  if ( v13 != a3 )
  {
    *v13 = *a3;
    *a3 = 0LL;
  }
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    for ( i = v12; v16 != v15; ++v16 )
    {
      *i = 0LL;
      if ( i != v16 )
      {
        *i = *v16;
        *v16 = 0LL;
      }
      ++i;
    }
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      v16,
      a2,
      v12);
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      a2,
      a1[1],
      v14);
  }
  v18 = *a1;
  if ( *a1 )
  {
    for ( j = a1[1]; v18 != j; ++v18 )
    {
      v20 = *v18;
      if ( *v18 )
      {
        *v18 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 8LL))(v20, i);
      }
    }
    v21 = *a1;
    v22 = ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL;
    v27 = v22;
    v26 = v21;
    if ( v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, &v27);
      v21 = v26;
      v22 = v27;
    }
    operator delete(v21, v22);
  }
  *a1 = v12;
  a1[1] = &v12[v24];
  a1[2] = &v12[(unsigned __int64)v28 / 8];
  return v25;
}
