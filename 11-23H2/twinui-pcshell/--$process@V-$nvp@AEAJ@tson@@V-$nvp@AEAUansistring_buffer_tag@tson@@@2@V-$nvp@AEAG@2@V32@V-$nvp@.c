/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_buffer_tag@tson@@@2@V?$nvp@AEAG@2@V32@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@1@Z @ 0x1804639FC
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18046D188 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x180465154 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<long &>,tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_buffer_tag &>,tson::nvp<tson::ansistring_buffer_tag &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8)
{
  char v8; // r10
  _DWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax

  v8 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v8;
  v12 = *(_DWORD **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v13) = 17;
    tson::input_archive::consume_expected_marker(this, v13, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v12, 4uLL);
  }
  else
  {
    *v12 = 0;
  }
  v14 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v14;
  tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(this);
  return tson::input_archive::process<tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_buffer_tag &>,tson::nvp<tson::ansistring_buffer_tag &>>(
           this,
           a4,
           a5,
           a6,
           a7,
           a8);
}
