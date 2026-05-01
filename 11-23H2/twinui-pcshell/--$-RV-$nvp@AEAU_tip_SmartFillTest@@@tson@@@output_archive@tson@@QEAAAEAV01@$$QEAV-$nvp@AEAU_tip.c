/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_SmartFillTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SmartFillTest@@@1@@Z @ 0x180224764
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180225310 (-serialize@-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<_tip_SmartFillTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  int *v4; // rbx

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(int **)(a2 + 16);
  tson::output_archive::startNode(this);
  *((_BYTE *)this + 8) = 15;
  *(_QWORD *)this = "anchorLocations";
  tson::output_archive::saveValue(this, v4[16]);
  *((_BYTE *)this + 8) = 31;
  *(_QWORD *)this = "fillToHorizontalAnchorLocations";
  tson::output_archive::saveValue(this, v4[22]);
  *((_BYTE *)this + 8) = 29;
  *(_QWORD *)this = "fillToVerticalAnchorLocations";
  tson::output_archive::saveValue(this, v4[28]);
  tson::output_archive::finishNode(this);
  return this;
}
