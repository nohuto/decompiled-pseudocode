/*
 * XREFs of ??$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@details@1@@Z @ 0x18009D19C
 * Callers:
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x18009D7B8 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x18009E47C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x18009F880 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x18009FA64 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18009EB34 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 */

bool __fastcall tson::write_buffer::push_back<enum tson::details::archive_marker>(tson::write_buffer *a1, _BYTE *a2)
{
  bool result; // al

  if ( *((_QWORD *)a1 + 259) < *((_QWORD *)a1 + 260) || (result = tson::write_buffer::reserve(a1, 1uLL)) )
  {
    result = 1;
    *(_BYTE *)(*((_QWORD *)a1 + 259))++ = *a2;
  }
  return result;
}
