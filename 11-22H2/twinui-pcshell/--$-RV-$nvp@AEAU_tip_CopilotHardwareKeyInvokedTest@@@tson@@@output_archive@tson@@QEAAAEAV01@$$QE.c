/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_CopilotHardwareKeyInvokedTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_CopilotHardwareKeyInvokedTest@@@1@@Z @ 0x18025D80C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180275C50 (-serialize@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVoutput_.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<_tip_CopilotHardwareKeyInvokedTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  tson::output_archive::startNode(this);
  *((_BYTE *)this + 8) = 22;
  *(_QWORD *)this = "reason::settingsInvoke";
  tson::output_archive::saveValue(this, 3);
  *((_BYTE *)this + 8) = 20;
  *(_QWORD *)this = "reason::searchInvoke";
  tson::output_archive::saveValue(this, 2);
  tson::output_archive::finishNode(this);
  return this;
}
