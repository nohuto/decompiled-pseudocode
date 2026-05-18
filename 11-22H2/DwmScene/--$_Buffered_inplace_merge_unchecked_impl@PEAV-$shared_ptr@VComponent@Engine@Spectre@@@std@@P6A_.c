/*
 * XREFs of ??$_Buffered_inplace_merge_unchecked_impl@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039F18
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039DF8 (--$_Buffered_inplace_merge_unchecked@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Buffered_inplace_merge_unchecked_impl<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, unsigned __int64))
{
  if ( a4 <= a5 && a4 <= a7 )
    return std::_Inplace_merge_buffer_left<std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
             a1,
             a2,
             a3,
             a6,
             (__int64)a8);
  if ( a5 > a7 )
    return std::_Buffered_inplace_merge_divide_and_conquer<std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  return std::_Inplace_merge_buffer_right<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
           a1,
           a2,
           a3,
           a6,
           (__int64)a8);
}
