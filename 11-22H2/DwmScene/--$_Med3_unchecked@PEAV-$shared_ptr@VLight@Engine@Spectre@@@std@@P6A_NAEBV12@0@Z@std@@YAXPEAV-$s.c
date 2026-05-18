/*
 * XREFs of ??$_Med3_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@00P6A_NAEBV10@1@Z@Z @ 0x18007151C
 * Callers:
 *     ??$_Guess_median_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@00P6A_NAEBV10@1@Z@Z @ 0x1800712A0 (--$_Guess_median_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YA.c)
 * Callees:
 *     ??$iter_swap@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD30 (--$iter_swap@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV-$shared_ptr@VCa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  __int64 result; // rax

  if ( a4(a2, a1) )
    std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
  result = ((__int64 (__fastcall *)(__int64, __int64))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
    result = ((__int64 (__fastcall *)(__int64, __int64))a4)(a2, a1);
    if ( (_BYTE)result )
      return std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
  }
  return result;
}
