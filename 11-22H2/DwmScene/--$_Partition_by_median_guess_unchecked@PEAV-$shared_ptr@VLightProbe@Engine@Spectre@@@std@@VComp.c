/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YA?AU?$pair@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@0VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A4308
 * Callers:
 *     ?SortLightProbes@LightGatherer@Engine@Spectre@@CAXAEAV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@@Z @ 0x1800A46B8 (-SortLightProbes@LightGatherer@Engine@Spectre@@CAXAEAV-$vector@V-$shared_ptr@VLightProbe@Engine@.c)
 * Callees:
 *     ??$iter_swap@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD30 (--$iter_swap@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV-$shared_ptr@VCa.c)
 *     ??$_Guess_median_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAXPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@00VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A40E4 (--$_Guess_median_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbe.c)
 *     ??RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@0@Z @ 0x1800A44D4 (--RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV-$shared_ptr@VLightProbe@.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 *result; // rax

  v6 = a2 + 16 * ((__int64)(a3 - a2) >> 5);
  std::_Guess_median_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
    a2,
    v6,
    a3 - 16);
  v8 = v6 + 16;
  if ( a2 < v6 )
  {
    do
    {
      if ( (unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v7, v6 - 16, v6) )
        break;
      if ( (unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v7, v6, v9) )
        break;
      v6 = v10;
    }
    while ( a2 < v10 );
  }
  while ( v8 < a3
       && !(unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v7, v8, v6)
       && !(unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v7, v6, v8) )
    v8 += 16LL;
  v11 = v8;
  v12 = v6;
  while ( 1 )
  {
    while ( v11 < a3 )
    {
      if ( (unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v7, v6, v11) )
        goto LABEL_17;
      if ( (unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v7, v11, v6) )
        break;
      if ( v8 != v11 )
        std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
      v8 += 16LL;
LABEL_17:
      v11 += 16LL;
    }
    if ( a2 < v12 )
    {
      v13 = v12 - 16;
      do
      {
        if ( !(unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v7, v13, v6) )
        {
          if ( (unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v7, v6, v13) )
            break;
          v6 -= 16LL;
          if ( v6 != v13 )
            std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
        }
        v12 -= 16LL;
        v13 -= 16LL;
      }
      while ( a2 < v12 );
    }
    if ( v12 == a2 )
      break;
    v12 -= 16LL;
    if ( v11 == a3 )
    {
      v6 -= 16LL;
      if ( v12 != v6 )
        std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
    }
LABEL_33:
    std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
  }
  if ( v11 != a3 )
  {
    if ( v8 != v11 )
      std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
    v6 += 16LL;
    goto LABEL_33;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
