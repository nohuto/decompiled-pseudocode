/*
 * XREFs of ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x180461C0C
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180289230 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800132C4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(
        tson::output_archive *this,
        __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v5[2]; // [rsp+20h] [rbp-28h]

  v3 = *a2;
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)this = v3;
  *(_OWORD *)v5 = *((_OWORD *)a2 + 1);
  if ( tson::output_archive::write_type(this, v5[0] == 0, 23) )
    tson::output_archive::write_string_bytes(this, v5[1], (void *)v5[0], v5[1]);
  return this;
}
