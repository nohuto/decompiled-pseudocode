/*
 * XREFs of ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@0@V10@V10@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@@Z @ 0x1800590F4
 * Callers:
 *     ?AddLayer@Camera@Engine@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180059DAC (-AddLayer@Camera@Engine@Spectre@@QEAAXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_.c)
 * Callees:
 *     ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790 (-compare@-$_WChar_traits@_W@std@@SAHQEB_W0_K@Z.c)
 */

__int64 **__fastcall std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>,std::wstring>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *v5; // r10
  __int64 *i; // r11
  _WORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 **result; // rax

  v5 = a3;
  for ( i = a2; i != v5; i += 4 )
  {
    v8 = (_WORD *)a4;
    if ( *(_QWORD *)(a4 + 24) >= 8uLL )
      v8 = *(_WORD **)a4;
    v9 = (__int64)i;
    v10 = i[2];
    if ( (unsigned __int64)i[3] >= 8 )
      v9 = *i;
    if ( v10 == *(_QWORD *)(a4 + 16) && !(unsigned int)std::_WChar_traits<wchar_t>::compare(v9, v8, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
