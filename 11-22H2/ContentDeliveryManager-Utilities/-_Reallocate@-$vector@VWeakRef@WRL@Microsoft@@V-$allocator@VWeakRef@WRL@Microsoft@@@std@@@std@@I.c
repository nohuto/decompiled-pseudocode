/*
 * XREFs of ?_Reallocate@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18006B69C
 * Callers:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18006B7B0 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180066844 (--$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V1.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x18006B1A0 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::WeakRef>::_Reallocate(__int64 **a1, unsigned __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 *result; // rax
  void *v8; // [rsp+48h] [rbp+10h]

  v4 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = operator new(8 * a2), (v8 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
      *a1,
      a1[1],
      v4);
  }
  catch ( ... )
  {
    operator delete(v8);
    throw;
  }
  v6 = a1[1] - *a1;
  if ( *a1 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(v5, *a1, a1[1]);
    operator delete(*a1);
  }
  a1[2] = &v4[a2];
  result = &v4[v6];
  a1[1] = result;
  *a1 = v4;
  return result;
}
