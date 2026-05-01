/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_K@2@V32@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_K@1@1$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231160
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232624 (--$serialize@Voutput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x18022471C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x180461870 (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1804639A4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x180464144 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<long &>,tson::nvp<unsigned __int64 &>,tson::nvp<unsigned __int64 &>,tson::nvp<std::vector<int> &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // r8
  char v9; // dl
  int **v10; // rbx
  int *v11; // rdi
  int *i; // rbx

  tson::output_archive::process<tson::nvp<long &>>(this, a2);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(this, a3);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(this, a4);
  v8 = a5;
  v9 = *(_BYTE *)(a5 + 8);
  *(_QWORD *)this = *(_QWORD *)a5;
  *((_BYTE *)this + 8) = v9;
  v10 = *(int ***)(v8 + 16);
  tson::output_archive::startNode(this);
  a5 = v10[1] - *v10;
  tson::output_archive::operator()<tson::size_tag>(this, &a5);
  v11 = v10[1];
  for ( i = *v10; i != v11; ++i )
    tson::output_archive::operator()<int &>((void ***)this, i);
  tson::output_archive::finishNode(this);
  return tson::output_archive::process<tson::nvp<std::wstring &>>(this);
}
