/*
 * XREFs of ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x18001B008
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180018B2C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x1800137F0 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004BBF4 (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004CE7C (memmove_0.c)
 */

char *__fastcall std::vector<_GUID>::_Reallocate_exactly(const void **a1, unsigned __int64 a2)
{
  signed __int64 v3; // rsi
  size_t v4; // rdi
  void *v5; // rax
  unsigned __int64 v6; // rdx
  char *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  char *v10; // rcx
  char *v11; // r8
  char *result; // rax

  v3 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
LABEL_16:
    __scrt_throw_std_bad_array_new_length();
  v4 = 16 * a2;
  if ( 16 * a2 < 0x1000 )
  {
    if ( v4 )
      v8 = operator new(v4);
    else
      v8 = 0LL;
  }
  else
  {
    if ( v4 + 39 < v4 )
      goto LABEL_16;
    v5 = operator new(v4 + 39);
    if ( !v5 )
      goto LABEL_15;
    v8 = (_QWORD *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v8 - 1) = v5;
  }
  try
  {
    memmove_0(v8, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  }
  catch ( ... )
  {
    std::allocator<_GUID>::deallocate(v9, v8, a2);
    throw;
  }
  v10 = (char *)*a1;
  if ( *a1 )
  {
    v6 = ((_BYTE *)a1[2] - v10) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v6 < 0x1000 )
    {
LABEL_13:
      operator delete(v10, v6);
      goto LABEL_14;
    }
    v6 += 39LL;
    v11 = (char *)*((_QWORD *)v10 - 1);
    v7 = (char *)(v10 - v11);
    if ( (unsigned __int64)(v7 - 8) <= 0x1F )
    {
      v10 = v11;
      goto LABEL_13;
    }
LABEL_15:
    _o__invalid_parameter_noinfo_noreturn(v7, v6);
    __debugbreak();
    goto LABEL_16;
  }
LABEL_14:
  *a1 = v8;
  a1[1] = (char *)v8 + (v3 & 0xFFFFFFFFFFFFFFF0uLL);
  result = (char *)&v8[v4 / 8];
  a1[2] = &v8[v4 / 8];
  return result;
}
