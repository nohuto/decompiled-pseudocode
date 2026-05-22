/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180022B9C
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18001E6F8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18002293C (-MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA-AV-$basic_string@GU-$char.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  SIZE_T v11; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v13; // rdi
  void *v15; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error(a1);
  v8 = *((_QWORD *)a1 + 3);
  v9 = a2 | 7;
  if ( v9 > 0x7FFFFFFFFFFFFFFELL || (v10 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFELL - (v8 >> 1)) )
  {
    v11 = -2LL;
  }
  else
  {
    v4 = v10 + v8;
    if ( v9 >= v10 + v8 )
      v4 = v9;
    if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
LABEL_15:
      std::_Throw_bad_array_new_length();
    v11 = 2 * (v4 + 1);
    if ( v11 < 0x1000 )
    {
      if ( v11 )
      {
        ProcessHeap = GetProcessHeap();
        v13 = HeapAlloc(ProcessHeap, 0, v11);
        if ( v13 )
          goto LABEL_10;
LABEL_21:
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v13 = 0LL;
      goto LABEL_10;
    }
  }
  if ( v11 + 39 < v11 )
    goto LABEL_15;
  v15 = operator new(v11 + 39);
  if ( !v15 )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    goto LABEL_21;
  }
  v13 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(v13 - 1) = v15;
LABEL_10:
  *((_QWORD *)a1 + 2) = a2;
  *((_QWORD *)a1 + 3) = v4;
  memcpy_0(v13, a4, 2 * a2);
  *((_WORD *)v13 + a2) = 0;
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(*(_QWORD *)a1, 2 * v8 + 2);
  *(_QWORD *)a1 = v13;
  return a1;
}
