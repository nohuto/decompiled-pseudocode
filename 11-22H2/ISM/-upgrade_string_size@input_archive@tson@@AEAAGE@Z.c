/*
 * XREFs of ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x18006D174
 * Callers:
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x1800698B0 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x18006998C (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x180069A30 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 * Callees:
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x1800691F8 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
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
