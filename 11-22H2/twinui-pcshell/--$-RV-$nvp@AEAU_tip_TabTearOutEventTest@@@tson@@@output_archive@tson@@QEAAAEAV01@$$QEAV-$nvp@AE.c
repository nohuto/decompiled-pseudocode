/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_TabTearOutEventTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_TabTearOutEventTest@@@1@@Z @ 0x180223574
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1802242D0 (-serialize@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@ts.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<_tip_TabTearOutEventTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  *((_BYTE *)this + 8) = 15;
  *(_QWORD *)this = "startSnapRegion";
  tson::output_archive::saveValue(this, *(_DWORD *)(v4 + 20));
  *((_BYTE *)this + 8) = 13;
  *(_QWORD *)this = "endSnapRegion";
  tson::output_archive::saveValue(this, *(_DWORD *)(v4 + 24));
  *((_BYTE *)this + 8) = 19;
  *(_QWORD *)this = "snapAssistCancelled";
  tson::output_archive::saveValue(this, *(_BYTE *)(v4 + 16));
  tson::output_archive::finishNode(this);
  return this;
}
