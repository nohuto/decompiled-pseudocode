/*
 * XREFs of ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1804618C4
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180289230 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x180013B78 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<unsigned char &>>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  char *v4; // rax
  bool v5; // zf
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = v3;
  v4 = (char *)a2[2];
  v5 = *v4 == 0;
  v7 = *v4;
  if ( tson::output_archive::write_type((tson::output_archive *)a1, v5, 12) )
    tson::write_buffer::push_back<unsigned char>(*(tson::write_buffer **)(a1 + 144), &v7);
  return a1;
}
