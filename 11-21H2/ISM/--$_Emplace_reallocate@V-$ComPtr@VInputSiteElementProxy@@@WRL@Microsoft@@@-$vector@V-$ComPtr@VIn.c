/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180012E30
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180012930 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180124860 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18012431C (--$_Uninitialized_move@PEAV-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$a.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
        __int64 **a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r10
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // r12
  __int64 *v14; // r8
  __int64 *v15; // rcx
  __int64 *i; // rdx
  __int64 *v17; // rbx
  __int64 *v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  void *v24; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+98h] [rbp+20h]

  v25 = a2;
  v4 = a2;
  v6 = (__int64)(a2 - (_QWORD)*a1) >> 3;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v23 = v7 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v24 = (void *)0x1FFFFFFFFFFFFFFFLL;
    v11 = -8LL;
    v22 = 0x1FFFFFFFFFFFFFFFLL;
LABEL_30:
    v12 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    v26 = v12;
    v4 = v25;
    goto LABEL_10;
  }
  v10 = v7 + 1;
  if ( v9 + v8 >= v7 + 1 )
    v10 = v9 + v8;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = 8 * v10;
  v22 = v10;
  v24 = (void *)v10;
  if ( 8 * v10 >= 0x1000 )
    goto LABEL_30;
  if ( v11 )
  {
    v12 = operator new(8 * v10);
    v26 = v12;
    v4 = v25;
  }
  else
  {
    v12 = 0LL;
    v26 = 0LL;
  }
  v24 = (void *)v10;
LABEL_10:
  v13 = &v12[v6];
  *v13 = 0LL;
  if ( v13 != a3 )
  {
    *v13 = *a3;
    *a3 = 0LL;
  }
  v14 = a1[1];
  v15 = *a1;
  if ( (__int64 *)v4 == v14 )
  {
    for ( i = v12; v15 != v14; ++v15 )
    {
      *i = 0LL;
      if ( i != v15 )
      {
        *i = *v15;
        *v15 = 0LL;
      }
      ++i;
    }
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      v15,
      v4,
      v12);
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      v25,
      a1[1],
      v13 + 1);
  }
  v17 = *a1;
  if ( *a1 )
  {
    v18 = a1[1];
    if ( v17 != v18 )
    {
      do
      {
        v19 = *v17;
        if ( *v17 )
        {
          *v17 = 0LL;
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 8LL))(v19, i);
        }
        ++v17;
      }
      while ( v17 != v18 );
      v17 = *a1;
    }
    v20 = ((char *)a1[2] - (char *)v17) & 0xFFFFFFFFFFFFFFF8uLL;
    v25 = v20;
    v24 = v17;
    if ( v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v24, &v25);
      v20 = v25;
      v17 = (__int64 *)v24;
    }
    operator delete(v17, v20);
  }
  *a1 = v12;
  a1[1] = &v12[v23];
  a1[2] = &v12[v22];
  return v13;
}
