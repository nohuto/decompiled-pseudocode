/*
 * XREFs of ??$_Guess_median_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@00P6A_NAEBV10@1@Z@Z @ 0x1800712A0
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@0P6A_NAEBV20@1@Z@Z @ 0x1800715D0 (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@00P6A_NAEBV10@1@Z@Z @ 0x18007151C (--$_Med3_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV-$s.c)
 */

__int64 __fastcall std::_Guess_median_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbp

  v4 = (a3 - a1) >> 4;
  if ( v4 <= 40 )
  {
    v8 = a1;
    v9 = a3;
  }
  else
  {
    v6 = (v4 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
      a1,
      v7 + a1,
      v6 + a1);
    std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
      a2 - v7,
      a2,
      v7 + a2);
    v9 = a3 - v7;
    std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
      a3 - v6,
      a3 - v7,
      a3);
  }
  return std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
           v8,
           a2,
           v9);
}
