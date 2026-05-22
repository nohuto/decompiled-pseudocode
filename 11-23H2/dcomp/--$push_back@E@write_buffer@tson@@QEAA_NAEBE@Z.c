/*
 * XREFs of ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x18009D148
 * Callers:
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x18009C534 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x18009D7B8 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x18009F880 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x18009F9B4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18009EB34 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 */

bool __fastcall tson::write_buffer::push_back<unsigned char>(tson::write_buffer *a1, _BYTE *a2)
{
  bool result; // al

  if ( *((_QWORD *)a1 + 259) < *((_QWORD *)a1 + 260) || (result = tson::write_buffer::reserve(a1, 1uLL)) )
  {
    result = 1;
    *(_BYTE *)(*((_QWORD *)a1 + 259))++ = *a2;
  }
  return result;
}
