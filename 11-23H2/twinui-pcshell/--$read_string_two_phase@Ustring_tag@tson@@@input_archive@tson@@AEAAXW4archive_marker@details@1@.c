/*
 * XREFs of ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x1804653C0
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18028BEDC (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18046CBC8 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18046D0A0 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x180462F40 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x18046E0EC (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 */

char __fastcall tson::input_archive::read_string_two_phase<tson::string_tag>(
        tson::input_archive *this,
        unsigned __int8 a2,
        __int64 a3)
{
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rdx
  __int64 v9; // r8
  unsigned __int8 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  if ( *(_BYTE *)(a3 + 16) )
  {
    v8 = *(void **)a3;
    if ( !*(_QWORD *)a3 || (v9 = *(_QWORD *)(a3 + 8)) == 0 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(this);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v8, 2 * v9 - 2);
    v5 = *(void **)a3;
    *(_WORD *)(*(_QWORD *)a3 + 2LL * *(_QWORD *)(a3 + 8) - 2) = 0;
  }
  else
  {
    *(_BYTE *)(a3 + 16) = 1;
    LOBYTE(v5) = tson::input_archive::search(this);
    if ( (_BYTE)v5 )
    {
      LOBYTE(v6) = 24;
      tson::input_archive::consume_expected_marker(this, v6, 2147944029LL);
      v7 = *(_QWORD *)this;
      v11 = 0;
      tson::read_buffer::consume<unsigned char>(v7, &v11);
      LOWORD(v5) = tson::input_archive::upgrade_string_size(this, v11);
      *(_QWORD *)(a3 + 8) = (unsigned __int16)v5;
    }
  }
  return (char)v5;
}
