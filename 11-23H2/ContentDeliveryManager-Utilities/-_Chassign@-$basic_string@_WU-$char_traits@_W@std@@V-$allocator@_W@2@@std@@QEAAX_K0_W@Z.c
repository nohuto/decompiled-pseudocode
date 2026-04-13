/*
 * XREFs of ?_Chassign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0_W@Z @ 0x18006025C
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180062A0C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180062CF4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1800B8C20 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1800B8CD0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall std::wstring::_Chassign(_QWORD *a1, __int64 a2, size_t a3, wchar_t a4)
{
  wchar_t *result; // rax

  if ( a3 == 1 )
  {
    if ( a1[3] >= 8uLL )
      a1 = (_QWORD *)*a1;
    *((_WORD *)a1 + a2) = a4;
  }
  else
  {
    if ( a1[3] >= 8uLL )
      a1 = (_QWORD *)*a1;
    return wmemset((wchar_t *)a1 + a2, a4, a3);
  }
  return result;
}
