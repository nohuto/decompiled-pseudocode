/*
 * XREFs of ??$_Buffered_inplace_merge_divide_and_conquer2@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z0011@Z @ 0x180039B2C
 * Callers:
 *     ??$_Buffered_inplace_merge_divide_and_conquer@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039C1C (--$_Buffered_inplace_merge_divide_and_conquer@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A.c)
 * Callees:
 *     ??$_Buffered_inplace_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039DF8 (--$_Buffered_inplace_merge_unchecked@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 *     ??$_Buffered_rotate_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@00_J101@Z @ 0x18003A080 (--$_Buffered_rotate_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV-$sh.c)
 */

__int64 __fastcall std::_Buffered_inplace_merge_divide_and_conquer2<std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  int v15; // edi

  v12 = a4 - a11;
  v15 = std::_Buffered_rotate_unchecked<std::shared_ptr<Spectre::Engine::Component> *>(
          a9,
          a2,
          a10,
          a4 - (int)a11,
          a12,
          a6,
          a7);
  std::_Buffered_inplace_merge_unchecked<std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
    a1,
    a9,
    v15,
    a11,
    a12,
    a6,
    a7,
    a8);
  return std::_Buffered_inplace_merge_unchecked<std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
           v15,
           a10,
           a3,
           v12,
           a5 - a12,
           a6,
           a7,
           a8);
}
