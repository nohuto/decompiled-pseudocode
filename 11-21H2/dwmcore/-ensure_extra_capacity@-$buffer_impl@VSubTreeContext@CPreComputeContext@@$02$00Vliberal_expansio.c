/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18008D964
 * Callers:
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x18008D84C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1800167F8 (--$uninitialized_move@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_a.c)
 *     ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x180019560 (--$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreCompute.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  CPreComputeContext::SubTreeContext *v12; // rcx
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = a1[2];
  v4 = a1[1];
  result = 0x6DB6DB6DB6DB6DB7LL * ((v3 - v4) >> 6);
  if ( result < a2 )
  {
    v6 = 0x6DB6DB6DB6DB6DB7LL * ((v4 - *a1) >> 6);
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801468D2LL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0x6DB6DB6DB6DB6DB7LL * ((v3 - *a1) >> 6)),
           0x6DB6DB6DB6DB6DB7LL * ((v3 - *a1) >> 6),
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 0x1C0uLL));
    v9 = a1[1];
    v10 = *a1;
    *(_QWORD *)&v14 = v8;
    *((_QWORD *)&v14 + 1) = v6;
    v11 = (__int64)v8;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    std::uninitialized_move<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
      (__int64)&v14,
      v10,
      v9,
      &v16);
    detail::destruct_range<CPreComputeContext::SubTreeContext>(
      (CPreComputeContext::SubTreeContext *)*a1,
      (CPreComputeContext::SubTreeContext *)a1[1]);
    v12 = (CPreComputeContext::SubTreeContext *)*a1;
    v13 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    DefaultHeap::Free(v12);
    a1[1] = *a1 + 448 * v6;
    result = *a1 + 448 * v7;
    a1[2] = result;
  }
  return result;
}
