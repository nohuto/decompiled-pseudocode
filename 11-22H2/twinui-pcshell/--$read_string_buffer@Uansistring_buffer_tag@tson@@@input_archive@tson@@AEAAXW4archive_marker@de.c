/*
 * XREFs of ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x180465154
 * Callers:
 *     ??$process@V?$nvp@AEAG@tson@@V?$nvp@AEAUansistring_buffer_tag@tson@@@2@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@1@Z @ 0x180463404 (--$process@V-$nvp@AEAG@tson@@V-$nvp@AEAUansistring_buffer_tag@tson@@@2@V-$nvp@AEAI@2@V-$nvp@AEAU.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_buffer_tag@tson@@@2@V?$nvp@AEAG@2@V32@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@1@Z @ 0x1804639FC (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_buffer_tag@tson@@@2@V-$nvp@AEAG@2@V32@V-$nvp@.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18046CBC8 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x180462F40 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x18046E0EC (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 */

char __fastcall tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(
        tson::input_archive *this,
        unsigned __int8 a2,
        __int64 a3)
{
  _BYTE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rbx
  unsigned __int16 v10; // ax
  tson::read_buffer *v11; // rcx
  _BYTE *v12; // rdx
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int8 v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  LOBYTE(v5) = tson::input_archive::search(this);
  if ( (_BYTE)v5 )
  {
    LOBYTE(v6) = 23;
    tson::input_archive::consume_expected_marker(this, v6, 2147944029LL);
    v7 = *(_QWORD *)this;
    v18 = 0;
    tson::read_buffer::consume<unsigned char>(v7, &v18);
    if ( v18 > 1u )
    {
      v8 = tson::input_archive::upgrade_string_size(this, v18);
      v9 = *(_QWORD *)(a3 + 8);
      v10 = v8 - 1;
      v11 = *(tson::read_buffer **)this;
      v12 = *(_BYTE **)a3;
      v13 = v10;
      if ( v10 >= v9 )
      {
        v14 = v9 - 1;
        tson::read_buffer::consume_n(v11, v12, v14);
        v5 = *(_BYTE **)a3;
        *(_BYTE *)(v14 + *(_QWORD *)a3) = 0;
        v15 = *(_QWORD *)this;
        v16 = v13 + *(_QWORD *)(*(_QWORD *)this + 8LL) - v14;
        if ( v16 > *(_QWORD *)(*(_QWORD *)this + 16LL) )
          *(_BYTE *)(v15 + 24) = 1;
        else
          *(_QWORD *)(v15 + 8) = v16;
      }
      else
      {
        tson::read_buffer::consume_n(v11, v12, v10);
        v5 = *(_BYTE **)a3;
        *(_BYTE *)(v13 + *(_QWORD *)a3) = 0;
      }
    }
    else
    {
      v5 = *(_BYTE **)a3;
      **(_BYTE **)a3 = 0;
    }
  }
  return (char)v5;
}
