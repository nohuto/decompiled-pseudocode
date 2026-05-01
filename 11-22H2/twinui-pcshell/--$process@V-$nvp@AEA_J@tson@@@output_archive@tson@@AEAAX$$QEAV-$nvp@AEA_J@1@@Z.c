/*
 * XREFs of ??$process@V?$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_J@1@@Z @ 0x180464084
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEA_J@1@000000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1801FD3D4 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V12@@outp.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180013BC4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 */

bool __fastcall tson::output_archive::process<tson::nvp<__int64 &>>(__int64 a1, __int64 *a2)
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
  result = tson::output_archive::write_type((tson::output_archive *)a1, v5, 19);
  if ( result )
    return tson::write_buffer::push_back(*(void ***)(a1 + 144), &v7, 8uLL);
  return result;
}
