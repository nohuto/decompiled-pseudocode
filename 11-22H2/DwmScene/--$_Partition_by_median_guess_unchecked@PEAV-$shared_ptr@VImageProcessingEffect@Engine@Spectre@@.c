/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@0P6A_NAEBV20@1@Z@Z @ 0x1800715D0
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0_JP6A_NAEBV10@2@Z@Z @ 0x180071A1C (--$_Sort_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV-$s.c)
 * Callees:
 *     ??$iter_swap@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD30 (--$iter_swap@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV-$shared_ptr@VCa.c)
 *     ??$_Guess_median_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@00P6A_NAEBV10@1@Z@Z @ 0x1800712A0 (--$_Guess_median_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,bool (*)(std::shared_ptr<Spectre::Engine::ImageProcessingEffect> const &,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> const &)>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 (__fastcall *a4)(unsigned __int64, unsigned __int64))
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  unsigned __int8 (__fastcall *v7)(unsigned __int64, unsigned __int64); // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 *result; // rax

  v5 = a3;
  v6 = a2 + 16 * ((__int64)(a3 - a2) >> 5);
  v7 = a4;
  std::_Guess_median_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
    a2,
    v6,
    a3 - 16);
  v8 = v6 + 16;
  if ( a2 < v6 )
  {
    do
    {
      v9 = v6 - 16;
      if ( v7(v6 - 16, v6) )
        break;
      if ( v7(v6, v6 - 16) )
        break;
      v6 -= 16LL;
    }
    while ( a2 < v9 );
  }
  while ( v8 < v5 && !v7(v8, v6) && !v7(v6, v8) )
    v8 += 16LL;
  v10 = v8;
  v11 = v6;
  while ( 1 )
  {
    while ( v10 < v5 )
    {
      if ( v7(v6, v10) )
        goto LABEL_17;
      if ( v7(v10, v6) )
        break;
      if ( v8 != v10 )
        std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
      v8 += 16LL;
LABEL_17:
      v10 += 16LL;
    }
    if ( a2 < v11 )
    {
      v12 = v11 - 16;
      do
      {
        if ( !a4(v12, v6) )
        {
          if ( a4(v6, v12) )
            break;
          v6 -= 16LL;
          if ( v6 != v12 )
            std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
        }
        v11 -= 16LL;
        v12 -= 16LL;
      }
      while ( a2 < v11 );
      v5 = a3;
      v7 = a4;
    }
    if ( v11 == a2 )
      break;
    v11 -= 16LL;
    if ( v10 != v5 )
      goto LABEL_35;
    v6 -= 16LL;
    if ( v11 != v6 )
      std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
    v8 -= 16LL;
LABEL_36:
    std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
  }
  if ( v10 != v5 )
  {
    if ( v8 != v10 )
      std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
    v8 += 16LL;
    v6 += 16LL;
LABEL_35:
    v10 += 16LL;
    goto LABEL_36;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
