/*
 * XREFs of ??$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@QEAAPEAUCompTargetStats@CCompFrameStats@@QEAU23@AEBU23@@Z @ 0x180002998
 * Callers:
 *     ?CollectStats@CCompFrameStats@@MEAAX_K@Z @ 0x1800026F0 (-CollectStats@CCompFrameStats@@MEAAX_K@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<CCompFrameStats::CompTargetStats>::_Emplace_reallocate<CCompFrameStats::CompTargetStats const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  char *v13; // rdi
  char *v14; // r13
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  _BYTE *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  void *v23; // [rsp+58h] [rbp+10h] BYREF

  v6 = (a2 - (_BYTE *)*a1) / 136;
  v7 = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  v8 = 0x1E1E1E1E1E1E1E1LL;
  if ( v7 == 0x1E1E1E1E1E1E1E1LL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3)) >> 1;
  if ( 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3) <= 0x1E1E1E1E1E1E1E1LL - v10 )
  {
    v11 = v7 + 1;
    if ( v10 - 0xF0F0F0F0F0F0F0FLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3) >= v9 )
      v11 = v10 - 0xF0F0F0F0F0F0F0FLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
    if ( v11 > 0x1E1E1E1E1E1E1E1LL )
      std::_Throw_bad_array_new_length();
    v8 = v11;
  }
  v22 = v8;
  v12 = 136 * v8;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(136 * v8);
  v23 = v13;
  v14 = &v13[136 * v6];
  *(_OWORD *)v14 = *(_OWORD *)a3;
  *((_OWORD *)v14 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v14 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)v14 + 3) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)v14 + 4) = *(_OWORD *)(a3 + 64);
  *((_OWORD *)v14 + 5) = *(_OWORD *)(a3 + 80);
  *((_OWORD *)v14 + 6) = *(_OWORD *)(a3 + 96);
  *((_OWORD *)v14 + 7) = *(_OWORD *)(a3 + 112);
  *((_QWORD *)v14 + 16) = *(_QWORD *)(a3 + 128);
  v15 = a1[1];
  v16 = *a1;
  v17 = v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, a2 - (_BYTE *)*a1);
    v17 = v14 + 136;
    v18 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  v19 = *a1;
  if ( *a1 )
  {
    v20 = 8 * (((_BYTE *)a1[2] - v19) >> 3);
    v22 = v20;
    v23 = v19;
    if ( v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v23, &v22);
      v20 = v22;
      v19 = v23;
    }
    operator delete(v19, v20);
  }
  *a1 = v13;
  a1[1] = &v13[136 * v9];
  a1[2] = &v13[v12];
  return v14;
}
