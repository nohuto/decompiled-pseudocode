/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800AC42C
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x180049340 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800AAAC0 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // r9
  _QWORD *v7; // r8
  _WORD *v8; // rdi
  unsigned __int64 i; // rcx

  v4 = a1[2];
  if ( a2 > a1[3] - v4 )
  {
    LOBYTE(a3) = 0;
    return std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
             a1,
             a2,
             a3,
             a2);
  }
  else
  {
    v5 = a1[3] < 8uLL;
    v6 = v4 + a2;
    a1[2] = v4 + a2;
    v7 = a1;
    if ( !v5 )
      v7 = (_QWORD *)*a1;
    v8 = (_WORD *)v7 + v4;
    if ( a2 )
    {
      for ( i = a2; i; --i )
        *v8++ = 0;
    }
    *((_WORD *)v7 + v6) = 0;
    return a1;
  }
}
