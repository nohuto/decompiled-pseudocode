/*
 * XREFs of ?end@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@2@XZ @ 0x180063ED0
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18005DB48 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::string::end(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  if ( a1[3] < 0x10uLL )
    v2 = a1;
  else
    v2 = (_QWORD *)*a1;
  result = a2;
  *a2 = (char *)v2 + a1[2];
  return result;
}
