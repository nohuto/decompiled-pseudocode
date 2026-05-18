/*
 * XREFs of ?end@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@2@XZ @ 0x18001F7DC
 * Callers:
 *     ?ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x18009023C (-ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::string::end(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = a1;
  if ( a1[3] >= 0x10uLL )
    v2 = (_QWORD *)*a1;
  result = a2;
  *a2 = (char *)v2 + a1[2];
  return result;
}
