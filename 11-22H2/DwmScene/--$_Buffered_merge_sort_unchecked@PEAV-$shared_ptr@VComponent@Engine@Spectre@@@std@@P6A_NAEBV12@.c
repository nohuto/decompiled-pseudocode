/*
 * XREFs of ??$_Buffered_merge_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J0P6A_NAEBV10@2@Z@Z @ 0x180039F74
 * Callers:
 *     ??$_Stable_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J01P6A_NAEBV10@2@Z@Z @ 0x18003AA60 (--$_Stable_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@.c)
 * Callees:
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 *     ??$_Chunked_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0_J_JP6A_NAEBV10@4@Z@Z @ 0x18003A1A8 (--$_Chunked_merge_unchecked@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@.c)
 *     ??$_Insertion_sort_isort_max_chunks@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@_JP6A_NAEBV10@3@Z@Z @ 0x18003A700 (--$_Insertion_sort_isort_max_chunks@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV1.c)
 *     ??$_Uninitialized_chunked_merge_unchecked2@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@0_JP6A_NAEBV10@3@Z@Z @ 0x18003AB64 (--$_Uninitialized_chunked_merge_unchecked2@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@V12.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Buffered_merge_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // r12d
  int v8; // r14d
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 i; // rbp
  __int64 v12; // rbp

  v7 = a2;
  v8 = a1;
  result = std::_Insertion_sort_isort_max_chunks<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
             a1,
             a2,
             a3,
             a5);
  if ( a3 > 32 )
  {
    std::_Uninitialized_chunked_merge_unchecked2<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component>,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
      v8,
      v7,
      a4,
      a3,
      a5);
    v10 = a4 + 16 * a3;
    result = std::_Chunked_merge_unchecked<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
               a4,
               (int)a4 + 16 * (int)a3,
               v8,
               64,
               a3,
               a5);
    for ( i = 128LL; a3 > i; i = 2 * v12 )
    {
      std::_Chunked_merge_unchecked<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
        v8,
        v7,
        a4,
        i,
        a3,
        a5);
      v12 = 2 * i;
      result = std::_Chunked_merge_unchecked<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
                 a4,
                 (int)a4 + 16 * (int)a3,
                 v8,
                 v12,
                 a3,
                 a5);
    }
    while ( a4 != v10 )
    {
      result = std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(a4);
      a4 += 16LL;
    }
  }
  return result;
}
