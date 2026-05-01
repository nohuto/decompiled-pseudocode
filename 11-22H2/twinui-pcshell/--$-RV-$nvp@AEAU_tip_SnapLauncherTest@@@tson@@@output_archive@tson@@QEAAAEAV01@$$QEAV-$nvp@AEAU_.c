/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_SnapLauncherTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SnapLauncherTest@@@1@@Z @ 0x180220408
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1802234E0 (-serialize@-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEA_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180220470 (--$-RV-$nvp@AEA_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<_tip_SnapLauncherTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v7 = 17;
  v6 = "launchedWithAumid";
  v8 = v4 + 17;
  tson::output_archive::operator()<tson::nvp<bool &>>(this, &v6);
  tson::output_archive::finishNode(this);
  return this;
}
