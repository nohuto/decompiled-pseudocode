/*
 * XREFs of ??$_Emplace_reallocate@AEAKAEA_K@?$vector@VBatchFrameId@CTouchFrameStats@@V?$allocator@VBatchFrameId@CTouchFrameStats@@@std@@@std@@QEAAPEAVBatchFrameId@CTouchFrameStats@@QEAV23@AEAKAEA_K@Z @ 0x1801A67A4
 * Callers:
 *     ?CollectStats@CTouchFrameStats@@MEAAX_K@Z @ 0x1801A8350 (-CollectStats@CTouchFrameStats@@MEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180042A28 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VBatchFrameId@CTouchFrameStats@@V?$allocator@VBatchFrameId@CTouchFrameStats@@@std@@@std@@AEAAXQEAVBatchFrameId@CTouchFrameStats@@_K1@Z @ 0x1801A961C (-_Change_array@-$vector@VBatchFrameId@CTouchFrameStats@@V-$allocator@VBatchFrameId@CTouchFrameSt.c)
 */

unsigned __int64 __fastcall std::vector<CTouchFrameStats::BatchFrameId>::_Emplace_reallocate<unsigned long &,unsigned __int64 &>(
        _QWORD *a1,
        _OWORD *a2,
        _DWORD *a3,
        __int64 *a4)
{
  _OWORD *v6; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  SIZE_T size_of; // rax
  __int64 v15; // rax
  _OWORD *v16; // r10
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  _OWORD *v19; // rdx
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 result; // rax
  void *v25; // [rsp+58h] [rbp+10h]

  v6 = a2;
  v8 = (unsigned __int64)a2 - *a1;
  v9 = (__int64)(a1[1] - *a1) >> 4;
  v10 = 0xFFFFFFFFFFFFFFFLL;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v9 + 1;
  v12 = (__int64)(a1[2] - *a1) >> 4;
  v13 = v12 >> 1;
  if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
  {
    v10 = v13 + v12;
    if ( v13 + v12 < v11 )
      v10 = v9 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v10);
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = (_OWORD *)v15;
  v25 = (void *)v15;
  try
  {
    v17 = v15 + (v8 & 0xFFFFFFFFFFFFFFF0uLL);
    v18 = *a4;
    *(_DWORD *)v17 = *a3;
    *(_QWORD *)(v17 + 8) = v18;
    v19 = (_OWORD *)a1[1];
    v20 = (_OWORD *)*a1;
    v21 = v16;
    if ( v6 == v19 )
    {
      while ( v20 != v19 )
        *v21++ = *v20++;
    }
    else
    {
      while ( v20 != v6 )
        *v21++ = *v20++;
      v22 = (_OWORD *)a1[1];
      if ( v6 != v22 )
      {
        v23 = v17 + 16 - (_QWORD)v6;
        do
        {
          *(_OWORD *)((char *)v6 + v23) = *v6;
          ++v6;
        }
        while ( v6 != v22 );
      }
    }
    std::vector<CTouchFrameStats::BatchFrameId>::_Change_array(a1, v16, v11, v10);
    result = v17;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v25, 16 * v10);
    throw;
  }
  return result;
}
