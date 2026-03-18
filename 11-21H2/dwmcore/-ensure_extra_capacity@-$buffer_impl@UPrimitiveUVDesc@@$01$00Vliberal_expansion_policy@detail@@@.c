/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801E3B78
 * Callers:
 *     ?reserve_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveUVDesc@@_K0@Z @ 0x1801E40E8 (-reserve_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vlibera.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801E2E5C (--$uninitialized_move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAU.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  LPVOID v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbx
  void *v14; // rcx
  bool v15; // zf
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-18h]

  v3 = 0x4EC4EC4EC4EC4EC5LL;
  v4 = a1[2];
  v5 = a1[1];
  result = 0x4EC4EC4EC4EC4EC5LL * ((v4 - v5) >> 2);
  if ( result < a2 )
  {
    v7 = 0x4EC4EC4EC4EC4EC5LL * ((v5 - *a1) >> 2);
    v8 = v7 + a2;
    if ( v7 + a2 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v9 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(v3 * ((v4 - *a1) >> 2)),
           v3 * ((v4 - *a1) >> 2),
           v8);
    v10 = operator new(saturated_mul(v9, 0x34uLL));
    v11 = a1[1];
    v12 = *a1;
    *(_QWORD *)&v16 = v10;
    *((_QWORD *)&v16 + 1) = v7;
    v13 = (__int64)v10;
    v17 = 0LL;
    v18 = v16;
    v19 = 0LL;
    std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
      (__int64)&v16,
      v12,
      v11,
      &v18);
    v14 = (void *)*a1;
    v15 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v13;
    if ( v15 )
      v14 = 0LL;
    DefaultHeap::Free(v14);
    a1[1] = *a1 + 52 * v7;
    result = *a1 + 52 * v9;
    a1[2] = result;
  }
  return result;
}
