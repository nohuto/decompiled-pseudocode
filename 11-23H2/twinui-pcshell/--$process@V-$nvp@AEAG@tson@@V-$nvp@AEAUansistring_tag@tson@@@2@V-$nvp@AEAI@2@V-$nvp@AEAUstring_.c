/*
 * XREFs of ??$process@V?$nvp@AEAG@tson@@V?$nvp@AEAUansistring_tag@tson@@@2@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x180463520
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_tag@tson@@@2@V?$nvp@AEAG@2@V32@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x180463AB8 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_tag@tson@@@2@V-$nvp@AEAG@2@V32@V-$nvp@AEAI@2@.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800132C4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180013BC4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_tag &>,tson::nvp<tson::ansistring_tag &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  void ***v6; // rdi
  char v7; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17[2]; // [rsp+20h] [rbp-20h]
  unsigned __int64 v18[2]; // [rsp+20h] [rbp-20h]
  unsigned __int64 v19[2]; // [rsp+20h] [rbp-20h]
  int v20; // [rsp+60h] [rbp+20h] BYREF

  v6 = (void ***)((char *)this + 144);
  v7 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v7;
  LOWORD(v20) = **(_WORD **)(a2 + 16);
  if ( tson::output_archive::write_type(this, (_WORD)v20 == 0, 14) )
    tson::write_buffer::push_back(*v6, &v20, 2uLL);
  v11 = *a3;
  *((_BYTE *)this + 8) = *((_BYTE *)a3 + 8);
  *(_QWORD *)this = v11;
  *(_OWORD *)v17 = *(_OWORD *)a3[2];
  if ( tson::output_archive::write_type(this, v17[0] == 0, 23) )
    tson::output_archive::write_string_bytes(this, v17[1], (void *)v17[0], v17[1]);
  v12 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v12;
  v20 = *(_DWORD *)a4[2];
  if ( tson::output_archive::write_type(this, v20 == 0, 16) )
    tson::write_buffer::push_back(*v6, &v20, 4uLL);
  v13 = (__int64)a5;
  v14 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v14;
  *(_OWORD *)v18 = *(_OWORD *)*(_QWORD *)(v13 + 16);
  if ( tson::output_archive::write_type(this, v18[0] == 0, 24) )
    tson::output_archive::write_string_bytes(this, v18[1], (void *)v18[0], 2 * v18[1]);
  v15 = (__int64)a6;
  v16 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v16;
  *(_OWORD *)v19 = *(_OWORD *)*(_QWORD *)(v15 + 16);
  if ( tson::output_archive::write_type(this, v19[0] == 0, 23) )
    tson::output_archive::write_string_bytes(this, v19[1], (void *)v19[0], v19[1]);
}
