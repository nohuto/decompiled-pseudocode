/*
 * XREFs of ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x18001AA6C
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180018620 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800131B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x1800132C4 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800132EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004BF8F (memmove_0.c)
 */

_QWORD *__fastcall std::vector<_GUID>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // r14
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    __scrt_throw_std_bad_array_new_length();
  v4 = 2 * a2;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(16 * a2);
  memmove_0(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = (char *)v5 + (v3 & 0xFFFFFFFFFFFFFFF0uLL);
  result = &v5[v4];
  *(_QWORD *)(a1 + 16) = &v5[v4];
  return result;
}
