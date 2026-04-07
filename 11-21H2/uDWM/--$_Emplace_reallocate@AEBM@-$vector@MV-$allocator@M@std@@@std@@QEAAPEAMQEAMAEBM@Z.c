/*
 * XREFs of ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x180004130
 * Callers:
 *     ?TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x180008FD0 (-TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 *     ?TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x18010AC10 (-TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@MV?$allocator@M@std@@@std@@AEAAXQEAM_K1@Z @ 0x18000421C (-_Change_array@-$vector@MV-$allocator@M@std@@@std@@AEAAXQEAM_K1@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800440A4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x180063707 (memmove_0.c)
 */

char *__fastcall std::vector<float>::_Emplace_reallocate<float const &>(const void **a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  char *v13; // rsi
  char *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[4 * v6];
  *(_DWORD *)v14 = *a3;
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
    v17 = v14 + 4;
    v18 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  std::vector<float>::_Change_array(a1, v13, v9, v8);
  return v14;
}
