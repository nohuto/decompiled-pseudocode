/*
 * XREFs of ??$_Uninitialized_move_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@QEAV10@0@Z @ 0x18003ACF0
 * Callers:
 *     ??$_Buffered_rotate_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@00_J101@Z @ 0x18003A080 (--$_Buffered_rotate_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV-$sh.c)
 *     ??$_Inplace_merge_buffer_left@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00QEAV10@P6A_NAEBV10@2@Z@Z @ 0x18003A4A8 (--$_Inplace_merge_buffer_left@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std.c)
 *     ??$_Inplace_merge_buffer_right@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00QEAV10@P6A_NAEBV10@2@Z@Z @ 0x18003A5C4 (--$_Inplace_merge_buffer_right@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z.c)
 *     ??$_Uninitialized_chunked_merge_unchecked2@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@0_JP6A_NAEBV10@3@Z@Z @ 0x18003AB64 (--$_Uninitialized_chunked_merge_unchecked2@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@V12.c)
 *     ??$_Uninitialized_merge_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@PEAV10@QEAV10@11P6A_NAEBV10@2@Z@Z @ 0x18003ABFC (--$_Uninitialized_merge_move@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; i += 2 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
    *a3 = *i;
    a3[1] = i[1];
    a3 += 2;
    *i = 0LL;
    i[1] = 0LL;
  }
  return a3;
}
