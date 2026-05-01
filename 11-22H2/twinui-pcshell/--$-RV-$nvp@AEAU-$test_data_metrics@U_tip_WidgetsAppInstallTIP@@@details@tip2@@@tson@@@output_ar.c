/*
 * XREFs of ??$?RV?$nvp@AEAU?$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip2@@@1@@Z @ 0x18022EEE4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024BDE0 (-serialize@-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x180461918 (--$-RV-$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tip2::details::test_data_metrics<_tip_WidgetsAppInstallTIP> &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  _DWORD **v4; // rdi
  _DWORD *v5; // rbx
  const char *v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]
  _DWORD *v9; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_DWORD ***)(a2 + 16);
  tson::output_archive::startNode(this);
  v5 = *v4;
  v7 = "installState";
  v5 += 22;
  v8 = 12;
  v9 = v5;
  tson::output_archive::operator()<tson::nvp<unsigned long &>>(this, &v7);
  *v4[1] = *v5;
  tson::output_archive::finishNode(this);
  return this;
}
