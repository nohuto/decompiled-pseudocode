/*
 * XREFs of ?serialize@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18028AF60
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$save_nothrow@AEAU_tip_TaskViewShowTest@SwitcherTip@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_TaskViewShowTest@SwitcherTip@@@0@@Z @ 0x180289D28 (--$save_nothrow@AEAU_tip_TaskViewShowTest@SwitcherTip@@@tson@@YAXAEAVoutput_archive@0@AEAV-$nvp@.c)
 */

void __fastcall tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    v7 = 4;
    v6 = "test";
    v8 = (a1 + 248) & -(__int64)(a1 != 0);
    tson::save_nothrow<SwitcherTip::_tip_TaskViewShowTest &>(a2, (__int64)&v6);
  }
}
