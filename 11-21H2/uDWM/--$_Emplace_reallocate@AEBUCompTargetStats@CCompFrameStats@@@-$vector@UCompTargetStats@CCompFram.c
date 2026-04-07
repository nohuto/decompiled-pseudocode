/*
 * XREFs of ??$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@QEAAPEAUCompTargetStats@CCompFrameStats@@QEAU23@AEBU23@@Z @ 0x180003794
 * Callers:
 *     ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C (-CollectStats@CCompFrameStats@@IEAAX_K@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@AEAAXQEAUCompTargetStats@CCompFrameStats@@_K1@Z @ 0x18000391C (-_Change_array@-$vector@UCompTargetStats@CCompFrameStats@@V-$allocator@UCompTargetStats@CCompFra.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x180063707 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009BC6C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<CCompFrameStats::CompTargetStats>::_Emplace_reallocate<CCompFrameStats::CompTargetStats const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rdi
  char *v13; // r13
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8

  v6 = (a2 - (_BYTE *)*a1) / 136;
  v7 = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x1E1E1E1E1E1E1E1LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 > 0x1E1E1E1E1E1E1E1LL - (v9 >> 1) )
  {
    v11 = 0x1E1E1E1E1E1E1E1LL;
  }
  else
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x1E1E1E1E1E1E1E1LL )
      std::_Throw_bad_array_new_length();
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(136 * v11);
  v13 = &v12[136 * v6];
  *(_OWORD *)v13 = *(_OWORD *)a3;
  *((_OWORD *)v13 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v13 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)v13 + 3) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)v13 + 4) = *(_OWORD *)(a3 + 64);
  *((_OWORD *)v13 + 5) = *(_OWORD *)(a3 + 80);
  *((_OWORD *)v13 + 6) = *(_OWORD *)(a3 + 96);
  *((_OWORD *)v13 + 7) = *(_OWORD *)(a3 + 112);
  *((_QWORD *)v13 + 16) = *(_QWORD *)(a3 + 128);
  v14 = a1[1];
  v15 = *a1;
  v16 = v12;
  if ( a2 == v14 )
  {
    v17 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, a2 - (_BYTE *)*a1);
    v16 = v13 + 136;
    v17 = (_BYTE *)a1[1] - a2;
    v15 = a2;
  }
  memmove_0(v16, v15, v17);
  std::vector<CCompFrameStats::CompTargetStats>::_Change_array(a1, v12, v8, v11);
  return v13;
}
