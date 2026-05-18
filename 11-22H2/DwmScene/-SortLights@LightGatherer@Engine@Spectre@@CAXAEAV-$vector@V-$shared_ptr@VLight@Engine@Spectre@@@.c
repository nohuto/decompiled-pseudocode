/*
 * XREFs of ?SortLights@LightGatherer@Engine@Spectre@@CAXAEAV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@@Z @ 0x1800A4740
 * Callers:
 *     ?Gather@LightGatherer@Engine@Spectre@@SAXAEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@AEAV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@5@AEAV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@5@@Z @ 0x1800A4544 (-Gather@LightGatherer@Engine@Spectre@@SAXAEBV-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@std@.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Spectre::Engine::LightGatherer::SortLights(__int64 **a1)
{
  return std::_Sort_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
           *a1,
           a1[1],
           ((char *)a1[1] - (char *)*a1) >> 4,
           (unsigned __int8 (__fastcall *)(__int64, __int64))Spectre::Engine::LightGatherer::CompareLightsPriority);
}
