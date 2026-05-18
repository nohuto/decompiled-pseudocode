/*
 * XREFs of ??$_Uninitialized_chunked_merge_unchecked2@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@0_JP6A_NAEBV10@3@Z@Z @ 0x18003AB64
 * Callers:
 *     ??$_Buffered_merge_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J0P6A_NAEBV10@2@Z@Z @ 0x180039F74 (--$_Buffered_merge_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 * Callees:
 *     ??$_Uninitialized_merge_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@PEAV10@QEAV10@11P6A_NAEBV10@2@Z@Z @ 0x18003ABFC (--$_Uninitialized_merge_move@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@.c)
 *     ??$_Uninitialized_move_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@QEAV10@0@Z @ 0x18003ACF0 (--$_Uninitialized_move_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Uninitialized_chunked_merge_unchecked2<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component>,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 i; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx

  for ( i = a4; i > 32; a1 = v11 )
  {
    v8 = i - 32;
    v9 = a1 + 512;
    v10 = 32LL;
    if ( v8 < 32 )
      v10 = v8;
    i = v8 - v10;
    v11 = v9 + 16 * v10;
    a3 = std::_Uninitialized_merge_move<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera>,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
           a1,
           v9,
           v11,
           a3,
           a5);
  }
  return std::_Uninitialized_move_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
           a1,
           a2,
           a3);
}
