/*
 * XREFs of ??$_Chunked_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0_J_JP6A_NAEBV10@4@Z@Z @ 0x18003A1A8
 * Callers:
 *     ??$_Buffered_merge_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J0P6A_NAEBV10@2@Z@Z @ 0x180039F74 (--$_Buffered_merge_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 * Callees:
 *     ??$_Merge_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@PEAV10@QEAV10@10P6A_NAEBV10@2@Z@Z @ 0x18003A85C (--$_Merge_move@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAPEAV.c)
 */

__int64 __fastcall std::_Chunked_merge_unchecked<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rsi
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbx

  v6 = a5;
  if ( a4 < a5 )
  {
    v10 = 2 * a4;
    do
    {
      v11 = v6 - a4;
      v12 = a1 + 8 * v10;
      v13 = v11;
      if ( v11 >= a4 )
        v13 = a4;
      v6 = v11 - v13;
      v14 = v12 + 16 * v13;
      a3 = std::_Merge_move<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
             a1,
             v12,
             v14,
             a3,
             a6);
      a1 = v14;
    }
    while ( a4 < v6 );
  }
  return std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
           a1,
           a2,
           a3);
}
