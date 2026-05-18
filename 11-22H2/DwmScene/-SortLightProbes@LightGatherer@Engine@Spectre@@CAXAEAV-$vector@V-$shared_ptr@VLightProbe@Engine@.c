/*
 * XREFs of ?SortLightProbes@LightGatherer@Engine@Spectre@@CAXAEAV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@@Z @ 0x1800A46B8
 * Callers:
 *     ?Gather@LightGatherer@Engine@Spectre@@SAXAEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@AEAV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@5@AEAV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@5@@Z @ 0x1800A4544 (-Gather@LightGatherer@Engine@Spectre@@SAXAEBV-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@std@.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@QEAV10@0VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A41A0 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightPro.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YA?AU?$pair@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@0VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A4308 (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VComp.c)
 */

unsigned __int64 *__fastcall Spectre::Engine::LightGatherer::SortLightProbes(__int64 a1)
{
  std::_Ref_count_base *v1; // rdi
  char *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 *result; // rax
  char *v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  v1 = *(std::_Ref_count_base **)a1;
  v2 = *(char **)(a1 + 8);
  v3 = *(_QWORD *)a1 + 16LL;
  if ( (char *)v3 != v2 )
  {
    while ( (__int64)((v2 - (char *)v1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
    {
      result = std::_Partition_by_median_guess_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
                 (unsigned __int64 *)&v5,
                 (unsigned __int64)v1,
                 (unsigned __int64)v2);
      if ( (unsigned __int64)v6 > v3 )
      {
        v2 = v5;
        if ( (unsigned __int64)v5 <= v3 )
          return result;
      }
      else
      {
        v1 = v6;
      }
    }
    return std::_Insertion_sort_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
             v1,
             v2);
  }
  return result;
}
