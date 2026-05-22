/*
 * XREFs of ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800ECA14
 * Callers:
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800EDC6C (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180086E8C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800B5CC8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800E7D4C (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800EAD84 (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SystemCursorShape2::FindClosestShapeBitmap(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int *v6; // r9
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  unsigned int *v9; // rdx
  unsigned int *v10; // r8
  unsigned int *v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  char v17[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v19; // [rsp+40h] [rbp-10h]
  unsigned int v20; // [rsp+70h] [rbp+20h] BYREF

  v18 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = *(_QWORD ***)(a1 + 24);
  v8 = *v7;
  v9 = 0LL;
  while ( v8 != v7 )
  {
    v10 = (unsigned int *)(v8 + 2);
    if ( v9 == v6 )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((const void **)&v18, v9, v10);
      v6 = v19;
      v9 = (unsigned int *)*((_QWORD *)&v18 + 1);
    }
    else
    {
      *v9++ = *v10;
      *((_QWORD *)&v18 + 1) = v9;
    }
    v8 = (_QWORD *)*v8;
  }
  v11 = (unsigned int *)v18;
  if ( (unsigned __int64)((unsigned __int64)v9 - v18) >= 4 )
  {
    v12 = (__int64)((__int64)v9 - v18) >> 2;
    std::_Sort_unchecked<unsigned int *,std::less<void>>((char *)v18, v9, v12, 0);
    v13 = -1LL;
    v14 = 1LL;
    if ( v12 <= 1 )
      goto LABEL_16;
    do
    {
      if ( a3 >= v11[v14 - 1] && a3 <= v11[v14] )
      {
        v13 = v14 - 1;
        if ( (float)((float)((float)(int)v11[v14 - 1] + (float)(int)v11[v14]) * 0.5) < (float)(int)a3 )
          v13 = v14;
      }
      ++v14;
    }
    while ( v14 < v12 );
    if ( v13 == -1 )
    {
LABEL_16:
      if ( a3 >= *v11 )
        v13 = v12 - 1;
      else
        v13 = 0LL;
    }
    v20 = v11[v13];
    v15 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
            (float *)(a1 + 16),
            (__int64)v17,
            (unsigned __int8 *)&v20);
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
      a2,
      (_QWORD *)(*(_QWORD *)v15 + 24LL));
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v18);
  return a2;
}
