/*
 * XREFs of ??4?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180235B5C
 * Callers:
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@0@XZ @ 0x180230A1C (--$open@V-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV-$ti.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249B88 (-ensure_data@-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@AEBAAEAV-$co.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@AEAAKXZ @ 0x180240F68 (-Release@-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@AEAAKXZ.c)
 */

void **__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::Release(v4);
  return a1;
}
