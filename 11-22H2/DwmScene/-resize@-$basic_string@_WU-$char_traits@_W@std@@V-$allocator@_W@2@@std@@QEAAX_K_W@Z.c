/*
 * XREFs of ?resize@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K_W@Z @ 0x18001F9FC
 * Callers:
 *     ?StringToWString@Utils@Spectre@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEBD_K@Z @ 0x18001F234 (-StringToWString@Utils@Spectre@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$all_ea_18001F234.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x18001EBC8 (--$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@-$basic_string@_WU-$char.c)
 */

void __fastcall std::wstring::resize(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r10
  unsigned __int64 v6; // rcx
  bool v7; // cf
  _WORD *v8; // rdi
  __int64 v9; // r9

  v3 = a1 + 2;
  v4 = a1[2];
  v5 = a1;
  if ( a2 <= v4 )
  {
    if ( a1[3] >= 8uLL )
      v5 = (_QWORD *)*a1;
    *v3 = a2;
LABEL_11:
    *((_WORD *)v5 + a2) = 0;
    return;
  }
  v6 = a2 - v4;
  if ( a2 - v4 <= v5[3] - v4 )
  {
    v7 = v5[3] < 8uLL;
    *v3 = a2;
    if ( !v7 )
      v5 = (_QWORD *)*v5;
    v8 = (_WORD *)v5 + v4;
    if ( v6 )
    {
      while ( v6 )
      {
        *v8++ = 0;
        --v6;
      }
    }
    goto LABEL_11;
  }
  v9 = a2 - v4;
  LOBYTE(a2) = 0;
  std::wstring::_Reallocate_grow_by<_lambda_a3050a43f3157934f354774ab3dd2e02_,unsigned __int64,wchar_t>(v5, v6, a2, v9);
}
