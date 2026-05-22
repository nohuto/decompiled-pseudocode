/*
 * XREFs of ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801D754C
 * Callers:
 *     ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x1801DA16C (-OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180048798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800AC0D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BD280 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801D6394 (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801D7064 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1801D74C4 (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x1801D7FC4 (-erase@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAA-AV-$_Vecto.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Edges::HitTest(Edges *this, int a2, int a3, const struct D2D_VECTOR_2F *a4, __int64 **a5)
{
  const struct D2D_VECTOR_2F *v5; // rax
  int v7; // esi
  unsigned int v8; // r12d
  char v9; // di
  __int64 v10; // rdx
  unsigned int *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 *v17; // r15
  __int64 v18; // r13
  unsigned int v20; // [rsp+20h] [rbp-50h]
  unsigned int v21; // [rsp+24h] [rbp-4Ch]
  char v23; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-38h] BYREF
  void *v25[4]; // [rsp+40h] [rbp-30h] BYREF
  int v26; // [rsp+60h] [rbp-10h]

  v5 = a4;
  v20 = a3;
  v21 = a2;
  v7 = 0;
  v8 = 0;
  if ( *a5 )
  {
    v9 = 1;
    while ( 1 )
    {
      v10 = **a5;
      if ( v8 >= 0xCCCCCCCCCCCCCCCDuLL * (((*a5)[1] - v10) >> 3) )
        goto LABEL_24;
      if ( Edges::FindEdge(this, (const struct CandidateIdentity *)(v10 + 40LL * v8)) < 0 )
        break;
      if ( Edge::HitTest((Edge *)(*(_QWORD *)this + ((unsigned __int64)v8 << 7)), v21, v20, a4) )
      {
        ++v7;
        ++v8;
      }
      else
      {
        v11 = &v24;
LABEL_6:
        std::vector<CandidateIdentity>::erase(*a5, v11, **a5 + 40LL * v8);
      }
    }
    v11 = (unsigned int *)&v23;
    goto LABEL_6;
  }
  v12 = *(_QWORD *)this;
  v13 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this == v13 )
    return 0;
  v9 = 1;
  do
  {
    if ( Edge::HitTest((Edge *)v12, a2, a3, v5) )
    {
      if ( *a5 || (v14 = (__int64 *)operator new(0x18uLL), *v14 = 0LL, v14[1] = 0LL, v14[2] = 0LL, (*a5 = v14) != 0LL) )
      {
        v25[0] = 0LL;
        v25[2] = 0LL;
        v25[3] = (void *)7;
        v26 = 0;
        v15 = (_QWORD *)(v12 + 8);
        if ( *(_QWORD *)(v12 + 32) >= 8uLL )
          v15 = (_QWORD *)*v15;
        v16 = -1LL;
        do
          ++v16;
        while ( *((_WORD *)v15 + v16) );
        std::wstring::assign(v25, v15, v16);
        v26 = *(_DWORD *)(v12 + 64);
        v17 = *a5;
        v18 = (*a5)[1];
        if ( v18 == (*a5)[2] )
        {
          std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(*a5, (*a5)[1], (__int64)v25);
        }
        else
        {
          std::wstring::wstring((_QWORD *)(*a5)[1], (__int64)v25);
          *(_DWORD *)(v18 + 32) = v26;
          v17[1] += 40LL;
        }
        ++v7;
        std::wstring::_Tidy_deallocate((__int64)v25);
      }
    }
    v12 += 128LL;
    v5 = a4;
    a3 = v20;
    a2 = v21;
  }
  while ( v12 != v13 );
LABEL_24:
  if ( !v7 )
    return 0;
  return v9;
}
