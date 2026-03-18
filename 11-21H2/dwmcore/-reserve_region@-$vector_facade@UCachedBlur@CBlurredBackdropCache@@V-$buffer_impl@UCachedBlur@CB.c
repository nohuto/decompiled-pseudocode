/*
 * XREFs of ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x18005915C
 * Callers:
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x180058B9C (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x180059288 (--$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdrop.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180253408 (--$move_backward@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_i.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180253508 (--$uninitialized_move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_ar.c)
 *     ??0CachedBlur@CBlurredBackdropCache@@QEAA@$$QEAU01@@Z @ 0x1802535E0 (--0CachedBlur@CBlurredBackdropCache@@QEAA@$$QEAU01@@Z.c)
 */

char *__fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::reserve_region(
        CBlurredBackdropCache::CachedBlur **a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  CBlurredBackdropCache::CachedBlur *v4; // rdx
  unsigned __int64 v5; // r9
  detail::liberal_expansion_policy *v7; // rcx
  CBlurredBackdropCache::CachedBlur *v8; // rdi
  __int64 v9; // rbx
  signed __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  CBlurredBackdropCache::CachedBlur *v20; // rax
  CBlurredBackdropCache::CachedBlur *v21; // r8
  CBlurredBackdropCache::CachedBlur *v22; // rdx
  CBlurredBackdropCache::CachedBlur *v23; // rbx
  CBlurredBackdropCache::CachedBlur *v24; // rcx
  bool v25; // zf
  __int128 v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-40h]
  __int64 v29; // [rsp+50h] [rbp-30h]
  __int128 v30; // [rsp+60h] [rbp-20h] BYREF
  signed __int64 v31; // [rsp+70h] [rbp-10h]

  v2 = (__int64)a1[1];
  v3 = a2;
  v4 = a1[2];
  v5 = 0xF0F0F0F0F0F0F0F1uLL;
  v7 = 0LL;
  if ( !(0xF0F0F0F0F0F0F0F1uLL * (((__int64)v4 - v2) >> 3)) )
  {
    v17 = 0xF0F0F0F0F0F0F0F1uLL * ((v2 - (__int64)*a1) >> 3);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(v7, v5 * ((v4 - *a1) >> 3), v18);
    v20 = (CBlurredBackdropCache::CachedBlur *)operator new(saturated_mul(v19, 0x88uLL));
    v21 = a1[1];
    v22 = *a1;
    *(_QWORD *)&v28 = v20;
    *((_QWORD *)&v28 + 1) = v17;
    v23 = v20;
    v29 = 0LL;
    v26 = v28;
    v27 = 0LL;
    ((void (__fastcall *)(__int128 *, CBlurredBackdropCache::CachedBlur *, CBlurredBackdropCache::CachedBlur *, __int128 *))std::uninitialized_move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>)(
      &v30,
      v22,
      v21,
      &v26);
    detail::destruct_range<CBlurredBackdropCache::CachedBlur>(*a1);
    v24 = *a1;
    v25 = *a1 == (CBlurredBackdropCache::CachedBlur *)(a1 + 3);
    *a1 = v23;
    if ( v25 )
      v24 = 0LL;
    DefaultHeap::Free(v24);
    a1[2] = (CBlurredBackdropCache::CachedBlur *)((char *)*a1 + 136 * v19);
    v2 = (__int64)*a1 + 136 * v17;
    v7 = 0LL;
    a1[1] = (CBlurredBackdropCache::CachedBlur *)v2;
  }
  v8 = *a1;
  v9 = v2 - (_QWORD)*a1;
  *((_QWORD *)&v28 + 1) = 1LL;
  v10 = 0xF0F0F0F0F0F0F0F1uLL * (v9 >> 3);
  v11 = v10 - v3;
  *(_QWORD *)&v28 = (char *)v8 + 136 * v10;
  if ( !(_QWORD)v28 )
    goto LABEL_24;
  v29 = 1LL;
  v12 = v10 - v3;
  if ( v11 > 1 )
    v12 = 1LL;
  v26 = v28;
  v13 = 136 * v12;
  v27 = 1LL;
  v14 = v2 - v13;
  if ( v2 != v2 - v13 )
  {
    v16 = v27;
    while ( 1 )
    {
      v2 -= 136LL;
      if ( !(_QWORD)v26 )
        goto LABEL_24;
      if ( !v16 )
        goto LABEL_24;
      if ( (unsigned __int64)--v16 >= *((_QWORD *)&v26 + 1) )
        goto LABEL_24;
      CBlurredBackdropCache::CachedBlur::CachedBlur(v26 + 136 * v16, v2);
      if ( v2 == v14 )
        break;
      v7 = 0LL;
    }
    v3 = a2;
  }
  if ( v11 > 1 )
  {
    *(_QWORD *)&v26 = v8;
    *((_QWORD *)&v26 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
    {
      v27 = v10;
      v30 = v26;
      v31 = v10;
      std::move_backward<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
        &v26,
        (char *)v8 + 136 * v3,
        (char *)v8 + 136 * v10 - 136,
        &v30);
      goto LABEL_7;
    }
LABEL_24:
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x1801365E9LL);
  }
LABEL_7:
  detail::destruct_range<CBlurredBackdropCache::CachedBlur>((CBlurredBackdropCache::CachedBlur *)((char *)v8 + 136 * v3));
  a1[1] = (CBlurredBackdropCache::CachedBlur *)((char *)a1[1] + 136);
  return (char *)v8 + 136 * v3;
}
