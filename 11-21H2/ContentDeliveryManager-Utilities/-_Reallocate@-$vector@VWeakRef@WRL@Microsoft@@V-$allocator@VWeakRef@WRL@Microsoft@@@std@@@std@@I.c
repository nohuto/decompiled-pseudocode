/*
 * XREFs of ?_Reallocate@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800738C0
 * Callers:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800739C0 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18006D714 (--$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V1.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::WeakRef>::_Reallocate(__int64 **a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 *v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 *result; // rax
  _QWORD *v11; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = operator new(8 * a2), (v11 = v4) == 0LL) )
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
    std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::deallocate(v5, v11);
    throw;
  }
  v6 = a1[1];
  v7 = *a1;
  v8 = v6 - *a1;
  if ( *a1 )
  {
    if ( v7 != v6 )
    {
      do
      {
        v9 = *v7;
        if ( *v7 )
        {
          *v7 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        ++v7;
      }
      while ( v7 != v6 );
      v7 = *a1;
    }
    operator delete(v7);
  }
  a1[2] = &v4[a2];
  result = &v4[v8];
  a1[1] = result;
  *a1 = v4;
  return result;
}
