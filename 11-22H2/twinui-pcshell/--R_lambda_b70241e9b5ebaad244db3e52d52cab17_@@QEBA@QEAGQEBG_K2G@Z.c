/*
 * XREFs of ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x1803918C4
 * Callers:
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x180391334 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 * Callees:
 *     wmemset @ 0x1801AE20C (wmemset.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

__int64 __fastcall _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        size_t N,
        wchar_t a6)
{
  __int64 v6; // rbx
  __int64 v9; // r8
  __int64 result; // rax

  v6 = 2 * a4;
  memcpy_0(a2, a3, 2 * a4);
  wmemset((wchar_t *)&a2[v6], a6, N);
  result = 0LL;
  *(_WORD *)&a2[2 * a4 + 2 * v9] = 0;
  return result;
}
