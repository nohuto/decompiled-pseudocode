/*
 * XREFs of ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x180077D28
 * Callers:
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x180077CC8 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1801B2BC8 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall std::vector<unsigned char>::_Insert_range<unsigned char const *>(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  _BYTE *v4; // rdi
  _BYTE *v5; // r12
  size_t v9; // rsi
  const char *v10; // rcx
  size_t v11; // r14
  SIZE_T v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  HANDLE ProcessHeap; // rax
  char *v16; // rdi
  size_t v17; // r13
  char *v18; // rcx
  size_t v19; // r8
  void *v20; // rdx
  void *v21; // rcx
  void *v22; // rdx
  char *v23; // rax
  size_t v24; // r14
  char *v25; // rdi
  SIZE_T v26; // rcx
  LPVOID v27; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  void *v29; // [rsp+60h] [rbp+8h] BYREF
  size_t v30; // [rsp+68h] [rbp+10h]
  void *Src; // [rsp+70h] [rbp+18h] BYREF

  Src = a3;
  v4 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v29 = *(void **)a1;
  v9 = a4 - a3;
  if ( a4 == a3 )
    return;
  v10 = *(const char **)(a1 + 16);
  if ( v9 <= v10 - v5 )
  {
    v24 = v5 - a2;
    if ( v9 < v5 - a2 )
    {
      memmove_0(v5, &v5[-v9], a4 - a3);
      *(_QWORD *)(a1 + 8) = &v5[v9];
      memmove_0(&v5[-(v24 - v9)], a2, v24 - v9);
    }
    else
    {
      v25 = &a2[v9];
      memmove_0(&a2[v9], a2, v24);
      *(_QWORD *)(a1 + 8) = &v25[v24];
    }
    memmove_0(a2, a3, v9);
    return;
  }
  v11 = v5 - v4;
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v9 > 0x7FFFFFFFFFFFFFFFLL - (v5 - v4) )
    std::_Dwm_Xlength_error(v10);
  v13 = v10 - v4;
  v30 = v11 + v9;
  v14 = v13 >> 1;
  if ( v13 > 0x7FFFFFFFFFFFFFFFLL - (v13 >> 1) )
  {
    v26 = 0x8000000000000026uLL;
  }
  else
  {
    v12 = v11 + v9;
    if ( v14 + v13 >= v11 + v9 )
      v12 = v14 + v13;
    if ( v12 < 0x1000 )
    {
      if ( v12 )
      {
        ProcessHeap = GetProcessHeap();
        v16 = (char *)HeapAlloc(ProcessHeap, 0, v12);
        if ( v16 )
          goto LABEL_10;
LABEL_28:
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v16 = 0LL;
      goto LABEL_10;
    }
    v26 = v12 + 39;
    if ( v12 + 39 < v12 )
      std::_Throw_bad_array_new_length();
  }
  v27 = operator new(v26);
  if ( !v27 )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    goto LABEL_28;
  }
  v16 = (char *)(((unsigned __int64)v27 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v16 - 1) = v27;
LABEL_10:
  v17 = a2 - (_BYTE *)v29;
  memmove_0(&v16[a2 - (_BYTE *)v29], Src, v9);
  if ( v9 == 1 && a2 == v5 )
  {
    v20 = v29;
    v19 = v11;
    v18 = v16;
  }
  else
  {
    memmove_0(v16, v29, v17);
    v18 = &v16[v17 + v9];
    v19 = v5 - a2;
    v20 = a2;
  }
  memmove_0(v18, v20, v19);
  v21 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v22 = (void *)(*(_QWORD *)(a1 + 16) - (_QWORD)v21);
    v29 = *(void **)a1;
    Src = v22;
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v29, (unsigned __int64 *)&Src);
      v22 = Src;
      v21 = v29;
    }
    operator delete(v21, (unsigned __int64)v22);
  }
  v23 = &v16[v30];
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 8) = v23;
  *(_QWORD *)(a1 + 16) = &v16[v12];
}
