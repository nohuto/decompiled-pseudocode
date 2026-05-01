/*
 * XREFs of ??$process@V?$nvp@AEAG@tson@@V?$nvp@AEAUansistring_buffer_tag@tson@@@2@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@1@Z @ 0x180463404
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_buffer_tag@tson@@@2@V?$nvp@AEAG@2@V32@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@1@Z @ 0x1804639FC (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_buffer_tag@tson@@@2@V-$nvp@AEAG@2@V32@V-$nvp@.c)
 * Callees:
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x180465154 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_buffer_tag@1@@Z @ 0x180465230 (--$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_buffer_tag &>,tson::nvp<tson::ansistring_buffer_tag &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  char v6; // r10
  _WORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax

  v6 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v6;
  v10 = *(_WORD **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v11) = 14;
    tson::input_archive::consume_expected_marker(this, v11, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v10, 2uLL);
  }
  else
  {
    *v10 = 0;
  }
  v12 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v12;
  tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(this);
  v13 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v13;
  v14 = (_DWORD *)a4[2];
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v15) = 16;
    tson::input_archive::consume_expected_marker(this, v15, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v14, 4uLL);
  }
  else
  {
    *v14 = 0;
  }
  v16 = *a5;
  *((_BYTE *)this + 24) = *((_BYTE *)a5 + 8);
  *((_QWORD *)this + 2) = v16;
  tson::input_archive::read_string_buffer<tson::string_buffer_tag>(this);
  v17 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v17;
  return tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(this);
}
