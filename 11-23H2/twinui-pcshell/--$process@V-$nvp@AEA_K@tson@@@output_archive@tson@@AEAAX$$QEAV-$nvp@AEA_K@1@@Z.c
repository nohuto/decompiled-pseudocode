/*
 * XREFs of ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x180464144
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_K@2@V32@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_K@1@1$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231160 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_K@2@V32@V-$nvp@AEAV-$vector@HV-$allocator@H@std@@@std@@@.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232B70 (--$serialize@Voutput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVoutput_archive@.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180233198 (--$serialize@Voutput_archive@tson@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180013BC4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 */

bool __fastcall tson::output_archive::process<tson::nvp<unsigned __int64 &>>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  bool v5; // zf
  bool result; // al
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = v3;
  v4 = (__int64 *)a2[2];
  v5 = *v4 == 0;
  v7 = *v4;
  result = tson::output_archive::write_type((tson::output_archive *)a1, v5, 20);
  if ( result )
    return tson::write_buffer::push_back(*(void ***)(a1 + 144), &v7, 8uLL);
  return result;
}
