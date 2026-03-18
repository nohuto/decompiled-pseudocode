/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C858C
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800C8450 (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800C7EFC (--$uninitialized_move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_arra.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1800C854C (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  void *v12; // rcx
  bool v13; // zf
  __int64 v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = a1[2];
  v4 = a1[1];
  result = 0xAAAAAAAAAAAAAAABuLL * ((v3 - v4) >> 3);
  if ( result < a2 )
  {
    v6 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - *a1) >> 3);
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180167180LL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0xAAAAAAAAAAAAAAABuLL * ((v3 - *a1) >> 3)),
           0xAAAAAAAAAAAAAAABuLL * ((v3 - *a1) >> 3),
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 0x18uLL));
    v9 = (_QWORD *)a1[1];
    v10 = *a1;
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v6;
    v11 = (__int64)v8;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    std::uninitialized_move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
      (__int64)&v15,
      v10,
      v9,
      (__int64 *)&v17);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(*a1, a1[1]);
    v12 = (void *)*a1;
    v13 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    DefaultHeap::Free(v12);
    v14 = *a1;
    result = 3 * v7;
    a1[1] = *a1 + 24 * v6;
    a1[2] = v14 + 24 * v7;
  }
  return result;
}
