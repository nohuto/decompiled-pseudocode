/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_SearchHomeRenderTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SearchHomeRenderTest@@@1@@Z @ 0x1801E5AC8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1801F14E0 (-serialize@-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18046371C (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<_tip_SearchHomeRenderTest &>>(
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
  *((_BYTE *)this + 8) = 29;
  v6 = "transition_type";
  v7 = 15;
  v8 = v4 + 20;
  *(_QWORD *)this = "activated_again_before_render";
  tson::output_archive::saveValue(this, *(_BYTE *)(v4 + 16));
  *((_BYTE *)this + 8) = 6;
  *(_QWORD *)this = "hidden";
  tson::output_archive::saveValue(this, *(_BYTE *)(v4 + 17));
  tson::output_archive::process<tson::nvp<unsigned int &>>(this, &v6);
  tson::output_archive::finishNode(this);
  return this;
}
