/*
 * XREFs of ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800ABD40
 * Callers:
 *     ?GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800AB650 (-GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoA.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180047EFC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180099AF0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180099DD4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A6FE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$_Integral_to_string@GH@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@H@Z @ 0x1800AA60C (--$_Integral_to_string@GH@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@H@.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800AD9CC (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCConstantManager::GetCurrentInputTypesString(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int128 *v8; // xmm0_8
  __m128i v9; // xmm1
  __int128 *v10; // rdx
  _QWORD v12[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-48h] BYREF
  __int128 v14; // [rsp+48h] [rbp-38h]
  __int128 v15; // [rsp+58h] [rbp-28h] BYREF
  __m128i v16; // [rsp+68h] [rbp-18h]

  v12[1] = a2;
  std::wstring::wstring((_QWORD *)a2, &Src);
  v4 = 1;
  v5 = **(_QWORD **)(a1 + 56);
  v12[0] = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = *(_DWORD *)(v5 + 32);
    if ( *(_QWORD *)(a2 + 16) )
    {
      std::_Integral_to_string<unsigned short,int>((void **)&v13, v6);
      v7 = std::wstring::insert(&v13);
      v15 = *(_OWORD *)v7;
      v8 = (__int128 *)v15;
      v16 = *(__m128i *)(v7 + 16);
      v9 = v16;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 24) = 7LL;
      *(_WORD *)v7 = 0;
      v4 |= 0xCu;
      v10 = &v15;
      if ( _mm_srli_si128(v9, 8).m128i_u64[0] >= 8 )
        v10 = v8;
      std::wstring::append((void **)a2, v10, v9.m128i_u64[0]);
      std::wstring::_Tidy_deallocate((__int64)&v15);
    }
    else
    {
      std::_Integral_to_string<unsigned short,int>((void **)&v13, v6);
      v4 |= 2u;
      if ( (__int128 *)a2 != &v13 )
      {
        std::wstring::_Tidy_deallocate(a2);
        *(_OWORD *)a2 = v13;
        *(_OWORD *)(a2 + 16) = v14;
        *(_QWORD *)&v14 = 0LL;
        *((_QWORD *)&v14 + 1) = 7LL;
        LOWORD(v13) = 0;
      }
    }
    std::wstring::_Tidy_deallocate((__int64)&v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(v12);
    v5 = v12[0];
  }
  return a2;
}
