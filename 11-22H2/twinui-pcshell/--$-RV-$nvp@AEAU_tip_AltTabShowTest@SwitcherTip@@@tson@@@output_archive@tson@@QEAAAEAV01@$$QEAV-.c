/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_AltTabShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_AltTabShowTest@SwitcherTip@@@1@@Z @ 0x18028957C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180289A60 (-serialize@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_ar.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x180289648 (--$-RV-$nvp@AEA_N@tson@@V-$nvp@AEAH@1@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@$$QEA.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<SwitcherTip::_tip_AltTabShowTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  const char *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v7 = 15;
  v6 = "switchItemCount";
  v10 = 5;
  v8 = v4 + 20;
  v9 = "shown";
  v11 = v4 + 16;
  tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<int &>>(this, &v9, &v6);
  tson::output_archive::finishNode(this);
  return this;
}
