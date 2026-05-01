/*
 * XREFs of ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x18046E0EC
 * Callers:
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x180465154 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_buffer_tag@1@@Z @ 0x180465230 (--$read_string_buffer@Ustring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x18046531C (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x1804653C0 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18046BF0C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 * Callees:
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x180462F40 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 */

unsigned __int16 __fastcall tson::input_archive::upgrade_string_size(tson::input_archive *this, char a2)
{
  __int16 v2; // r9
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( a2 >= 0 )
    return (unsigned __int8)a2;
  tson::read_buffer::consume<unsigned char>(*(_QWORD *)this, &v4);
  return (v2 << 8) | v4;
}
