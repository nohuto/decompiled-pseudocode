/*
 * XREFs of ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800C8B9C
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1800D939C (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C8C7C (-ensure_extra_capacity@-$buffer_impl@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusio.c)
 *     ??_G?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z @ 0x1800C8DC4 (--_G-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1801B48D8 (--$move_backward@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusio.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r10
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v17; // r11
  __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = (__int64 *)a1[1];
  *((_QWORD *)&v19 + 1) = 1LL;
  v7 = ((__int64)v6 - v5) >> 3;
  v8 = v7 - a2;
  v9 = v5 + 8 * v7;
  *(_QWORD *)&v19 = v9;
  if ( !v9 )
    goto LABEL_22;
  v20 = 1LL;
  v10 = v7 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v21 = v19;
  v11 = 8 * v10;
  v12 = &v6[v11 / 0xFFFFFFFFFFFFFFF8uLL];
  v22 = 1LL;
  if ( v6 != &v6[v11 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v17 = v21;
    v4 = v22;
    do
    {
      --v6;
      if ( !v17 )
        goto LABEL_22;
      if ( !v4 )
        goto LABEL_22;
      if ( (unsigned __int64)--v4 >= *((_QWORD *)&v21 + 1) )
        goto LABEL_22;
      v18 = *v6;
      *v6 = 0LL;
      *(_QWORD *)(v17 + 8 * v4) = v18;
    }
    while ( v6 != v12 );
  }
  if ( v8 <= 1 )
    goto LABEL_6;
  *(_QWORD *)&v21 = v5;
  *((_QWORD *)&v21 + 1) = v7;
  if ( v7 && (!v5 || v7 < 0) )
  {
LABEL_22:
    _o__invalid_parameter_noinfo_noreturn(v4);
    __debugbreak();
    JUMPOUT(0x1801673B0LL);
  }
  v22 = v7;
  v19 = v21;
  v20 = v7;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>)(
    &v21,
    v5 + 8 * a2,
    v5 + 8 * (v7 - 1),
    &v19);
LABEL_6:
  v13 = v5 + 8 * (a2 + 1);
  v14 = v5 + 8 * a2;
  v15 = v14;
  if ( v9 < v13 )
    v13 = v9;
  if ( v14 != v13 )
  {
    do
    {
      std::unique_ptr<COcclusionInfo>::`scalar deleting destructor'(v15);
      v15 += 8LL;
    }
    while ( v15 != v13 );
  }
  a1[1] += 8LL;
  return v14;
}
