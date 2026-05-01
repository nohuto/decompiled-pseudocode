/*
 * XREFs of ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18046371C
 * Callers:
 *     ??$?RV?$nvp@AEAU_tip_SearchHomeRenderTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SearchHomeRenderTest@@@1@@Z @ 0x1801E5AC8 (--$-RV-$nvp@AEAU_tip_SearchHomeRenderTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@A.c)
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V?$nvp@AEAI@1@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAI@1@0@Z @ 0x1801E5E7C (--$-RV-$nvp@AEA_N@tson@@V01@V01@V-$nvp@AEAI@1@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@A.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x1801FD2E4 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V-$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@outpu.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18022399C (--$serialize@Voutput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1802249E8 (--$serialize@Voutput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 *     ??$?RV?$nvp@AEAU_tip_WindowDragInputProviderTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_WindowDragInputProviderTest@@@1@@Z @ 0x18022BAD8 (--$-RV-$nvp@AEAU_tip_WindowDragInputProviderTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@0@Z @ 0x18025FD1C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAI@2@V-$nvp@AEAH@2@V12@V-$nvp@AEAW4keyPressType@@@2@V12@@.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180013BC4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 */

bool __fastcall tson::output_archive::process<tson::nvp<unsigned int &>>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  bool result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = v3;
  v5 = *(_DWORD *)a2[2];
  result = tson::output_archive::write_type((tson::output_archive *)a1, v5 == 0, 16);
  if ( result )
    return tson::write_buffer::push_back(*(void ***)(a1 + 144), &v5, 4uLL);
  return result;
}
