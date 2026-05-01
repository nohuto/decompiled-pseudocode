/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_tag@tson@@@2@V?$nvp@AEAG@2@V32@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x180463AB8
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18046DCB4 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800132C4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180013BC4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<long &>,tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_tag &>,tson::nvp<tson::ansistring_tag &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8)
{
  char v9; // r10
  __int64 v12; // rax
  unsigned __int64 v13[2]; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v9 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v9;
  v14 = **(_DWORD **)(a2 + 16);
  if ( tson::output_archive::write_type(this, v14 == 0, 17) )
    tson::write_buffer::push_back(*((void ***)this + 18), &v14, 4uLL);
  v12 = *a3;
  *((_BYTE *)this + 8) = *((_BYTE *)a3 + 8);
  *(_QWORD *)this = v12;
  *(_OWORD *)v13 = *(_OWORD *)a3[2];
  if ( tson::output_archive::write_type(this, v13[0] == 0, 23) )
    tson::output_archive::write_string_bytes(this, v13[1], (void *)v13[0], v13[1]);
  tson::output_archive::process<tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_tag &>,tson::nvp<tson::ansistring_tag &>>(
    this,
    a4,
    a5,
    a6,
    a7,
    a8);
}
