/*
 * XREFs of ??$make_unique_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@wistd@@@wistd@@_K@Z @ 0x1803DD9A0
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1803E1058 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::make_unique_nothrow<_GUID [0]>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rsi
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v3 = 16 * a2;
  if ( !is_mul_ok(a2, 0x10uLL) )
    v3 = -1LL;
  v4 = operator new[](v3, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, v3);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
