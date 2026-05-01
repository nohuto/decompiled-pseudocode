/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18076723C
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18028BEDC (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 * Callees:
 *     wmemset @ 0x1801AE20C (wmemset.c)
 *     ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x180761CC0 (--$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@-$basic_string@_WU-$char.c)
 */

_QWORD *__fastcall std::wstring::append(wchar_t *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // rdi
  wchar_t *v7; // rbx
  _QWORD *v8; // r10
  _QWORD *result; // rax
  wchar_t v10; // dx

  v4 = *((_QWORD *)a1 + 2);
  if ( a2 > *((_QWORD *)a1 + 3) - v4 )
  {
    LOBYTE(a3) = 0;
    return std::wstring::_Reallocate_grow_by<_lambda_a3050a43f3157934f354774ab3dd2e02_,unsigned __int64,wchar_t>(
             a1,
             a2,
             a3,
             a2);
  }
  else
  {
    v5 = *((_QWORD *)a1 + 3) < 8uLL;
    v6 = v4 + a2;
    *((_QWORD *)a1 + 2) = v4 + a2;
    v7 = a1;
    if ( !v5 )
      v7 = *(wchar_t **)a1;
    wmemset(&v7[v4], 0, a2);
    result = v8;
    v7[v6] = v10;
  }
  return result;
}
