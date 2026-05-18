/*
 * XREFs of ?end@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@2@XZ @ 0x18001F800
 * Callers:
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::end(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = a1;
  if ( a1[3] >= 8uLL )
    v2 = (_QWORD *)*a1;
  result = a2;
  *a2 = (char *)v2 + 2 * a1[2];
  return result;
}
