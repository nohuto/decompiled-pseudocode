/*
 * XREFs of ?serialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18046DF50
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180465BCC (--$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@t.c)
 */

void __fastcall tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rbx

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *((_BYTE *)a2 + 8) = 15;
    v6 = a1 + 264;
    if ( !a1 )
      v6 = 16LL;
    *(_QWORD *)a2 = "install_trigger";
    tson::output_archive::saveValue(a2, *(_DWORD *)v6);
    *(_DWORD *)(a1 + 184) = *(unsigned __int8 *)v6;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    _tip_SearchWebProviderInstallTest::serialize<tson::output_archive>((a1 + 248) & -(__int64)(a1 != 0), a2);
    tson::output_archive::finishNode(a2);
  }
}
