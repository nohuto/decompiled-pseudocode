/*
 * XREFs of ??$save_nothrow@AEAU_tip_TaskViewShowTest@SwitcherTip@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_TaskViewShowTest@SwitcherTip@@@0@@Z @ 0x180289D28
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18028AF60 (-serialize@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x18022471C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

void __fastcall tson::save_nothrow<SwitcherTip::_tip_TaskViewShowTest &>(tson::output_archive *this, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  *((_BYTE *)this + 8) = 5;
  *(_QWORD *)this = "shown";
  tson::output_archive::saveValue(this, *(_BYTE *)(v4 + 16));
  *((_BYTE *)this + 8) = 15;
  *(_QWORD *)this = "switchItemCount";
  tson::output_archive::operator()<int &>((void ***)this, (int *)(v4 + 20));
  *((_BYTE *)this + 8) = 12;
  *(_QWORD *)this = "monitorCount";
  tson::output_archive::operator()<int &>((void ***)this, (int *)(v4 + 24));
  *((_BYTE *)this + 8) = 12;
  *(_QWORD *)this = "invokeMethod";
  tson::output_archive::saveValue(this, *(_DWORD *)(v4 + 28));
  tson::output_archive::finishNode(this);
}
