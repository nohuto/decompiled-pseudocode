/*
 * XREFs of ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18003C180
 * Callers:
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x18003C104 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1802AC8C4 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1802AD488 (--$uninitialized_move@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PE.c)
 */

char *__fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2)
{
  __int64 v2; // rsi
  _BYTE *v5; // rdx
  detail::liberal_expansion_policy *v6; // rcx
  char *v7; // rbx
  signed __int64 v8; // rcx
  unsigned __int64 v9; // r8
  char *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  void *v19; // rax
  void *v20; // r8
  void *v21; // rdx
  void *v22; // rbx
  void *v23; // rcx
  bool v24; // zf
  char *v25; // rcx
  unsigned __int64 v26; // rdx
  char *v27; // r9
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  v2 = (__int64)a1[1];
  v5 = a1[2];
  v6 = (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL;
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v5[-v2] >> 2)) )
  {
    v16 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - (__int64)*a1) >> 2);
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(v6, (_QWORD)v6 * ((v5 - (_BYTE *)*a1) >> 2), v17);
    v19 = operator new(saturated_mul(v18, 0xCuLL));
    v20 = a1[1];
    v21 = *a1;
    *(_QWORD *)&v28 = v19;
    v22 = v19;
    *((_QWORD *)&v28 + 1) = v16;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
      &v28,
      v21,
      v20,
      &v30);
    v23 = *a1;
    v24 = *a1 == a1 + 3;
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    DefaultHeap::Free(v23);
    v25 = (char *)*a1;
    v2 = (__int64)*a1 + 12 * v16;
    a1[1] = (void *)v2;
    a1[2] = &v25[12 * v18];
  }
  v7 = (char *)*a1;
  *((_QWORD *)&v28 + 1) = 1LL;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - (__int64)v7) >> 2);
  v9 = v8 - a2;
  v10 = &v7[4 * ((v2 - (__int64)v7) >> 2)];
  *(_QWORD *)&v28 = v10;
  if ( !v10 )
    goto LABEL_24;
  v29 = 1LL;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - (__int64)v7) >> 2) - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v30 = v28;
  v31 = 1LL;
  v12 = 12 * v11;
  v13 = v2 - v12;
  if ( v2 != v2 - v12 )
  {
    v26 = v31;
    v27 = v10 + 12;
    do
    {
      v2 -= 12LL;
      if ( !(_QWORD)v30 )
        goto LABEL_24;
      if ( !v26 )
        goto LABEL_24;
      --v26;
      v27 -= 12;
      if ( v26 >= *((_QWORD *)&v30 + 1) )
        goto LABEL_24;
      *(_QWORD *)v27 = *(_QWORD *)v2;
      *((_DWORD *)v27 + 2) = *(_DWORD *)(v2 + 8);
    }
    while ( v2 != v13 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v30 = v7;
    *((_QWORD *)&v30 + 1) = v8;
    if ( !v8 || v7 && v8 >= 0 )
    {
      v31 = v8;
      v14 = 12 * a2;
      v28 = v30;
      v29 = v8;
      std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        &v30,
        &v7[12 * a2],
        &v7[12 * v8 - 12],
        &v28);
      goto LABEL_8;
    }
LABEL_24:
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x18012D6D9LL);
  }
  v14 = 12 * a2;
LABEL_8:
  a1[1] = (char *)a1[1] + 12;
  return &v7[v14];
}
