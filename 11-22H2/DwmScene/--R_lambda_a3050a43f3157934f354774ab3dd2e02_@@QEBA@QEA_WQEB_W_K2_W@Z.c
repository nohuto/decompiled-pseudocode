/*
 * XREFs of ??R_lambda_a3050a43f3157934f354774ab3dd2e02_@@QEBA@QEA_WQEB_W_K2_W@Z @ 0x18001F1A4
 * Callers:
 *     ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x18001EBC8 (--$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@-$basic_string@_WU-$char.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 */

__int64 __fastcall _lambda_a3050a43f3157934f354774ab3dd2e02_::operator()(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  char *v8; // rdi
  __int64 i; // rcx
  __int64 result; // rax

  v5 = 2 * a4;
  memcpy_0(a2, a3, 2 * a4);
  v8 = &a2[v5];
  if ( a5 )
  {
    for ( i = a5; i; --i )
    {
      *(_WORD *)v8 = 0;
      v8 += 2;
    }
  }
  result = a4 + a5;
  *(_WORD *)&a2[2 * a4 + 2 * a5] = 0;
  return result;
}
